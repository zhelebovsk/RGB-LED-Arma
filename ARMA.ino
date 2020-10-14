#include <RBDdimmer.h>
#define USE_SERIAL  Serial
#define outputPin  12 
#define zerocross  5 // for boards with CHANGEBLE input pins
dimmerLamp dimmer(outputPin); //initialase port for dimmer for MEGA, Leonardo, UNO, Arduino M0, Arduino Zero
int outVal = 0;
int buttonRed = 0;

void setup() {
  USE_SERIAL.begin(9600); 
  dimmer.begin(NORMAL_MODE, ON); //dimmer initialisation: name.begin(MODE, STATE) 
  USE_SERIAL.println("Dimmer Program is starting...");
  USE_SERIAL.println("Set value");
  pinMode(13, INPUT);
}


void loop() {
  dimmers();
  delay(50);
}


void dimmers(){
    for (int j = 0; j < 4; j = j + 1){
        int x = 1;
        for (int i = 15; i > 14; i = i + x){
            dimmer.setPower(i);
            if (i == 99) x = -1;
            delay(18);
            }
        }
    }


void fs(){
    for (int j = 0; j < 4; j = j + 1){
        int x = -1;
        dimmer.setPower(99);
        delay(1000);
        for (int i = 99; i > 10; i = i + x){
            dimmer.setPower(i);
            delay(50);
            }
        }
    }


void boom(){
    for (int j = 0; j < 4; j = j + 1){
            dimmer.setPower(99);
            delay(180);
            dimmer.setPower(20);
            delay(180);
            }
        }
   
