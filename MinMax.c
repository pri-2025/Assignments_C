// //Code(1):
// #include <stdio.h>
// int main()
// {
// int i=0, size=0;
// printf("Enter the size of the array - ");
// scanf("%d", &size);
// int arr[size];
// printf("Enter the elements : \n");
// for (i=0;i<size;i++)
// {
// scanf("%d", &arr[i]);
// }
// printf("The given array is:");
// for(i=0; i<size;i++)
// {
// printf("%d ", arr[i]);
// }
// int max = arr[10], min = arr[0];
// for (i=0;i<size;i++)
// {
// if(arr[i]>max)
// {
// max = arr[i];
// }
// if(arr[i]<min)
// {
// min = arr[i];
// }
// }
// printf("\nThe maximum number in the array is: %d\n", max);
// printf("The minimum number in the array is: %d\n", min);
// return 0;
// }

//Code(2):
#include <stdio.h>
int main()
{
int size=0, s=0, i=0, j=0;
printf("Enter the size of the array - ");
scanf("%d", &size);
int arr[size];
printf("enter the elements - \n");
for (i=0; i<size; i++)
{
scanf("%d", &arr[i]);
}
printf("The given array is - ");
for(i=0; i<size;i++)
{
printf("%d", arr[i]);
}
for (i=0; i<size-1; i++)
{
for(j=i+1; j<size; j++)
{
if (arr[i]>arr[j])
{
s = arr[i];
arr[i] = arr[j];
arr[j] = s;
}
}
}
printf("\nSorted array in ascending order is :");
for(i=0; i<size;i++)
{
printf("%d ", arr[i]);
}
printf("\nMaximum number in the array is : %d\n", arr[0]);
printf("Minimum number in the array is : %d\n", arr[size-1]);
return 0;
}