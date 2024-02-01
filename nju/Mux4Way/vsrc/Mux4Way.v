module Mux4Way(
    input x0,
    input x1,
    input x2,
    input x3,
    input[1:0] y,
    output f
);
    wire f0, f1;

    Mux mux0(
        .x0(x0),
        .x1(x1),
        .y(y[0]),
        .f(f0)
    );

    Mux mux1(
        .x0(x2),
        .x1(x3),
        .y(y[0]),
        .f(f1)
    );

    Mux mux2(
        .x0(f0),
        .x1(f1),
        .y(y[1]),
        .f(f)
    );

endmodule