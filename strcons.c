PROGRAM TO FIND WHETHER THE STRING IS CONSTANT OR NOT


#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
{
char str[10]; int len,a; clrscr();
printf("\n Input a string :");
gets(str); len=strlen(str); a=0; while(a<len)
{
if(isdigit(str[a]))
{
} 
else 
{

} 
}

a++;

printf(" It is not a Constant");
break;

if(a==len)
{
printf(" It is a Constant");
}
getch();
}