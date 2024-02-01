#include <nvboard.h>
#include "VMux4Way.h"

void nvboard_bind_all_pins(VMux4Way* top) {
	nvboard_bind_pin( &top->y, 2, SW1, SW0);
	nvboard_bind_pin( &top->x0, 1, SW5);
	nvboard_bind_pin( &top->x1, 1, SW4);
	nvboard_bind_pin( &top->x2, 1, SW3);
	nvboard_bind_pin( &top->x3, 1, SW2);
	nvboard_bind_pin( &top->f, 1, LD15);
}
