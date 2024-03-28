// -*- js-indent-level: 2; -*-

module.exports = grammar({
  name: 'test',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.operation,
      $.comment,
    ),

    comment: $ => /\/\/.*/,

    operation: $ => seq(
      $.operator,
      $.operand,
    ),

    operator: $ => choice(
      'ADD',
      'SUB',
      'MUL',
      'DIV',
    ),

    operand: $ => $._number,

    _number: $ => /[0-9]+/,
  }
});
