
void freeWakeLock(int);
void getWakeLock(int);

int main() {
  int i;
  if (i == 0) {
    getWakeLock(1);
  } else {
    getWakeLock(0);
  }

  freeWakeLock(1);
}
