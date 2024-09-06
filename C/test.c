#include <stdio.h>
#include <windows.h>
void clear();
void main()
{
while(1)
{
printf("-");
clear();
printf("\\");
clear();
printf("|");
clear();
printf("/");
clear();
}
}
void clear()
{
system("cls");
}