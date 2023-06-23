/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
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

    label: _ => /[^-]+/,

    dashes: _ => '-----',

    comment: _ => token(prec(-2, /.+/))
  }
});
