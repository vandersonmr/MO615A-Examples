
void freeWakeLock(int);
void getWakeLock(int);
void foo2(int);

void foo1(int i) {
  if (i % 2 != 0)
    getWakeLock(1);
  else
    getWakeLock(0);
  foo2(i-1);
}

void foo2(int i) {
  if (i == 0) return;
  foo1(i);
  if (i % 2 == 0)
    freeWakeLock(0);
  else
    getWakeLock(1);
}

int main() {
  foo2(2);
}
