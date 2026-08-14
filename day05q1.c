Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>

int main() {
    float p, r, t, si, ci;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    ci = p * (1 + r/100);
    for(int i = 1; i < t; i++) {
        ci = ci * (1 + r/100);
    }
    ci = ci - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
