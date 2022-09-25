void pinPongGame() {

  clear();
  check = 1;
  counter++;
  int rr = random(0, 6);
  int rrr = random(0, 6);
  counter = counter + 1;

  if (pingBallY <= 0) {
    pingBallY = 0;
  }

  if (pingBallY >= 7) {
    pingBallY = 7;
  }

  if (counter >= 10) {
    ppy1--;
    ppy2--;
    counter = 0;
  }

  if (ppy1 == -1) {
    ppy1 = 7;
    s1 = rr;
  }
  if (ppy2 == -1) {
    ppy2 = 7;
    s2 = rrr;
  }
  if ((pingBallY >= s2 &&  pingBallY <= s2 + 2) && (pingBallX == ppy2 || pingBallX == ppy2 - 1)) {
    pingBallX = ppy2 - 1;
  }

  else if ((pingBallY >= s1 &&  pingBallY <= s1 + 2) && (pingBallX == ppy1 || pingBallX == ppy1 - 1)) {
    pingBallX = ppy1 - 1;
  }

  else {
    pingBallX++;
    digitalWrite(buzzer, HIGH);
  }

  if (pingBallX == -1 || pingBallX == 8) {
    game = 0;
  }

  delay(100);
  digitalWrite(buzzer, LOW);
}

