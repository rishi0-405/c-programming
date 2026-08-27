#include <stdio.h>

int main() {
    float principal, rate, time, interest, total_amount;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    total_amount = principal + interest;

    printf("\n--- Financial Summary ---\n");
    printf("Simple Interest Earned: %.2f\n", interest);
    printf("Total Maturity Value  : %.2f\n", total_amount);
    return 0;
}
