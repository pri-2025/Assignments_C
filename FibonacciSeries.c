#include<stdio.h>
void main(){
int n;
printf("Enter no. - ");
scanf("%d", &n);
int a = 0;
int b = 1;
if(n==1){
printf("\n %d", a);
}
else if(n==2){
printf("\n %d \n %d", a, b);
}
else{
printf("\n %d", a);
printf("\n %d", b);
int i;
for(i=0; i<n-1; i++){
int c=a+b;
a=b;
b=c;
printf("\n %d", c);
}
}
}