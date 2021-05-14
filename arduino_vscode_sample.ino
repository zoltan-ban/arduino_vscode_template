
#include <Arduino.h>
#include <HardwareSerial.h>

#include "print_serial.h"



void setup() {
    Serial.begin(9600);
    p("\n\rVSCode sample application\n\r");
}

void loop() {
    uint8_t counter = 0;
    while(1){
        p("Counter value: %d\n\r", counter);
        counter++;
        delay(2000);
    }
}