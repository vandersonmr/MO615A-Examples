
void freeWakeLock(int);
void getWakeLock(int);

int main() {
  getWakeLock(1);
  freeWakeLock(2);
}
