module top(
    input left,
    input right,
    input rst,
    input clk,
    output reg LA,
    output reg LB,
    output reg LC,
    output reg RA,
    output reg RB,
    output reg RC
);
    wire clk_en;
    reg[3:0] state;

    clk_div clk_div_0(
        .clk(clk),
        .rst(rst),
        .clk_en(clk_en)
    );

    always @(posedge clk_en) begin
        if (rst)
            state <= 4'h0;
        else
            state <= state + 1;
            if (state == 4'h5)
                state <= 4'h0;
    end

    always @(posedge clk_en) begin
        if (rst) begin
            LA = 0;
            LB = 0;
            LC = 0;
            RA = 0;
            RB = 0;
            RC = 0;
        end
        if (left) begin
            case(state)
                4'h1:   LA = 1;
                4'h2:   LB = 1;
                4'h3:   LC = 1;
                default:
                begin
                    LA = 0;
                    LB = 0;
                    LC = 0;
                end
            endcase
        end
        else if (right) begin
            case(state)
                4'h1:   RA = 1;
                4'h2:   RB = 1;
                4'h3:   RC = 1;
                default:
                begin
                    RA = 0;
                    RB = 0;
                    RC = 0;
                end
            endcase
        end
    end
endmodule