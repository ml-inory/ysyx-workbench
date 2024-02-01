module FullAdder(
    input a,
    input b,
    input ci,
    output s,
    output co
);
    wire xor_ab;
    assign xor_ab = a ^ b;
    assign s = xor_ab ^ ci;
    assign co = (a & b) ^ (ci & xor_ab);
endmodule