module Encoder83(
    input[7:0] x,
    input en,
    output reg[2:0] y,
    output reg zero
);
  always @(x or en) begin
    if (en) begin
        casex(x)
            8'b0000000x:    y = 3'b000;
            8'b0000001x:    y = 3'b001;
            8'b000001xx:    y = 3'b010;
            8'b00001xxx:    y = 3'b011;
            8'b0001xxxx:    y = 3'b100;
            8'b001xxxxx:    y = 3'b101;
            8'b01xxxxxx:    y = 3'b110;
            8'b1xxxxxxx:    y = 3'b111;
        endcase
        zero = (x == 8'h00) ? 1'b0 : 1'b1;
    end
    else begin
        y = 3'b000;
        zero = 1'b0;
    end
  end
endmodule