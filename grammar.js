module.exports = grammar({
  name: 'vue',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.add,
      $.sub,
      $.mul,
      $.div,
    ),

    add: $ => seq('ADD', $.number),

    sub: $ => seq('SUB', $.number),

    mul: $ => seq('MUL', $.number),

    div: $ => seq('DIV', $.number),

    number: $ => /[0-9]+/,
  }
});
