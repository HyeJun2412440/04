#include <stdio.h>

int main(void)
{
    int total_sec;
    int hour, min, sec;

    printf("input the second : ");
    scanf("%i", &total_sec);

    hour = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = total_sec % 60;

    printf("The time for %i second is %i : %i : %i\n",
           total_sec, hour, min, sec);

    return 0;
}