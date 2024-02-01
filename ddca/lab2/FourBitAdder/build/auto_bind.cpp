#include <nvboard.h>
#include "VFourBitAdder.h"

void nvboard_bind_all_pins(VFourBitAdder* top) {
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->s, 5, LD4, LD3, LD2, LD1, LD0);
}
