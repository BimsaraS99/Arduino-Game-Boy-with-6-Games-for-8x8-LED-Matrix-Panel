void shootGame() {
  a++;;
  check = 2;
  clear();
  if (gun <= -1) {
    gun = 0;
  }
  if (gun >= 5) {
    gun = 5;
  }
  if (bulartCheack == 1) {
    bulart1--;
  }
  if (bulart1 <= -1) {
    bulart1 = 7  ;
    bulartCheack = 0;
  }
  if (y == 6 || yy == 6) {
    game = 0;
  }
  if (a == 8) {
    y++;
    yy++;
    a = 0;
  }
  int gg = random(1, 7);
  int ggg = random(1, 7);

  if (gg == ggg) {
    gg = 3;
    ggg = 6;
  }

  if (( (bulart1 ==  y && y != 6) || (bulart1 ==  y - 1)) && (x == shootThing)) {
    y = 0;
    bulartCheack = 0;
    bulart1 = 6;
    shootThing = gg;

  }
  if ((bulart1 ==  yy || bulart1 ==  yy - 1) && (x == shootThing1)) {
    yy = 0;
    bulartCheack = 0;
    bulart1 = 6;
    shootThing1 = ggg;
  }

  delay(100);
  digitalWrite(buzzer, LOW);
}

