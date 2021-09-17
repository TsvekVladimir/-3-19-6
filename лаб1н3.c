#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum week
{
Monday,
Tuesday,
Wednesday,
Thursday,
Friday,
Saturday,
Sunday

};
int main()
{
setlocale(LC_ALL, "Rus");
int day;
printf("Ââĺäčňĺ íîěĺđ äí˙ čç íĺäĺëč: ");
scanf("%d", &day);
switch(day)
{
        case(1): printf("Monday"); break;
        case(2): printf("Tuesday"); break;
        case(3): printf("Wednesday"); break;
        case(4): printf("Thursday"); break;
        case(5): printf("Friday"); break;
        case(6): printf("Saturday"); break;
        case(7): printf("Sunday"); break;
        default: printf("ERROR");
        }
    return 0;
}
