#include <stdio.h>
#include <string.h>

int main(void)
{
    char *sample = "This is a sample";
    char buf[4];

    int len = snprintf(buf, 4, "%s", sample);
    printf("sample = %s\n", sample);
    printf("strlen(sample) = %d\n", strlen(sample));
    printf("snprintf(buf, 4, \"%%s\", sample) = %d\n", len);
    printf("buf = %s\n", buf);
}
