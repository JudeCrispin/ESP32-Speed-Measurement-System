#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define IR1 34
#define IR2 35

const float distance = 0.10; // 10 cm = 0.10 meters

unsigned long startTime = 0;
unsigned long endTime = 0;

bool sensor1Triggered = false;

void setup() {

  Serial.begin(115200);

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found");
    while(true);
  }

  display.clearDisplay();
}

void loop() {

  int sensor1 = digitalRead(IR1);
  int sensor2 = digitalRead(IR2);

  // Object crosses sensor 1
  if(sensor1 == LOW && sensor1Triggered == false) {
    startTime = millis();
    sensor1Triggered = true;
  }

  // Object crosses sensor 2
  if(sensor2 == LOW && sensor1Triggered == true) {

    endTime = millis();

    float timeTaken = (endTime - startTime) / 1000.0; // convert to seconds
    float speed = distance / timeTaken; // m/s

    Serial.print("Speed: ");
    Serial.println(speed);

    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(WHITE);

    display.setCursor(0,20);
    display.print("Speed:");

    display.setCursor(0,45);
    display.print(speed);
    display.print(" m/s");

    display.display();

    sensor1Triggered = false;

    delay(1000); 
  }
}