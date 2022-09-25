void menu() {
  if (digitalRead(mDown) == HIGH) {
    game = 100;
    delay(100);
    clear();
  }

  if (game == 1) {
    ballGame();
    if (digitalRead(right) == HIGH) {
      pad = pad + 1;
    }
    if (digitalRead(left) == HIGH) {
      pad = pad - 1;
    }
  }
  else if (game == 2) {

    pinPongGame();
    if (digitalRead(right) == HIGH) {
      pingBallY = pingBallY + 1;
    }
    if (digitalRead(left) == HIGH) {
      pingBallY = pingBallY - 1;
    }
  }
  else if (game == 3) {
    shootGame();

    if (digitalRead(mUp) == HIGH) {
      digitalWrite(buzzer, HIGH);
      bulartCheack = 1;
      x = gun + 1;
    }
    if (digitalRead(right) == HIGH) {
      gun = gun + 1;
    }
    if (digitalRead(left) == HIGH) {
      gun = gun - 1;
    }

  }
  else if (game == 4) {
    flyGame();
  }

  else if (game == 5) {
    if (digitalRead(left) == HIGH) {
      clear();
      digitalWrite(buzzer, HIGH);
      ourCar = 2;
    }
    if (digitalRead(right) == HIGH) {
      clear();
      digitalWrite(buzzer, HIGH);
      ourCar = 5;
    }
    carGame();
  }

  else if (game == 6) {
    if (digitalRead(up) == HIGH) {
      meY--;
    }
    if (digitalRead(down) == HIGH) {
      meY++;
    }
    if (digitalRead(left) == HIGH) {
      meX--;
    }
    if (digitalRead(right) == HIGH) {
      meX++;
    }
  }
  else if (game == 0) {
    finish();
  }

  else {
    mainmenuCreate();
  }

}
