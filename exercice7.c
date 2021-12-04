/*Write a program in C which has:  [Total : 5 points]

structure to store the name, account number, and balance of customers (more than 10) and store their information. [1 point]
a function to print the names of all the customers having a balance of less than $200. [2 points]
a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance */


#include <stdio.h>

struct customer {
    char Name[10];
    int account_number;
    int balance;
   
} c[10];

void checking(struct customer c[],int n) 
{
     int i;
     printf("\nCustomer Details whose Balance < 200 $. \n");

     for(i=0;i<n;i++)
     {
          if(c[i].balance<200)
          {
               printf("Account Number : %d\n",c[i].account_number);
               printf("Name           : %s\n",c[i].Name);
               printf("Balance        : %d\n",c[i].balance);
               
          }
     }
}

void adding(struct customer c[],int n) {

    int i;
    int x = 100;
    int new_bal;
    printf("\nCustomer Details whose Balance > 1000 $. \n");
    printf("\n adding 100 $ to their balance\n");

    
    for (i = 0; i < n; i++)
    {
        /* code */
        new_bal = c[i].balance + x;
        if (c[i].balance>1000) {
        printf("Name           : %s\n",c[i].Name);
        printf("Account Number : %d\n",c[i].account_number);
        printf("The new Balance        : %d\n", new_bal);
    }
    }
    


}

int main() {
    int i;
    printf("Enter all information of Customers:\n");

    // storing information
    for (i = 0; i < 10; ++i) {
        printf("Enter your name: \n");
        scanf("%s", c[i].Name);
        printf("Enter your account number: \n");
        scanf("%d", &c[i].account_number);

        printf("Enter your Balance: \n");
        scanf("%d", &c[i].balance);
       
    }
    printf("Printing All  Information:\n\n");

    // Printing information
    for (i = 0; i < 10; ++i) {
        printf("First name: \n");
        puts(c[i].Name);
        printf("Account Number : %d\n",c[i].account_number);

        printf("Balance        : %d\n",c[i].balance);
        printf("\n");
    }

    checking(c,10);
    adding(c,10);
    return 0;
}
