void carGame() {
  check = 4;
  counterCar++;
  int opop = random(0, 2);
  int opopop = random(0, 2);

  if (opop == 0) {
    opop = 2;
  }
  else {
    opop = 5;
  }
  if (opopop == 0) {
    opopop = 2;
  }
  else {
    opopop = 5;
  }
  if (busterCar1 >= 8) {
    busterCar1 = -1;
    busterCar1ran = opop;
  }

  if (busterCar2 >= 8) {
    busterCar2 = -1;
    busterCar2ran = opopop;
  }
  if ((busterCar1 >= 5 && ourCar == busterCar1ran) || (busterCar2 >= 5 && ourCar == busterCar2ran)) {
    game = 0;
  }
  if (counterCar >= 3) {
    busterCar1 = busterCar1 + 1;
    busterCar2 = busterCar2 + 1;
    counterCar = 0;
  }
  delay(50);
  digitalWrite(buzzer, LOW);
  clear();
}


