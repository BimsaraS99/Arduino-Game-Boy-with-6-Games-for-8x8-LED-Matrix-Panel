void flyGame() {

  int ty = random(1, 8);
  if (fGMove == -1) {
    for (int ii = 0; ii < 3; ii++) {
      int ee = ty + ii;
      if (ee < 8) {
        wall1[ii] = ee;
      }
      else {
        wall1[ii] = ee - 8;
      }
    }
    fGMove = 7;
  }
  if (fGMove1 == -1) {
    for (int iii = 0; iii < 3; iii++) {
      int eee = ty + iii;
      if (eee < 8) {
        wall2[iii] = eee;
      }
      else {
        wall2[iii] = eee - 8;
      }
    }
    fGMove1 = 7;
  }
  check = 3;
  yyyy++;
  clear();
  if (yyyy >= 4) {
    fGMove--;
    fGMove1--;
    yyyy = 0;
  }
  if (digitalRead(up) == HIGH) {
    fGball--;
    digitalWrite(buzzer, HIGH);
  }
  else {
    af++;
    if (af >= 2) {
      fGball++;
      af = 0;
    }
  }
  if (fGball >= 8) {
    game = 0;
  }
  if (fGball < 0) {
    fGball = 0;
  }
  for (int bim = 0; bim < 3; bim++) {
    if ((fGMove == 1) && (wall1[bim] == fGball)) {
      game = 0;
    }
  }
  for (int bimm = 0; bimm < 3; bimm++) {
    if ((fGMove1 == 1) && (wall2[bimm] == fGball)) {
      game = 0;
    }
  }
  delay(100);
  digitalWrite(buzzer, LOW);
}
