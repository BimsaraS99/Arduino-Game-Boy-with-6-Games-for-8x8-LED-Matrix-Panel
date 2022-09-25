void finish() {
  for (int i = 0; i < 60; i++) {
    cells[random(8)][random(8)] = 1;
    delay(15);
  }
  int z = random(1, 7);
  int q = random(1, 6);

  if (check == 0) {
    game = 1;
    cy = -1;
    cx = -1;
    pad = z;
    bx = 0;
    by = z;
  }
  if (check == 1) {
    pingBallX = 7;
    pingBallY = 5;
    s1 = 3;
    s2 = 4;
    ppy1 = 4;
    ppy2 = 8;
    game = 2;
  }
  if (check == 2) {
    gun = z;
    bulartCheack = 0;
    bulart1 = 6;
    x;
    y = 2;
    yy = 0;
    a = 0;
    shootThing = q;
    shootThing1 = z;
    game = 3;
  }
  if (check == 3) {

    fGMT = 4;
    fGMove = 7;
    fGMove1 = 3;
    fGball = 1;
    game = 4;
  }

  if (check == 4) {
    busterCar1 = -6;
    busterCar2 = -2;
    game = 5;
    if(z <4){
      ourCar = 5;
    }
    else{
      ourCar = 2;
    }
  }
  if (check == 5) {
    meX = 1;
    meY = 1;
    friendX = 6;
    friendY = 5;
    counterforFollowing = 0;
    game = 6;
  }
}
