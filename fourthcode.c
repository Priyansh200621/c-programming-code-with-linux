#include <stdio.h>

#define KM_TO_MILES 0.621371

int main() {
    float km_per_hour, miles_per_hour;

    
    printf("Enter speed in kilometers per hour (km/h): ");
    scanf("%f", &km_per_hour);


    miles_per_hour = km_per_hour * KM_TO_MILES;

    printf("%.2f kilometers per hour is equal to %.2f miles per hour.\n", km_per_hour, miles_per_hour);

    return 0;
}
