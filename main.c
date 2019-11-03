#include <math.h>
#include <stdint.h>
#include <stdio.h>


#ifdef ARCH_i686
#define P(X) printf(#X ": %d\n",X)
#else
#define P(X) printf(#X ": %ld\n",X)
#endif
#define V(F,C,X) printf(F,#X,C X)

int main (int argc, char *const*arg) {
  char buf[16];
  printf("buf:");
  for(int i = 0; i < 16; i++) {
    buf[i] = i;
    printf(" %02x",i);
  }
  printf("\n");
  P(sizeof(char));
  P(sizeof(short));
  P(sizeof(int));
  P(sizeof(long));
  P(sizeof(long long));
  P(sizeof(float));
  P(sizeof(double));
  P(sizeof(long double));
  V("%s: %02x\n",(int),*(char*)buf);
  V("%s: %04x\n",(int),*(short*)buf);
  V("%s: %08x\n",(int),*(int*)buf);
  V("%s: %08lx\n",(long),*(long*)buf);
  V("%s: %016llx\n",(long long),*(long long*)buf);
  return 0;
}
