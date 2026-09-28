#include <stdio.h>
#define days_per_year 365
#define hours_per_day 24
#define seconds_per_hour 3600
int main()
{
    int years = 18;
    int days = years * days_per_year;
    int hours = days * hours_per_day;
    int seconds = hours * seconds_per_hour;
    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d", seconds, hours, days, years);
    return 0;
}