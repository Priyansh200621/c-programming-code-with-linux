#include main<Stdio.h>
int main() {
    char forename[50], surname[50];
    int yearofbirth;
    printf("enter your forename");
    scanf("%s", forename);
    printf("enter your surname:");
    scanf("%s",surname);
    printf("enter your year of birth:");
    scanf ("%d", &yearofbirth);
    printf("%s%s%d\n", forename,surname,yearofbirth);
    return 0;


}