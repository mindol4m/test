#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int gcd_result = gcd(gcd(num1, num2), num3);
    int lcm_result = lcm(lcm(num1, num2), num3);

    printf("GCD of %d, %d, and %d is %d\n", num1, num2, num3, gcd_result);
    printf("LCM of %d, %d, and %d is %d\n", num1, num2, num3, lcm_result);

    return 0;
}