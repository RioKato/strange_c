#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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
  printf("(int)%x << 1 = 0x%x\n", smin, smin << 1);
  printf("(unsignd int)%x << 1 = 0x%x\n", umin, umin << 1);
  printf("(int)%x >> 1 = 0x%x\n", smin, smin >> 1);
  printf("(unsignd int)%x >> 1 = 0x%x\n", umin, umin >> 1);
  printf("\n\n");
}

void minus() {
  printf("[minus]\n\n");
  printf("-((int)%d) = %d\n", smin, smin);
  printf("-((unsigned int)%d) = %u\n", umin, umin);
  printf("\n\n");
}

void divide() {
  printf("[divide]\n\n");
  printf("(int)0 / (int)0 = %d\n", szero / szero);
  printf("(unsigned int)0 / (unsigned int)0 = %u\n", uzero / uzero);
  /* printf("((int)%d) / (int)-1 = %d\n", smin, smin / smone); */
  printf("((int)%d) / (int)-1 = Floating point exception (core dumped)\n",
         smin);
  printf("\n\n");
}

void modulo() {
  printf("[modulo]\n\n");
  printf("(int)-3 \% (int)2 = %d\n", (int)-3 % (int)2);
  printf("(int)3 \% (int)-2 = %d\n", (int)3 % (int)-2);
  printf("(int)-3 \% (int)-2 = %d\n", (int)-3 % (int)-2);
  /* printf("(int)-3 \% (int)0 = %d\n", (int)-3 % (int)0); */
  printf("(int)-3 \% (int)0 = Floating point exception (core dumped)\n");
  printf("\n\n");
}

void cast() {
  printf("[cast]\n\n");
  puts("* adjust size => change sign");
  printf("(int)((unsigned short) -1) = %d\n", (int)((unsigned short)-1));
  printf("(unsigned int)((short) -1) = %u\n", (unsigned int)((short)-1));
  printf("(unsignd short)((int) -1) = %d\n", (unsigned short)((int)-1));
  printf("(short)((unsigned int) -1) = %d\n", (short)((unsigned int)-1));
  printf("\n\n");
}

void size() {
  printf("[size]\n\n");
  printf("sizeof(size_t) = %d\n", sizeof(size_t));
  printf("sizeof(ssize_t) = %d\n", sizeof(ssize_t));
  printf("\n\n");
}

void t_malloc() {
  printf("[malloc]\n\n");
  printf("malloc(0) = %p\n", malloc(0));
  printf("malloc(-1) = %p\n", malloc(-1));
  printf("malloc(0xffffffff) = %p\n", malloc(0xffffffff));
  printf("\n\n");
}

void t_alloca() {
  printf("[alloca]\n\n");
  printf("alloca(0) = %p\n", alloca(0));
  printf("alloca(-0x10) = %p\n", alloca(-0x10));
  printf("alloca(-0x100) = %p\n", alloca(-0x100));
  printf("\n\n");
  exit(0);
}

int main(void) {
  shift();
  minus();
  divide();
  modulo();
  cast();
  size();
  t_malloc();
  t_alloca();
}
