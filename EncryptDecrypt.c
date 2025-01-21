#include<stdio.h>
#include<string.h>
//ecryption functon
int encrypt(char arr[], int key)
{
int len = strlen(arr);
for(int i=0; i<len; i++)
{
if(arr[i]>47 && arr[i]<58)
{
arr[i]=(arr[i]-0+key)%10+'0';
}
if(arr[i]>64 && arr[i]<91)
{
arr[i]=(arr[i]-'A'+key)%26+'A';
}
if(arr[i]>96 && arr[i]<123)
{
arr[i]=(arr[i]-'a'+key)%26+'a';
}
}
printf("%s",arr);
return 0;
}
//decryption function
int decrypt(char arr[], int key)
{
int len = strlen(arr);
for(int i=0; i<len; i++)
{
if(arr[i]>47 && arr[i]<58)
{
arr[i]=(arr[i]-0-key+10)%10+'0';
}
if(arr[i]>64 && arr[i]<91)
{
arr[i]=(arr[i]-'A'-key+26)%26+'A';
}
if(arr[i]>96 && arr[i]<123)
{
arr[i]=(arr[i]-'a'-key+26)%26+'a';
}
}
printf("%s",arr);
return 0;
}
int main()
{
int op, key;
printf("Enter cipher text - ");
char arr[100];
scanf("%s",arr);
printf("Enter key - ");
scanf("%d", &key);
do
{
printf("\n 1.) Enter 1 to encrypt ");
printf("\n 2.) Enter 2 to decrypt ");
printf("\n 3.) End program ");
printf("\n Choose the option among above - ");
scanf("%d",&op);
switch(op)
{
case 1:
printf("Encrypted form - ");
encrypt(arr,key);
break;
case 2:
printf("Decrypted form - ");
decrypt(arr,key);
break;
}
}
while (op!=3);
return 0;
}
