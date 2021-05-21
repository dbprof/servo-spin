#include <Servo.h>

Servo spinservo;  
//статическое положение
int iNULLPos = 90;
//вращение по часовой стрелке 91-100 (чем больше отклонение от 90, тем быстрее вращение)
int iPLUSPos = 100;
//вращение против часовой стрелки 89-80 (чем больше отклонение от 90, тем быстрее вращение)
int iMINPos = 80;

void setup() {
  spinservo.attach(9);
  spinservo.write(iMINPos); // iPLUSPos/iMINPos
  delay(1000);
}
void loop() {
}
