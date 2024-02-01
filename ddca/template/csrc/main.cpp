//
// Created by 祈Inory on 2024/1/28.
// Copyright (c) 2024 BBK. All rights reserved.
//
#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
    dut.eval();
}

//static void reset(int n) {
//    dut.rst = 1;
//    while (n -- > 0) single_cycle();
//    dut.rst = 0;
//}

int main() {
    nvboard_bind_all_pins(&dut);
    nvboard_init();

//    reset(10);

    while(1) {
        nvboard_update();
        single_cycle();
    }
}
