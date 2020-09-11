#define LED_G 11
#define LED_R 10
#define LED_B 9


void setup ()  {
    pinMode(LED_R, OUTPUT);
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
    }


void loop ()  {
    dimmer();
    tidi();
    cc();
    consdi();
    }


// Colors and light
void light(int s){
    red(s * 0.4);
    green(s);
    blue(s * 0.4);
    }
void red(int s){
    analogWrite (LED_R, 255 - s);
    }
void green(int s){
    analogWrite (LED_G, 255 - s);
    }
void blue(int s){
    analogWrite (LED_B, 255 - s);
    }


// Constant color (1.000 sec)
void cc() {
    light(255 * 0.8);
    delay(1000);
    }


// 60-50-70 (1.520 sec)
void consdi(){
    light(255 * 0.6);
    delay(800);
    light(255 * 0.7);
    delay(80);
    light(255 * 0.5);
    delay(100);
    light(255 * 0.7);
    delay(80);
    light(255 * 0.5);
    delay(100);
    light(255 * 0.7);
    delay(80);
    light(255 * 0.5);
    delay(100);
    light(255 * 0.7);
    delay(80);
    light(255 * 0.5);
    delay(100);
    }


// dimmer (8.280 sec)
void dimmer(){
    int x = 1;
    for (int i = 15; i > 14; i = i + x){
        light(i);
        if (i == 255) x = -1;
        delay(18);
        }
    }


// 0-100 (2.440 sec)
void tidi(){
    light(255);
    delay(30);
    light(0);
    delay(30);
    light(255);
    delay(30);
    light(0);
    delay(30);
    light(255);
    delay(30);
    light(0);
    delay(1000);
    light(255);
    delay(20);
    light(0);
    delay(30);
    light(255);
    delay(20);
    light(0);
    delay(150);
    light(255);
    delay(20);
    light(0);
    delay(30);
    light(255);
    delay(20);
    light(0);
    delay(1000);
    }
