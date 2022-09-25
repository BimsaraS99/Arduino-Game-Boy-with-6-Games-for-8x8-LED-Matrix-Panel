int laststate = 1;
int laststate1 = 1;
int fk = 0;
int fk1 = 0;
void mainmenuCreate() {
  int state = digitalRead(right);
  if (state != laststate) {
    fk++;
    laststate = state;
    if (fk % 2 == 0) {
      menuItemCounter++;
      clear();
      delay(250);
      if (menuItemCounter >= 5) {
        menuItemCounter = 5;
      }
    }
  }
  int state1 = digitalRead(left);
  if (state1 != laststate1) {
    fk1++;
    laststate1 = state1;
    if (fk1 % 2 == 0) {
      menuItemCounter--;
      clear();
      delay(250);
      if (menuItemCounter <= 0) {
        menuItemCounter = 0;
      }
    }
  }

  for (int mmc = 0; mmc < 8; mmc++) {
    cells[0][mmc] = 1;
    cells[7][mmc] = 1;
    cells[mmc][0] = 1;
    cells[mmc][7] = 1;
  }
  if (menuItemCounter == 0) {
    cells[5][3] = 1;
    cells[5][4] = 1;
    cells[5][5] = 1;
    cells[2][2] = 1;
    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 1;
    }
  }
  else if (menuItemCounter == 1) {
    cells[5][2] = 1;
    cells[5][3] = 1;
    cells[4][3] = 1;
    cells[5][4] = 1;
    cells[2][4] = 1;
    cells[2][5] = 1;
    cells[2][6] = 1;
    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 2;
    }
  }
  else if (menuItemCounter == 2) {
    cells[5][2] = 1;
    cells[5][3] = 1;
    cells[4][3] = 1;
    cells[3][5] = 1;
    cells[5][4] = 1;
    cells[2][2] = 1;
    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 3;
    }
  }
  else if (menuItemCounter == 3) {
    cells[2][3] = 1;
    cells[3][3] = 1;
    cells[4][3] = 1;
    cells[5][2] = 1;
    cells[4][5] = 1;
    cells[5][5] = 1;
    cells[6][5] = 1;
    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 4;
    }
  }
  else if (menuItemCounter == 4) {
    cells[6][3] = 1;
    cells[5][3] = 1;
    cells[6][2] = 1;
    cells[6][4] = 1;

    cells[3][6] = 1;
    cells[3][5] = 1;
    cells[3][4] = 1;
    cells[4][5] = 1;

    cells[2][1] = 1;
    cells[2][2] = 1;
    cells[2][3] = 1;
    cells[3][2] = 1;

    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 5;
    }

  }
  else if (menuItemCounter == 5) {
    cells[2][2] = 1;
    cells[3][2] = 1;

    cells[5][5] = 1;
    cells[6][5] = 1;

    if (digitalRead(mUp) == HIGH) {
      finish();
      tones();
      game = 6;
    }
  }
}

