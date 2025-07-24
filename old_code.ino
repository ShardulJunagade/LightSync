#include <Adafruit_NeoPixel.h>
#include <Servo.h>
#define Pin 3
#define numLed 6
#define dval 10
#define dval2 (dval / 2)
Servo myservo;
const int  ldrPin = A0;
const int trigPin1 = 9;
const int echoPin1 = 10;
int pos = 0;
long duration1;
int distance1;
Adafruit_NeoPixel led = Adafruit_NeoPixel(numLed, Pin);

void setup(){
  led.begin();
  Serial.begin(9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(Pin, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin,  INPUT);
  myservo.attach(11);
}

void loop(){
  int  ldrStatus = analogRead(ldrPin);
  Serial.println(ldrStatus);
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 * 0.034 / 2;

  Serial.print("Distance1: ");
  Serial.println(distance1);
  if (ldrStatus >=1000 & distance1<10) {
    Fade255();
      delay(dval);
    myservo.write(180);
    // delay(15);
  }
  if (ldrStatus >1000 & distance1>50) {
    Fade255();
      delay(dval);
    myservo.write(0);
    // delay(15);
  }
  if (ldrStatus >=700 & distance1<10) {
    Fade10();
      delay(dval);
  }
  else if (ldrStatus >=675 & distance1<25) {
    Fade20();
      delay(dval);
  }
  else if (ldrStatus >=650 & distance1<30) {
    Fade30();
      delay(dval);
  }
  else if (ldrStatus >=625 & distance1<35) {
    Fade40();
      delay(dval);
  }
  else if (ldrStatus >=600 & distance1<40) {
    Fade50();
      delay(dval);
  }
  else if (ldrStatus >=575 & distance1<45) {
    Fade60();
      delay(dval);
  }
  else if (ldrStatus >=550 & distance1<50) {
    Fade70();
      delay(dval);
  }
  else if (ldrStatus >=525 & distance1<55) {
    Fade80();
      delay(dval);
  }
  else if (ldrStatus >=500 & distance1<60) {
    Fade90();
      delay(dval);
  }
  else if (ldrStatus >=475 & distance1<65) {
    Fade100();
      delay(dval);
  }
  else if (ldrStatus >=450 & distance1<65) {
    Fade110();
      delay(dval);
  }
  else if (ldrStatus >=425 & distance1<70) {
    Fade120();
      delay(dval);
  }
  else if (ldrStatus >=400 & distance1<80) {
    Fade130();
      delay(dval);
  }
  else if (ldrStatus >=375 & distance1<90) {
    Fade140();
      delay(dval);
  }
  else if (ldrStatus >=350 & distance1<92) {
    Fade150();
      delay(dval);
  }
  else if (ldrStatus >=325 & distance1<94) {
    Fade160();
      delay(dval);
  }
  else if (ldrStatus >=300 & distance1<96) {
    Fade170();
      delay(dval);
  }
  else if (ldrStatus >=275 & distance1<97) {
    Fade180();
      delay(dval);
  }
  else if (ldrStatus >=250 & distance1<98) {
    Fade190();
      delay(dval);
  }
  else if (ldrStatus >=225 & distance1<99) {
    Fade200();
      delay(dval);
  }
  else if (ldrStatus >=200 & distance1<99) {
    Fade210();
      delay(dval);
  }
  else if (ldrStatus >=150 & distance1<99) {
    Fade220();
      delay(dval);
  }
  else if (ldrStatus >=100 & distance1<100) {
    Fade230();
      delay(dval);
  }
  else if (ldrStatus >=75 & distance1<120) {
    Fade240();
      delay(dval);
  }
  else if (ldrStatus >=50 & distance1<150) {
    Fade255();
      delay(dval2);
  }
}

void Fade10(){setColor(10,10,10);}
void Fade20(){setColor(20,20,20);}
void Fade30(){setColor(30,30,30);}
void Fade40(){setColor(40,40,40);}
void Fade50(){setColor(50,50,50);}
void Fade60(){setColor(60,60,60);}
void Fade70(){setColor(70,70,70);}
void Fade80(){setColor(80,80,80);}
void Fade90(){setColor(90,90,90);}
void Fade100(){setColor(100,100,100);}
void Fade110(){setColor(110,110,110);}
void Fade120(){setColor(120,120,120);}
void Fade130(){setColor(130,130,130);}
void Fade140(){setColor(140,140,140);}
void Fade150(){setColor(150,150,150);}
void Fade160(){setColor(160,160,160);}
void Fade170(){setColor(170,170,170);}
void Fade180(){setColor(180,180,180);}
void Fade190(){setColor(190,190,190);}
void Fade200(){setColor(200,200,200);}
void Fade210(){setColor(210,210,210);}
void Fade220(){setColor(220,220,220);}
void Fade230(){setColor(230,230,230);}
void Fade240(){setColor(240,240,240);}
void Fade250(){setColor(250,250,250);}
void Fade255(){setColor(255,255,255);}

void setColor(int red, int green, int blue){
  for (uint8_t i = 0; i < 8; i++){
    led.setPixelColor(i, led.Color(red ,green, blue));
  }
  led.show();
}