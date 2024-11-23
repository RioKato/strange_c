#include <stdio.h>
#include <stdlib.h>

void s2u(void)
{
    char c = 0x80;
    short s = 0x8000;
    int i = 0x80000000;
    long l = 0x8000000000000000;

    unsigned short c2s = c;
    unsigned int c2i = c;
    unsigned long c2l = c;

    unsigned char s2c = s;
    unsigned int s2i = s;
    unsigned long s2l = s;

    unsigned char i2c = i;
    unsigned short i2s = i;
    unsigned long i2l = i;

    unsigned char l2c = l;
    unsigned short l2s = l;
    unsigned int l2i = l;

    printf(
        "char => unsigned short: %x\n"
        "char => unsigned int: %x\n"
        "char => unsigned long: %lx\n"

        "short => unsigned char: %x\n"
        "short => unsigned int: %x\n"
        "short => unsigned long: %lx\n"

        "int => unsigned char: %x\n"
        "int => unsigned short: %x\n"
        "int => unsigned long: %lx\n"

        "long => unsigned char: %x\n"
        "long => unsigned short: %x\n"
        "long => unsigned int: %x\n",
        c2s, c2i, c2l,
        s2c, s2i, s2l,
        i2c, i2s, i2l,
        l2c, l2s, l2i);
}

void u2s(void)
{
    unsigned char c = 0x80;
    unsigned short s = 0x8000;
    unsigned int i = 0x80000000;
    unsigned long l = 0x8000000000000000;

    short c2s = c;
    int c2i = c;
    long c2l = c;

    char s2c = s;
    int s2i = s;
    long s2l = s;

    char i2c = i;
    short i2s = i;
    long i2l = i;

    char l2c = l;
    short l2s = l;
    int l2i = l;

    printf(
        "unsigned char => short: %x\n"
        "unsigned char => int: %x\n"
        "unsigned char => long: %lx\n"

        "unsigned short => char: %x\n"
        "unsigned short => int: %x\n"
        "unsigned short => long: %lx\n"

        "unsigned int => char: %x\n"
        "unsigned int => short: %x\n"
        "unsigned int => long: %lx\n"

        "unsigned long => char: %x\n"
        "unsigned long => short: %x\n"
        "unsigned long => int: %x\n",
        c2s, c2i, c2l,
        s2c, s2i, s2l,
        i2c, i2s, i2l,
        l2c, l2s, l2i);
}

int main(void)
{
    puts("signed => unsigned: signed extension");
    puts("unsigned => signed: zero extension");
    puts("Result:");
    s2u();
    u2s();
}
