#include<stdio.h>
int main()
{
//Taking input of size of array and its elements
int size, i;
printf("Enter size of array - ");
scanf("%d", &size);
int arr[size];
printf("Enter elements - ");
for(i=0; i<size; i++)
{
scanf("%d", &arr[i]);
}
int opt;
printf("1.) Searching the no. within entered elements \n 2.) Arranging in ascending order \n");
scanf("%d", &opt);
switch(opt)
{
case 1 :
//Searching the no. within entered elements
int num_search;
printf("Enter no. which is to be searched - \n");
scanf("%d", &num_search);
int found = 0;
for(i=0; i<size; i++)
{
if(arr[i] == num_search)
{
found = 1;
break;
}
}
if(found == 1)
{
printf("Number is found");
}
else
{
printf("Entered number is not found");
}
break;
case 2:
//Sorting the array in ascending order
int sort;
for(i=0; i<size; i++)
{
for(int j=i+1; j<size; j++)
{
if(arr[i]>arr[j])
{
sort = arr[i];
arr[i] = arr[j];
arr[j] = sort;
}
if(arr[i]<arr[j])
{
arr[i] = arr[i];
arr[j] = arr[j];
}
}
}
printf("Numbers in ascending order are - \n");
for(i=0; i<size; i++)
{
printf("%d", arr[i]);
}
}
return 0;
}