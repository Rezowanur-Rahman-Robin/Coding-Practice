//Prime Number Program In C Using Recursion

#include<stdio.h>

int PrimeorNot(int, int);
void main()
{
    //variable declaration
    int num, prime;

    //input number
    printf("Enter a positive number to check Prime or Not: ");
    scanf("%d", &num);

    //calling function
    prime = PrimeorNot(num, num/2);

    //checking condition and display result
    if(prime == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is a not a prime number\n", num);
    }
}
//recursive Function
int PrimeorNot(int n, int i)
{
    if(i == 1)
        return 1;
    else
    {
        if(n%i == 0)
            return 0;
        else
            PrimeorNot(n, i-1);
    }
}
