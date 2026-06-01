#include <stdio.h>

int main()
{
char x[10];
char *p, *q;

int maxCount = 0;
char maxChar;

printf("10개의 문자 입력 : ");

for (p = x; p < x + 10; p++)
scanf(" %c", p);

for (p = x; p < x + 10; p++)
{
int count = 0;

for (q = x; q < x + 10; q++)
{
if (*p == *q)
count++;
}

if (count > maxCount)
{
maxCount = count;
maxChar = *p;
}
}

printf("%c %d\n", maxChar, maxCount);

return 0;
}
