#include "schoolkits.h"

int main(void)
{
       start();
       while(1)
       {
              motor(0, DIR_CW, 0);
              motor(2, DIR_CW, 0);
              switch(getRemocon())
              {
                     case 0x01: // IR Remocon8Key, port7
                            motor(0, DIR_CCW, 15);
                            motor(2, DIR_CCW, 15);
                     break;
                     case 0x02: // IR Remocon8Key, port7
                            motor(0, DIR_CW, 15);
                            motor(2, DIR_CW, 15);
                     break;
                     case 0x04: // IR Remocon8Key, port7
                            motor(0, DIR_CCW, 15);
                            motor(2, DIR_CW, 15);
                     break;
                     case 0x08: // IR Remocon8Key, port7
                            motor(0, DIR_CW, 15);
                            motor(2, DIR_CCW, 15);
                     break;
                     case 0x10: // IR Remocon8Key, port7
                            servo1(0);
                     break;
                     case 0x20: // IR Remocon8Key, port7
                            servo1(74);
                     break;
                     case 0x40: // IR Remocon8Key, port7
                            servo2(214);
                     break;
                     case 0x80: // IR Remocon8Key, port7
                            servo2(97);
                     break;
                     default :
                            delay(100);
                     break;
              }
       }
       end();
       return 0;
}
