#include <DueTimer.h>
int LED1 = 4;
int LED2 = 5;
int LED3 = 6;
int LED4 = 7;
int LED5 = 8;
int LED6 = 9;
int LED7 = 10;
int LED8 = 11;
int LED9 = 12;
int LED10 = 13;
int PB1 = 22;
int PB2 = 23;
int PB3 = 24;
int PB4 = 25;
int PB5 = 26;
int PB6 = 27;
int PB7 = 28;
int PB8 = 29;
int PB9 = 30;
int PB10 = 31;
int PB11 =32;

bool state = false;
bool state1 = false;
bool state2 = false;
bool state3 = false;
bool state4 = false;

void setup() {
 // put your setup code here, to run once:
pinMode( LED1 , OUTPUT );
pinMode( LED2 , OUTPUT );
pinMode( LED3 , OUTPUT );
pinMode( LED4 , OUTPUT );
pinMode( LED5 , OUTPUT );
pinMode( LED6 , OUTPUT );
pinMode( LED7 , OUTPUT );
pinMode( LED8 , OUTPUT );
pinMode( LED9 , OUTPUT );
pinMode( LED10 , OUTPUT );
pinMode(PB1, INPUT_PULLUP);
pinMode(PB2, INPUT_PULLUP);
pinMode(PB3, INPUT_PULLUP);
pinMode(PB4, INPUT_PULLUP);
pinMode(PB5, INPUT_PULLUP);
pinMode(PB6, INPUT_PULLUP);
pinMode(PB7, INPUT_PULLUP);
pinMode(PB8, INPUT_PULLUP);
pinMode(PB9, INPUT_PULLUP);
pinMode(PB10, INPUT_PULLUP);
pinMode(PB11, INPUT_PULLUP);

attachInterrupt(digitalPinToInterrupt(PB1),pattern1,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB2),pattern2,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB3),pattern3,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB4),pattern4,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB5),pattern5,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB6),pattern6,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB7),pattern7,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB8),pattern8,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB9),pattern9,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB10),pattern10,CHANGE);
attachInterrupt(digitalPinToInterrupt(PB11),pattern11,CHANGE);

Timer0.attachInterrupt(Handler0);
Timer1.attachInterrupt(Handler1);
Timer2.attachInterrupt(Handler2);
Timer3.attachInterrupt(Handler3);
Timer4.attachInterrupt(Handler4);

}

void loop() {
 // put your main code here, to run repeatedly:
digitalWrite(LED1,state);
digitalWrite(LED2,state);
digitalWrite(LED3,state1);
digitalWrite(LED4,state1);
digitalWrite(LED5,state2);
digitalWrite(LED6,state2);
digitalWrite(LED7,state3);
digitalWrite(LED8,state3);
digitalWrite(LED9,state4);
digitalWrite(LED10,state4);
}

void pattern1(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1000000);
Timer1.start(1100000);
Timer2.start(1200000);
Timer3.start(1300000);
Timer4.start(1400000);
}
void pattern2(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1000000);
Timer1.start(1200000);
Timer2.start(1400000);
Timer3.start(1600000);
Timer4.start(1800000);
}
void pattern3(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1800000);
Timer1.start(1600000);
Timer2.start(1400000);
Timer3.start(1200000);
Timer4.start(1000000);
}
void pattern4(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1400000);
Timer1.start(1600000);
Timer2.start(1800000);
Timer3.start(1600000);
Timer4.start(1400000);
}
void pattern5(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1400000);
Timer1.start(1200000);
Timer2.start(1000000);
Timer3.start(1200000);
Timer4.start(1400000);
}
void pattern6(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1600000);
Timer1.start(1800000);
Timer2.start(1600000);
Timer3.start(1800000);
Timer4.start(1600000);
}
void pattern7(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1100000);
Timer1.start(1100000);
Timer2.start(1500000);
Timer3.start(1500000);
Timer4.start(1500000);
}
void pattern8(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1100000);
Timer1.start(1100000);
Timer2.start(1100000);
Timer3.start(1500000);
Timer4.start(1500000);
}
void pattern9(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1100000);
Timer1.start(1100000);
Timer2.start(1100000);
Timer3.start(1100000);
Timer4.start(1500000);
}
void pattern10(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(1000000);
Timer1.start(1000000);
Timer2.start(1000000);
Timer3.start(1000000);
Timer4.start(1000000); }
void pattern11(){
state = false;
state1 = false;
state2 = false;
state3 = false;
state4 = false;
Timer0.start(100000);
Timer1.start(100000);
Timer2.start(100000);
Timer3.start(100000);
Timer4.start(100000); }
void Handler0(){
state=!state; }
void Handler1(){
state1=!state1; }
void Handler2(){
state2=!state2;

}
void Handler3(){
state3=!state3;

}
 void Handler4(){
state4=!state4; }