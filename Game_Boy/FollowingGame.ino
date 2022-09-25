void abcd() {
  check = 5;
  counterforFollowing++;
  clear();
  if (meX >= 6) {
    meX = 6;
  }
  if (meY >= 5) {
    meY = 5;
  }
  if (meX <= 1) {
    meX = 1;
  }
  if (meY <= 1) {
    meY = 1;
  }
  
  if (counterforFollowing >= 4) {
    
    if (meY < friendY) {
      friendY--;
    }
    if (meY > friendY) {
      friendY++;
    }
    if (meX < friendX) {
      friendX--;
    }
    if (meX > friendX) {
      friendX++;
    }
    counterforFollowing = 0;
  }
  
  if((meY == friendY && meX == friendX)||(meY+1 == friendY+1 && meX == friendX)||(meY+1 == friendY && meX == friendX)||(meY == friendY+1 && meX == friendX)){
    game = 0;
  }
  
  delay(100);
}
