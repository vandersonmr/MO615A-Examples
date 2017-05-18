void freeWakeLock(int);
void getWakeLock(int);

void foo1(int i) {
  if (i < 5) 
    getWakeLock(1);
  else 
    freeWakeLock(2);
}

void foo2(void (*F)(int)) {
  F(3);
  freeWakeLock(1);
}

int main() {
  getWakeLock(2);
  foo2(foo1);
}
