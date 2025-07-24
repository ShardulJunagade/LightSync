  #include <Adafruit_NeoPixel.h>

  #define Pin1 3
  #define Pin2 11 
  #define numLed 6
  #define dval 10
  #define dval2 (dval / 2)
  const int  ldrPin1 = A0;
  const int  ldrPin2 = A1;
  const int trigPin1 = 9;
  const int trigPin2 = 6;
  const int echoPin1 = 10;
  const int echoPin2 = 5;
  long duration1, duration2;
  // int distance1, distance2;
  int ldrStatus1, ldrStatus2;

  Adafruit_NeoPixel led1 = Adafruit_NeoPixel(numLed, Pin1);
  Adafruit_NeoPixel led2 = Adafruit_NeoPixel(numLed, Pin2);


  void setColor(int red, int green, int blue, Adafruit_NeoPixel &led){
    for (uint8_t i = 0; i < 6; i++){
      led.setPixelColor(i, led.Color(red ,green, blue));
    }
    led.show();
  }



  void Fade0(Adafruit_NeoPixel &led){setColor(0,0,0,led);}
  void Fade10(Adafruit_NeoPixel &led){setColor(10,10,10,led);}
  void Fade20(Adafruit_NeoPixel &led){setColor(20,20,20,led);}
  void Fade30(Adafruit_NeoPixel &led){setColor(30,30,30,led);}
  void Fade40(Adafruit_NeoPixel &led){setColor(40,40,40,led);}
  void Fade50(Adafruit_NeoPixel &led){setColor(50,50,50,led);}
  void Fade60(Adafruit_NeoPixel &led){setColor(60,60,60,led);}
  void Fade70(Adafruit_NeoPixel &led){setColor(70,70,70,led);}
  void Fade80(Adafruit_NeoPixel &led){setColor(80,80,80,led);}
  void Fade90(Adafruit_NeoPixel &led){setColor(90,90,90,led);}
  void Fade100(Adafruit_NeoPixel &led){setColor(100,100,100,led);}
  void Fade110(Adafruit_NeoPixel &led){setColor(110,110,110,led);}
  void Fade120(Adafruit_NeoPixel &led){setColor(120,120,120,led);}
  void Fade130(Adafruit_NeoPixel &led){setColor(130,130,130,led);}
  void Fade140(Adafruit_NeoPixel &led){setColor(140,140,140,led);}
  void Fade150(Adafruit_NeoPixel &led){setColor(150,150,150,led);}
  void Fade160(Adafruit_NeoPixel &led){setColor(160,160,160,led);}
  void Fade170(Adafruit_NeoPixel &led){setColor(170,170,170,led);}
  void Fade180(Adafruit_NeoPixel &led){setColor(180,180,180,led);}
  void Fade190(Adafruit_NeoPixel &led){setColor(190,190,190,led);}
  void Fade200(Adafruit_NeoPixel &led){setColor(200,200,200,led);}
  void Fade210(Adafruit_NeoPixel &led){setColor(210,210,210,led);}
  void Fade220(Adafruit_NeoPixel &led){setColor(220,220,220,led);}
  void Fade230(Adafruit_NeoPixel &led){setColor(230,230,230,led);}
  void Fade240(Adafruit_NeoPixel &led){setColor(240,240,240,led);}
  void Fade250(Adafruit_NeoPixel &led){setColor(250,250,250,led);}
  void Fade255(Adafruit_NeoPixel &led){setColor(255,255,255,led);}




  void processLDR(int ldrPin, int trigPin, int echoPin, long &duration, int &ldrStatus, Adafruit_NeoPixel &led) {
    ldrStatus = analogRead(ldrPin);
    // Serial.println(ldrStatus);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    
    duration = pulseIn(echoPin, HIGH);
    int distance = duration * 0.034 / 2;

    Serial.println("LDR: ");
    Serial.println(ldrStatus);
    Serial.println("Distance: ");
    Serial.println(distance);
    Serial.println("\n");
    // delay(2000);
    if (ldrStatus >=400 & distance<10) {
      // Fade0();
      for (uint8_t i = 3; i < 6; i++){
        led.setPixelColor(i, led.Color(0 ,0, 0));
      led.show();
    }
    }
    else if (ldrStatus >=375 & distance<20) {
      Fade10(led);
        delay(dval);
    }
    else if (ldrStatus >=360 & distance<22) {
      Fade20(led);
        delay(dval);
    }
    else if (ldrStatus >=345 & distance<24) {
      Fade30(led);
        delay(dval);
    }
    else if (ldrStatus >=330 & distance<26) {
      Fade40(led);
        delay(dval);
    }
    else if (ldrStatus >=315 & distance<28) {
      Fade50(led);
        delay(dval);
    }
    else if (ldrStatus >=300 & distance<30) {
      Fade60(led);
        delay(dval);
    }
    else if (ldrStatus >=285 & distance<32) {
      Fade70(led);
        delay(dval);
    }
    else if (ldrStatus >=270 & distance<34) {
      Fade80(led);
        delay(dval);
    }
    else if (ldrStatus >=255 & distance<36) {
      Fade90(led);
        delay(dval);
    }
    else if (ldrStatus >=240 & distance<38) {
      Fade100(led);
        delay(dval);
    }
    else if (ldrStatus >=225 & distance<40) {
      Fade110(led);
        delay(dval);
    }
    else if (ldrStatus >=205 & distance<42) {
      Fade120(led);
        delay(dval);
    }
    else if (ldrStatus >=190 & distance<44) {
      Fade130(led);
        delay(dval);
    }
    else if (ldrStatus >=175 & distance<46) {
      Fade140(led);
        delay(dval);
    }
    else if (ldrStatus >=160 & distance<48) {
      Fade150(led);
        delay(dval);
    }
    else if (ldrStatus >=145 & distance<50) {
      Fade160(led);
        delay(dval);
    }
    else if (ldrStatus >=130 & distance<52) {
      Fade170(led);
        delay(dval);
    }
    else if (ldrStatus >=115 & distance<53) {
      Fade180(led);
        delay(dval);
    }
    else if (ldrStatus >=100 & distance<54) {
      Fade190(led);
        delay(dval);
    }
    else if (ldrStatus >=85 & distance<55) {
      Fade200(led);
        delay(dval);
    }
    else if (ldrStatus >=70 & distance<56) {
      Fade210(led);
        delay(dval);
    }
    else if (ldrStatus >=65 & distance<57) {
      Fade220(led);
        delay(dval);
    }
    else if (ldrStatus >=60 & distance<58) {
      Fade230(led);
        delay(dval);
    }
    else if (ldrStatus >=55 & distance<59) {
      Fade240(led);
        delay(dval);
    }
    else if (ldrStatus >=50 & distance<60) {
      Fade255(led);
        delay(dval2);
    }
  }

  void setup() {
    led1.begin();
    led2.begin();
    Serial.begin(9600);
    pinMode(trigPin1, OUTPUT);
    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin1, INPUT);
    pinMode(echoPin2, INPUT);
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    pinMode(ldrPin1,  INPUT);
    pinMode(ldrPin2,  INPUT);
  }


  void loop() {
    processLDR(ldrPin1, trigPin1, echoPin1, duration1, ldrStatus1, led1);
    processLDR(ldrPin2, trigPin2, echoPin2, duration2, ldrStatus2, led2);
  }