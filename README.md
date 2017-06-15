# esp32_lcd_example

Example application that writes text to a 40 x 4 LCD using GPIO pins on an ESP32

The wiring used for this example would be something like:

1. ESP32 5V -> Power Line (on breadboard). The Power line then connects to PIN12 and PIN14 on the LCD (Input Voltage for LCD and Supply Voltage for Logic)
2. ESP32 GROUND -> Ground Line (on breadboard). The Ground line then connects to PIN10 on LCD (R/W - prevents feedback) and PIN13 (VSS GROUND).
3. ESP32 1022 -> PIN11 on LCD (RS)
4. ESP32 1023 -> PIN9 on LCD (E1)
5. ESP32 1019 -> PIN4 on LCD (Data Bit 4)
6. ESP32 1018 -> PIN3 on LCD (Data Bit 5)
7. ESP32 1017 -> PIN2 on LCD (Data Bit 6)
8. ESP32 1016 -> PIN1 on LCD (Data Bit 7)
9. ESP32 1021 -> PIN15 on LCD (EN2)
