#include <stdio.h>

int main() {
    float fah,cel;
    int choice;
    printf("1.Convert the temperature from fahrenheit to celsius:");
    printf("\n2.Convert the temperature from celsius to fahrenheit:");
    printf("\n Enter your choices(1,2): ");
    scanf("%d",&choice);
    if (choice == 1)
    {
        printf("enter the temperature in faherenheit:");
        scanf("%f",&fah);
        cel= (fah - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cel);
    }
    else if (choice == 2)
    {
        printf("enter the temperature in celsius:");
        scanf("%f",&cel);
        fah= (cel*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fah);
    }
    else
    {
        printf("invalid choice");
    }
    return 0;
}
