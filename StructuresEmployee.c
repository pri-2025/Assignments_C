//Declarinng the structure
struct Employee
{
char name[100];
long int cno;
long int EID;
float s;
};
#include<stdio.h>
int main()
{
int n, i, op;
//Taking employee details
printf("Enter number of employees whose details are to be entered - ");
scanf("%d", &n);
struct Employee E[n];
for(i=0; i<n; i++){
printf("\n Name of the employee - ");
scanf("%s", &E[i].name);
printf("\n Contact no. of the employee - ");
scanf("%ld", &E[i].cno);
printf("\n Employee ID of the employee - ");
scanf("%ld", &E[i].EID);
printf("\n Salary of the employee - ");
scanf("%f", &E[i].s);
}
//Displaying choices
do
{
printf("1. Display the details of all the employees.\n");
printf("2. Search and obtain details of employees by ID.\n");
printf("3. Display details of employees with salaries more than 10,000.\n");
printf("4. Update the Contact_no for particular Employee.\n");
printf("5. Exit the program.\n");
printf("Choose the operation - 1/2/3/4/5\n");
scanf("%d", &op);
//Functions according to the choice
switch(op)
{
case 1:
for(i=0; i<n; i++){
printf("Name - %s \n", E[i].name);
printf("Contact no. - %ld \n", E[i].cno);
printf("Employee ID - %ld \n", E[i].EID);
printf("Salary - %f \n", E[i].s);
}
break;
case 2:
long int EID_search, found=0;
printf("Enter the employee ID of the person to be searched - ");
scanf("%ld", &EID_search);
for(i=0; i<n; i++)
{
if(E[i].EID==EID_search)
{
found = 1;
break;
}
}
if(found == 1)
{
printf("Name - %s \n", E[i].name);
printf("Contact no. - %ld \n", E[i].cno);
printf("Employee ID - %ld \n", E[i].EID);
printf("Salary - %f \n", E[i].s);
}
else
{
printf("Wrong Employee ID \n");
}
break;
case 3:
for(i=0; i<n; i++)
{
if(E[i].s > 10000)
{
printf("Name - %s \n", E[i].name);
printf("Contact no. - %ld \n", E[i].cno);
printf("Employee ID - %ld \n", E[i].EID);
printf("Salary - %f \n", E[i].s);
}
}
break;
case 4:
printf("Enter the employee ID of the person whose contact no. is to be updated - ");
scanf("%d", &EID_search);
for(i=0; i<n; i++)
{
if(E[i].EID==EID_search)
{
found = 1;
break;
}
}
if(found == 1){
printf("Enter new contact no. - ");
scanf("%ld", &E[i].cno);
}
else{
printf("Contact number not matched !");
}
printf("Name - %s \n", E[i].name);
printf("Updated contact no. - %ld \n", E[i].cno);
printf("Employee ID - %ld \n", E[i].EID);
printf("Salary - %f \n", E[i].s);
}
}
while (op != 5);
return 0;
}