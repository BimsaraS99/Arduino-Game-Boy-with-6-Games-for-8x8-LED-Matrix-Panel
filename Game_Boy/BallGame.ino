void ballGame() {
  digitalWrite(buzzer, LOW);
  check = 0;
  clear();
  int nmove = random(-1, 1);
  if (pad <= 0) {
    pad = 0;
  }
  if (pad >= 5) {
    pad = 5;
  }

  if (by == 7 && cy == 1) {
    cy = -1;
    bx += nmove;
  }
  if (bx == 7 && cx == 1) {
    game = 0;
  }
  if (by == 0 && cy == -1) {
    cy = 1;
    bx += nmove;
  }
  if (bx == 0 && cx == -1) {
    cx = 1;
    bx += nmove;
  }
  bx = bx + cx;
  by = by + cy;

  if (bx < 0) {
    bx = 0;
  }
  if (bx > 7) {
    bx = 7;
  }

  if (by < 0) {
    by = 0;
  }
  if (by > 7) {
    by = 7;
  }
  if (bx == 6 && cx == 1 && (by >= pad && by <= (pad + 3))) {
    cx = -1;
    digitalWrite(buzzer, HIGH);
  }
  delay(100);
}

