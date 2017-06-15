/* 40 x 4 LCD Example Application
  
   Author: scandox@gmail.com

   This example code is in the Public Domain

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lcd_dual.h"

void app_main()
{
  // See lcd_dual.h for details of pins
  struct lcd_screen_pins pins = { 22, 23, 19, 18, 17, 16, 21 }; 
  struct lcd_screen * screen = lcd_screen_init(pins);

  lcd_screen_write_text(screen, "He hunts not fish, but as an officer, Stays in his court, as his own net, and there All suitors of all sorts themselves enthral; So on his back lies this whale");

  lcd_screen_destroy(screen);
}
