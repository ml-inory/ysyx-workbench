module top(
    input[7:0] x,
    input en,
    output reg[2:0] y,
    output reg zero,
    output reg [7:0] h
);
    wire[3:0] enc_out;
    assign enc_out[2] = 0;

    Encoder83 enc(
        .x(x),
        .en(en),
        .y(enc_out[2:0]),
        .zero(zero)
    );

    bcd8seg seg(
        .b(enc_out),
        .h(h)
    );
endmodule