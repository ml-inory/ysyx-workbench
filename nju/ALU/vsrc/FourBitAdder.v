module FourBitAdder(
    input[3:0] a,
    input[3:0] b,
    output reg[3:0] s,
    output overflow
);
    wire[2:0] co_temp;

    FullAdder fa0(
        .a(a[0]),
        .b(b[0]),
        .ci(1'b0),
        .s(s[0]),
        .co(co_temp[0])
    );

    FullAdder fa1(
        .a(a[1]),
        .b(b[1]),
        .ci(co_temp[0]),
        .s(s[1]),
        .co(co_temp[1])
    );

    FullAdder fa2(
        .a(a[2]),
        .b(b[2]),
        .ci(co_temp[1]),
        .s(s[2]),
        .co(co_temp[2])
    );

    FullAdder fa3(
        .a(a[3]),
        .b(b[3]),
        .ci(co_temp[2]),
        .s(s[3]),
        .co(overflow)
    );

endmodule