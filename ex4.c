void freeWakeLock(int);
void getWakeLock(int);

void foo1() {
  getWakeLock(1);
}

void foo2(void (*F)())  {
  F();
  freeWakeLock(1);
}

int main() {
  foo2(foo1);
}
