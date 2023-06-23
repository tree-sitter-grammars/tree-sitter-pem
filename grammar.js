/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://github.com/openssl/openssl/blob/master/include/openssl/pem.h#L35C31-L60|PEM labels}
 */

module.exports = grammar({
  name: 'pem',

  extras: _ => [/\r?\n/],

  rules: {
    pem: $ => repeat(
      choice($.content, $.comment)
    ),

    content: $ => seq(
      $.header,
      $.data,
      $.footer
    ),

    header: $ => seq(
      $.dashes,
      'BEGIN',
      ' ',
      $.label,
      $.dashes,
    ),

    footer: $ => seq(
      $.dashes,
      'END',
      ' ',
      $.label,
      $.dashes,
    ),

    data: _ => repeat1(/[A-Za-z0-9+/]+={0,2}/),

    label: _ => token(choice(
      'X509 CERTIFICATE',
      'CERTIFICATE',
      'TRUSTED CERTIFICATE',
      'NEW CERTIFICATE REQUEST',
      'CERTIFICATE REQUEST',
      'X509 CRL',
      'ANY PRIVATE KEY',
      'PUBLIC KEY',
      'RSA PRIVATE KEY',
      'RSA PUBLIC KEY',
      'DSA PRIVATE KEY',
      'DSA PUBLIC KEY',
      'PKCS7',
      'PKCS #7 SIGNED DATA',
      'ENCRYPTED PRIVATE KEY',
      'PRIVATE KEY',
      'DH PARAMETERS',
      'X9.42 DH PARAMETERS',
      'SSL SESSION PARAMETERS',
      'DSA PARAMETERS',
      'ECDSA PUBLIC KEY',
      'EC PARAMETERS',
      'EC PRIVATE KEY',
      'PARAMETERS',
      'CMS',
      'SM2 PARAMETERS',
    )),

    dashes: _ => '-----',

    comment: _ => token(prec(-2, /.+/))
  }
});
