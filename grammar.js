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
      $.type,
      $.dashes
    ),

    footer: $ => seq(
      $.dashes,
      'END',
      $.type,
      $.dashes
    ),

    data: _ => repeat1(/[A-Za-z0-9+/]+={0,2}/),

    type: _ => / [A-Z ]+/,

    dashes: _ => '-----',

    comment: _ => token(prec(-2, /.+/))
  }
});
