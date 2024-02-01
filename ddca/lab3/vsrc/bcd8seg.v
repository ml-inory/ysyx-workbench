module bcd8seg(
  input  [3:0] b,
  output reg [7:0] h
);
    always @(*) begin
        case(b)
            4'h0:   h = ~8'b11111100;
            4'h1:   h = ~8'b01100000;
            4'h2:   h = ~8'b11011010;
            4'h3:   h = ~8'b11110010;
            4'h4:   h = ~8'b01100110;
            4'h5:   h = ~8'b10110110;
            4'h6:   h = ~8'b10111110;
            4'h7:   h = ~8'b11100000;
            4'h8:   h = ~8'b11111110;
            4'h9:   h = ~8'b11110110;
            4'ha:   h = ~8'b11111100;
            4'hb:   h = ~8'b01100000;
            4'hc:   h = ~8'b11011010;
            4'hd:   h = ~8'b11110010;
            4'he:   h = ~8'b01100110;
            4'hf:   h = ~8'b10110110;
            default:    h = 8'hff;
        endcase
    end
endmodule