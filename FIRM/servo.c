#include <stdint.h>

#ifndef CPU_FREQ_HZ
#define CPU_FREQ_HZ 12000000
#endif

// Array of memory-mapped registers for 4 servos
static volatile uint32_t* const IO_SERVOS[4] = {
    (volatile uint32_t*) 0x00400020, // Servo 1 (Bit 3)
    (volatile uint32_t*) 0x00400040, // Servo 2 (Bit 4)
    (volatile uint32_t*) 0x00400080, // Servo 3 (Bit 5)
    (volatile uint32_t*) 0x00400100  // Servo 4 (Bit 6)
};

#define SERVO_MIN_DUTY (CPU_FREQ_HZ / 1000)      // 1.0 ms -> ~0 deg
#define SERVO_MAX_DUTY (CPU_FREQ_HZ * 2 / 1000)  // 2.0 ms -> ~180 deg

// Function prototypes provided by system library
extern void print_string(const char* s);
extern void print_dec(int num);
extern void wait(void);

void delay_ms(int ms) {
    for (int i = 0; i < ms; i++) {
        wait();
    }
}

// Set angle (0 to 180) for a specific servo channel (0 to 3)
void set_servo_angle(uint8_t channel, int angle) {
    if (channel >= 4) return;
    if (angle < 0) angle = 0;
    if (angle > 180) angle = 180;

    uint32_t duty = SERVO_MIN_DUTY + (((SERVO_MAX_DUTY - SERVO_MIN_DUTY) * angle) / 180);
    *IO_SERVOS[channel] = duty;
}

// Write target angles to all 4 channels simultaneously
void set_all_servos(int a0, int a1, int a2, int a3) {
    set_servo_angle(0, a0);
    set_servo_angle(1, a1);
    set_servo_angle(2, a2);
    set_servo_angle(3, a3);
}

int main(void) {
    print_string("\r\n=== 4-Channel Parallel Servo Controller Initialized ===\r\n");

    // Initial Home Setup
    set_all_servos(0, 45, 90, 180);
    delay_ms(1000);

    while (1) {
        // Mode A: Synchronous Parallel Sweep
        print_string("Mode A: Parallel Lockstep Sweep\r\n");
        for (int angle = 0; angle <= 180; angle += 15) {
            set_all_servos(angle, angle, angle, angle);
            delay_ms(80);
        }
        for (int angle = 180; angle >= 0; angle -= 15) {
            set_all_servos(angle, angle, angle, angle);
            delay_ms(80);
        }

        delay_ms(500);

        // Mode B: Mirrored Parallel Motion
        print_string("Mode B: Mirrored Parallel Motion\r\n");
        for (int angle = 0; angle <= 180; angle += 10) {
            set_servo_angle(0, angle);
            set_servo_angle(1, 180 - angle);
            set_servo_angle(2, angle);
            set_servo_angle(3, 180 - angle);
            delay_ms(50);
        }
        
        delay_ms(500);

        // Mode C: Multi-axis Corner Positions
        print_string("Mode C: Multi-axis Corner Positions\r\n");
        set_all_servos(0, 180, 0, 180);
        // delay_ms(800);

        set_all_servos(180, 0, 180, 0);
        // delay_ms(800);

        set_all_servos(90, 90, 90, 90);
        delay_ms(800);
    }

    return 0;
}