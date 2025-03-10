#include <stdio.h>

int main(){
    int hours,minutes,totalMinutes;
     printf("Enter Hours: ");
     scanf("%d",&hours);

     printf("Enter minutes: ");
     scanf("%d",&minutes);

     totalMinutes = (hours * 60) + minutes;

     printf("Total minutes : %d\n",totalMinutes)
     return 0;
}