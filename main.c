#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define P(X) (sizeof(X)>sizeof(int))?printf(#X ": %ld\n",X):printf(#X ": %d\n",(int)X)
#define PFMT(X) _Generic((X),				\
			 char:      "%s : %02Lx\n",		\
			 short:     "%s : %04Lx\n",		\
			 int:       "%s : %08Lx\n",		\
			 long:      "%s : %016Lx\n",	\
			 long long: "%s : %016Lx\n")

#define V(X) printf(PFMT(X),#X,(long long)X)

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
  V(*(char*)buf);
  V(*(short*)buf);
  V(*(int*)buf);
  V(*(long*)buf);
  V(*(long long*)buf);
  return 0;
}
