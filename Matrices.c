#include <stdio.h>
int main()
{
int m1[3][3], m2[3][3], sum[3][3], sub[3][3], mul[3][3], i, j;
printf("\nEnter elements of 1st matrix:\n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("Enter element a%d%d: ", i + 1, j + 1);
scanf("%d", &m1[i][j]);
}
}
printf("First matrice is - \n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("%d ", m1[i][j]);
}
printf("\n");
}
printf("Enter elements of 2nd matrix:\n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("Enter element b%d%d: ", i + 1, j + 1);
scanf("%d", &m2[i][j]);
}
}
printf("Second matrice is - \n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("%d ", m2[i][j]);
}
printf("\n");
}
//Displaying choices on operations of matrices
int op;
do
{
printf("1.) Addition \n");
printf("2.) Subtraction \n");
printf("3.) Multiplication \n");
printf("4.) Exit \n");
printf("Choose the operation - 1/2/3/4 \n");
scanf("%d", &op);
switch(op)
{
case 1 :
// adding two matrices
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
sum[i][j] = m1[i][j] + m2[i][j];
}
}
printf("\nSum of two matrices: \n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("%d ", sum[i][j]);
if (j == 2)
{
printf("\n\n");
}
}
}
break;
case 2 :
//subtracting two matrices
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
sub[i][j] = m1[i][j] - m2[i][j];
}
}
printf("\nDifference of two matrices: \n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("%d ", sub[i][j]);
if (j == 2)
{
printf("\n\n");
}
}
}
break;
case 3 :
//multiplication of two matrices
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
mul[i][j] += m1[i][j] * m2[i][j];
}
}
printf("\nMultiplication of two matrices: \n");
for (i = 0; i < 3; ++i)
{
for (j = 0; j < 3; ++j)
{
printf("%d ", mul[i][j]);
if (j == 2)
{
printf("\n\n");
}
}
}
break;
case 4 :
printf("Exit the program \n");
break;
}
}
while(op != 4);
return 0;
}