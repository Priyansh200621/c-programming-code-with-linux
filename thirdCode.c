#include main <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit= (celsius*9/5)+32;
    printf("%.2f celsius=%.2f Farhrenit\n",celsius,fahrenheit);
    return 0;        

}