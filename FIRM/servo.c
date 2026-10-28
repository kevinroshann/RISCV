#include <stdint.h>

#ifndef CPU_FREQ_HZ
#define CPU_FREQ_HZ 12000000
#endif

// Memory-mapped registers for 4 servos
static volatile uint32_t * const IO_SERVOS[4] = {
    (volatile uint32_t*) 0x00400020, // Servo 1 (Bit 3)
    (volatile uint32_t*) 0x00400040, // Servo 2 (Bit 4)
    (volatile uint32_t*) 0x00400080, // Servo 3 (Bit 5)
    (volatile uint32_t*) 0x00400100  // Servo 4 (Bit 6)
};

#define SERVO_MIN_DUTY (CPU_FREQ_HZ / 1000)      // 1.0 ms -> ~0 deg
#define SERVO_MAX_DUTY (CPU_FREQ_HZ * 2 / 1000)  // 2.0 ms -> ~180 deg

extern void print_string(const char* s);

// Set angle (0 to 180) for a specific servo channel (0 to 3)
void set_servo_angle(uint8_t channel, int angle) {
    if (channel >= 4) return;
    if (angle < 0) angle = 0;
    if (angle > 180) angle = 180;

    uint32_t duty = SERVO_MIN_DUTY + (((SERVO_MAX_DUTY - SERVO_MIN_DUTY) * angle) / 180);
    *IO_SERVOS[channel] = duty;
}

// Write target angles to all 4 channels simultaneously
void set_all_servos(int angle) {
    set_servo_angle(0, angle);
    set_servo_angle(1, angle);
    set_servo_angle(2, angle);
    set_servo_angle(3, angle);
}

// Simple busy loop to allow hardware gear movement between steps
void move_pause(void) {
    for (volatile int i = 0; i < 150000; i++) {
        __asm__("nop");
    }
}

int main(void) {
    print_string("\r\n=== 4-Servo Back-and-Forth Motion Started ===\r\n");

    while (1) {
        // Sweep forward from 0° to 180°
        for (int angle = 0; angle <= 180; angle += 5) {
            set_all_servos(angle);
            move_pause();
        }

        // Sweep backward from 180° to 0°
        for (int angle = 180; angle >= 0; angle -= 5) {
            set_all_servos(angle);
            move_pause();
        }
    }

    return 0;
}