#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define P(X) printf(#X ": %ld\n",X)
#define V(X) printf(#X ": %lx\n",(long)X)

int main (int argc, char *const*arg) {
  char buf[16];
  for(int i = 0; i < 16; i++) buf[i] = i;
  P(sizeof(char));
  P(sizeof(short));
  P(sizeof(int));
  P(sizeof(long));
  P(sizeof(long long));
  P(sizeof(float));
  P(sizeof(double));
  P(sizeof(long double));
  V(*(char*)buf);
  V(*(short*)buf);
  V(*(int*)buf);
  V(*(long*)buf);
  V(*(long long*)buf);
  return 0;
}
