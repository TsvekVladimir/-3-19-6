#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
typedef unsigned int my_int32;
typedef float my_float32;
typedef char my_char32;
typedef double my_double32;


my_int32 x;
my_float32 x2;
my_char32 x3[6]="Слово";
my_double32 x4;

x=32; x2=3.14;
x4=23.1465;

printf("%d %0.2f %s %0.4lf", x, x2, x3, x4);






    return 0;
}
