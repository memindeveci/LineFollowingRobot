#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
int colorCode1= 200;
int colorCode2=200;

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(50);
  motor1.run(RELEASE);
  motor2.setSpeed(50);
  motor2.run(RELEASE);
}

void loop() {
  // put your main code here, to run repeatedly:
  //u_int8t i;

  int cnyValue1= analogRead(A0);
  int cnyValue2= analogRead(A2);

  if(cnyValue1>colorCode1 && cnyValue2>colorCode2){
    int cnyValue1= analogRead(A0);
    int cnyValue2= analogRead(A2);
    motor1.run(FORWARD);
    motor2.run(FORWARD);
    delay(100);
  }

  if(cnyValue1<colorCode1){
    int cnyValue= analogRead(A0);
    int cnyValue2= analogRead(A2);
    motor1.run(RELEASE);
    motor1.run(FORWARD);
  }

  if(cnyValue2<colorCode2){
    int cnyValue= analogRead(A0);
    int cnyValue2= analogRead(A2);
    motor1.run(FORWARD);
    motor1.run(RELEASE);
 
  }
  
}
