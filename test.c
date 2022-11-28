#include <stdint.h>
#include <stdio.h>

int szero = 0;
int sone = 1;
int smone = -1;
int smin = INT32_MIN;
unsigned int uzero = 0;
unsigned int uone = 1;
unsigned int umone = -1;
unsigned int umin = INT32_MIN;

void shift() {

  printf("[shift]\n\n");
  printf("(int)1 << 31 = 0x%x\n", sone << 31);
  printf("(unsigned int)1 << 31 = 0x%x\n", uone << 31);
  printf("((int)1 << 31) >> 31 = 0x%x\n", (sone << 31) >> 31);
  printf("((unsigned int)1 << 31) >> 31 = 0x%x\n", (uone << 31) >> 31);
  printf("(int)1 << 32 = 0x%x\n", sone << 32);
  printf("(unsigned int)1 << 32 = 0x%x\n", uone << 32);
  printf("(int)1 >> 32 = 0x%x\n", sone >> 32);
  printf("(unsigned int)1 >> 32 = 0x%x\n", uone >> 32);
  printf("(int)1 << -1 = 0x%x\n", sone << -1);
  printf("(unsigned int)1 << -1 = 0x%x\n", uone << -1);
  printf("(int)1 >> -1 = 0x%x\n", sone >> -1);
  printf("(unsigned int)1 >> -1 = 0x%x\n", uone >> -1);
  printf("\n\n");
}

void minus() {

  printf("[minus]\n\n");
  printf("-((int)%d) = %d\n", smin, smin);
  printf("-((unsigned int)%u) = %u\n", umin, umin);
  printf("\n\n");
}

void divide() {
  printf("[divide]\n\n");
  printf("(int)0 / (int)0 = %d\n", szero / szero);
  printf("(unsigned int)0 / (unsigned int)0 = %d\n", uzero / uzero);
  /* printf("((int)%d) / (int)-1 = %d\n", smin, smin / smone); */
  printf("((int)%d) / (int)-1 = Floating point exception (core dumped)\n",
         smin);
  printf("\n\n");
}

int main(void) {
  shift();
  minus();
  divide();
}
