int py = 0;
int px1[8] = {7, 6, 5, 4, 3, 2, 1, 0};
int py1[8] = {7, 6, 5, 4, 3, 2, 1, 0};
void display() {
  if (game == 1) {
    cells[bx][by] = 1;
    cells[7][pad] = 1;
    cells[7][pad + 1] = 1;
    cells[7][pad + 2] = 1;
  }
  else if (game == 2) {
    cells[ppy1][s1] = 1;
    cells[ppy1][s1 + 1] = 1;
    cells[ppy1][s1 + 2] = 1;
    cells[ppy2][s2] = 1;
    cells[ppy2][s2 + 1] = 1;
    cells[ppy2][s2 + 2] = 1;
    cells[pingBallX][pingBallY] = 1;
  }
  else if (game == 3) {
    cells[7][gun] = 1;
    cells[7][gun + 1] = 1;
    cells[7][gun + 2] = 1;
    cells[6][gun + 1] = 1;
    cells[y][shootThing] = 1;
    cells[yy][shootThing1] = 1;

    if (bulartCheack == 1) {
      cells[bulart1][x] = 1;
    }
  }
  else if (game == 4) {
    cells[fGball][1] = 1;
    for (int ii = 0; ii < 3; ii++) {
      cells[wall1[ii]][fGMove] = 1;
    }

    for (int iii = 0; iii < 3; iii++) {
      cells[wall2[iii]][fGMove1] = 1;
    }
  }

  else if (game == 5) {
    cells[6][ourCar] = 1;
    cells[7][ourCar] = 1;
    cells[7][ourCar + 1] = 1;
    cells[7][ourCar - 1] = 1;

    cells[busterCar1][busterCar1ran] = 1;
    cells[busterCar1 - 1][busterCar1ran] = 1;
    cells[busterCar1 - 1][busterCar1ran + 1] = 1;
    cells[busterCar1 - 1][busterCar1ran - 1] = 1;

    cells[busterCar2][busterCar2ran] = 1;
    cells[busterCar2 - 1][busterCar2ran] = 1;
    cells[busterCar2 - 1][busterCar2ran + 1] = 1;
    cells[busterCar2 - 1][busterCar2ran - 1] = 1;
    for (int uyuyu = 0; uyuyu < 8; uyuyu++) {
      cells[uyuyu][0] = 1;
      cells[uyuyu][7] = 1;
    }
  }

  else if (game == 6) {
    
  for (int mmc = 0; mmc < 8; mmc++) {
    cells[0][mmc] = 1;
    cells[7][mmc] = 1;
    cells[mmc][0] = 1;
    cells[mmc][7] = 1;
  }
    cells[meY][meX] = 1;
    cells[meY + 1][meX] = 1;
    cells[friendY][friendX] = 1;
    cells[friendY + 1][friendX] = 1;
  }

  clearRegisters();
  py++;
  if (py == 8) {
    py = 0;
  }
  setRegisterPin(15 - py, LOW);//0-7 Anode(COLS),8-15 Cathode(ROWS)

  for (int px = 0; px < 8; px++) {
    if (cells[py1[py]][px1[px]] == 1) {
      setRegisterPin(7 - px, HIGH);
    }
  }
  writeRegisters();
}



//set all register pins to LOW
void clearRegisters() {
  for (int i = (numOfRegisterPins) / 2; i >=  0; i--) {
    registers[i] = LOW;
  }
  for (int i = numOfRegisterPins - 1; i >=  (numOfRegisterPins) / 2; i--) {
    registers[i] = HIGH;
  }
}

void writeRegisters() {

  digitalWrite(RCLK_Pin, LOW);

  for (int i = numOfRegisterPins - 1; i >=  0; i--) {
    digitalWrite(SRCLK_Pin, LOW);

    int val = registers[i];

    digitalWrite(SER_Pin, val);
    digitalWrite(SRCLK_Pin, HIGH);

  }
  digitalWrite(RCLK_Pin, HIGH);

}

void setRegisterPin(int index, int value) {
  registers[index] = value;
}
