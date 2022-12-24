#include <stdio.h>
int main(void)
{
    printf("char: %ld bytes\n", sizeof(char));
    printf("short: %ld bytes\n", sizeof(short));
    printf("int: %ld bytes\n", sizeof(int));
    printf("long: %ld bytes\n", sizeof(long));
    printf("long long: %ld bytes\n", sizeof(long long));
    printf("float: %ld bytes\n", sizeof(float));
    printf("double: %ld bytes\n", sizeof(double));
    printf("long double: %ld bytes\n", sizeof(long double));

    return 0;
}
