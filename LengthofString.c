#include<stdio.h>
#include<string.h>
int main()
{
// Length of string using "strlen" function
char a[100];
printf("Enter a sentence - %c", a);
fgets(a, 100, stdin);
printf("Length of the sentence is - %d", strlen(a)-1);
// Using "For loop"
char b[100];
printf("Enter a sentence - %c", b);
fgets(b, 100, stdin);
int i = 0;
int l = 0;
int v = 0;
int d = 0;
int s = 0;
for(i=0; b[i]!='\0'; i++)
{
//Length of string
l++;
//No of vowels
if(b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U'||
b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
{
v++;
}
//No. of digits
if(b[i]=='1'||b[i]=='2'||b[i]=='3'||b[i]=='4'||b[i]=='5'||
b[i]=='6'||b[i]=='7'||b[i]=='8'||b[i]=='9')
{
d++;
}
//No. of spaces
if(b[i]==' ')
{
s++;
}
}
printf("\n Length of sentence is - %d", l-1);
printf("\n Total no. of vowels in the sentence - %d", v);
printf("\n Total no. of digits in the sentence - %d", d);
printf("\n No. of spaces in the sentence is - %d", s);
return 0;
}