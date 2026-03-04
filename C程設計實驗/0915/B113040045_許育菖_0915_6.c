#include<stdio.h>

int main() {
    int a = 32767;
    short b = 32767;

    printf("整數i = %d\n", a);
    printf("短整數s = %d\n", b);
    a = a + 1;
    printf("i+1 = %d\n", a);
    b = b + 1;
    printf("s+1 = %d\n", b);

    return 0;
}