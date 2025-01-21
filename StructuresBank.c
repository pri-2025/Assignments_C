#include <stdio.h>
#include <string.h>
// Define structure
struct Bankholder_details
{
char name[50];
long int ac_no;
long int mob_no;
char add[500];
float bal;
};
// Declaring structure array
struct Bankholder_details bh[2];
// Functions
void display();
void search_name();
void search_acno();
void deposit();
void withdraw();
int main() {
int i, op;
// Input data for account holders
for (i = 0; i < 2; i++)
{
printf("\n Name of the account holder: ");
scanf("%s", bh[i].name); // Correct: no '&' for strings
printf(" Account no.: ");
scanf("%ld", &bh[i].ac_no);
printf(" Contact no. of the account holder: ");
scanf("%ld", &bh[i].mob_no);
printf(" Address of the account holder: ");
scanf("%s", bh[i].add); // To accept multi-word input
printf(" Balance of the account holder: ");
scanf("%f", &bh[i].bal);
}
// Displaying choices for user
do
{
printf("\n1. Display all data");
printf("\n2. Search by name");
printf("\n3. Search by account no.");
printf("\n4. Deposit money");
printf("\n5. Withdraw money");
printf("\n6. Exit the program\n");
printf("Enter your choice: ");
scanf("%d", &op);
switch (op)
{
case 1: display();
break;
case 2: search_name();
break;
case 3: search_acno();
break;
case 4: deposit();
break;
case 5: withdraw();
break;
case 6: printf("Exiting program.\n");
break;
default: printf("Invalid option. Try again.\n");
}
}
while (op != 6);
return 0;
}
// Function to display all account details
void display()
{
for (int i = 0; i < 2; i++)
{
printf("\nName: %s", bh[i].name);
printf("\nAccount no.: %ld", bh[i].ac_no);
printf("\nMobile no.: %ld", bh[i].mob_no);
printf("\nAddress: %s", bh[i].add);
printf("\nBalance: %.2f\n", bh[i].bal);
}
}
// Function to search account by name
void search_name()
{
char name_in[50];
int found = 0;
printf("Enter the name: ");
scanf("%s", name_in);
for (int i = 0; i < 2; i++)
{
if (strcmp(name_in, bh[i].name) == 0)
{
printf("\nName: %s", bh[i].name);
printf("\nAccount no.: %ld", bh[i].ac_no);
printf("\nMobile no.: %ld", bh[i].mob_no);
printf("\nAddress: %s", bh[i].add);
printf("\nBalance: %.2f\n", bh[i].bal);
found = 1;
break;
}
}
if (!found)
{
printf("Account does not exist.\n");
}
}
// Function to search account by account number
void search_acno()
{
long int acno_in;
int found = 0;
printf("Enter the account number: ");
scanf("%ld", &acno_in);
for (int i = 0; i < 2; i++)
{
if (acno_in == bh[i].ac_no)
{
printf("\nName: %s", bh[i].name);
printf("\nAccount no.: %ld", bh[i].ac_no);
printf("\nMobile no.: %ld", bh[i].mob_no);
printf("\nAddress: %s", bh[i].add);
printf("\nBalance: %.2f\n", bh[i].bal);
found = 1;
break;
}
}
if (!found)
{
printf("Account does not exist.\n");
}
}
// Function to deposit money
void deposit()
{
long int acno_in;
int found = 0;
printf("Enter the account number in which you want to deposit money: ");
scanf("%ld", &acno_in);
for (int i = 0; i < 2; i++)
{
if (acno_in == bh[i].ac_no)
{
float depo;
printf("Enter amount to deposit: ");
scanf("%f", &depo);
bh[i].bal += depo; // Update balance of the second account
printf("Updated balance: %.2f\n", bh[i].bal);
found = 1;
break;
}
}
if (!found) {
printf("Account does not exist.\n");
}
}
// Function to withdraw money
void withdraw()
{
long int acno_in;
int found = 0;
printf("Enter the account number in which you want to deposit money: ");
scanf("%ld", &acno_in);
for (int i = 0; i < 2; i++)
{
if (acno_in == bh[i].ac_no)
{
float take;
printf("Enter amount to withdraw: ");
scanf("%f", &take);
if (bh[i].bal >= take)
{
bh[i].bal -= take; // Deduct from balance
printf("Updated balance: %.2f\n", bh[i].bal);
}
else
{
printf("Insufficient balance.\n");
}
found = 1;
break;
}
}
if (!found)
{
printf("Account does not exist.\n");
}
}