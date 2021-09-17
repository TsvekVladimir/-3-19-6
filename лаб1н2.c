#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef char TEXT;

void kl_slov()
{
TEXT s[20];
int slov, count = 0, i;
printf("Ââåäèòå ïðåäëîæåíèå: ");
gets(s);
for(i=0; i<strlen(s)-1; i++)
    if((s[i]==' ') && (s[i+1]!=' '))
    count++;
if(s[0]!=' ')
    count++;
printf("Â ïðåäëîæåíèå: %d ñëîâ", count);
}
int main()
{
setlocale(LC_ALL, "Rus");
kl_slov();
    return 0;
}
