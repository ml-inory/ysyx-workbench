module Mux(
    input x0,
    input x1,
    input y,
    output f
);
    assign f = (!y & x0) | (y & x1);
endmodule