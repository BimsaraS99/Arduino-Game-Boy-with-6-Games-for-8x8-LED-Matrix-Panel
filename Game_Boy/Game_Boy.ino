#include <FrequencyTimer2.h>

#define up 4
#define down 6
#define left 7
#define right 5
#define mUp 3
#define mDown 2
#define buzzer 13

int game = 100;
int menuItemCounter = 0;
int state;

int bx = 0;// ballGame
int by = 7;
int cx = 1;
int cy = 1;
int pad = 3;
int check = 11;

int pingPad1;// pinPong game
int pingPad2;
int pingBallX = 7;
int pingBallY = 5;
int s1 = 3;
int s2 = 4;
int ppy1 = 4;
int ppy2 = 8;
int counter = 0;

int gun = 7; // shoot Game
int bulartCheack;
int bulart1 = 6;
int x;
int y = 0;
int yy = 3;
int a = 0;
int shootThing = 1;
int shootThing1 = 6;

int fGMT = 4;// fly Game
int fGMT1 = 0;
int fGMove = 7;
int fGMove1 = 3;
int yyyy = 0;
int fGball = 2;
int wall1[3] = {1, 2, 3,};
int wall2[3] = {4, 5, 6,};
int af = 0;

int ourCar = 5;// car game
int busterCar1 = -1;
int busterCar2 = -5;
int busterCar1ran  = 2;
int busterCar2ran = 2;
int counterCar = 0;

int meX = 0;// follwing Game
int meY = 0;
int friendX = 7;
int friendY = 6;
int counterforFollowing = 0;

int cells[8][8] = {
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0},
};
int SER_Pin = 8;   //pin 14 on the 75HC595
int RCLK_Pin = 9;  //pin 12 on the 75HC595
int SRCLK_Pin = 10; //pin 11 on the 75HC595

#define number_of_74hc595s 2
#define numOfRegisterPins number_of_74hc595s * 8

boolean registers[numOfRegisterPins];

void setup() {
  Serial.begin(9600);
  pinMode(SER_Pin, OUTPUT);
  pinMode(RCLK_Pin, OUTPUT);
  pinMode(SRCLK_Pin, OUTPUT);

  pinMode(buzzer, OUTPUT);

  clearRegisters();
  writeRegisters();

  FrequencyTimer2::disable();
  FrequencyTimer2::setPeriod(3500);
  FrequencyTimer2::setOnOverflow(display);
  finish();
  tones();
  clear();
}

void loop() {
  menu();
  if (game == 6) {
    abcd();
  }
}
