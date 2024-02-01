module top(
    input[3:0] a,
    input[3:0] b,
    output reg[7:0] h,
    output overflow
);
    wire[3:0] s;

    FourBitAdder fa(
        .a(a),
        .b(b),
        .s(s),
        .overflow(overflow)
    );

    bcd8seg seg(
        .b(s),
        .h(h)
    );
endmodule