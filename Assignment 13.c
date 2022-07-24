//Assignment 13 Sol 1//
/*
#include <stdio.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Sum = %d", addNumbers(num));
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}
*/

//Sol 2//
/*
#include<stdio.h>
int SumOdd(int num1, int num2)
{
   if(num1>num2)
    return 0;
return num1+SumOdd(num1+2,num2);
}
int main()
{
    int num1=1,num2;
    printf("Enter your Limit:");
    scanf("%d",&num2);
    printf("Sum of all odd numbers in the given range is: %d",SumOdd(num1,num2));
}
*/

//Sol 3//
/*
#include<stdio.h>
int SumOdd(int num1, int num2)
{
   if(num1>num2)
    return 0;
return num1+SumOdd(num1+2,num2);
}
int main()
{
    int num1=1,num2;
    printf("Enter your Limit:");
    scanf("%d",&num2);
    printf("Sum of all odd numbers in the given range is: %d",SumOdd(num1,num2));
}
*/

//Sol 4//
/*
#include<stdio.h>
int main()
{
int square(int);
int n;
printf("\nEnter N'th Value : ");
scanf("%d", &n);
printf("\nThe Result is : %d.", square(n));
}
int square(int x)
{
int a, b;
if(x == 0) return 0;
if(x == 1) return 1;
a = x - 1;
b = x * x + square(a);
return(b);
}
*/

//Sol 5//
/*
#include <stdio.h>

int sum (int a);

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}

int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
*/

//Sol 6//
/*
#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}
*/

//Sol 7//
/*
#include <stdio.h>

int hcf(int, int);

int main()
{
    int a, b, result;

    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a, &b);
    result = hcf(a, b);
    printf("The HCF of %d and %d is %d.\n", a, b, result);
}

int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return hcf(a - b, b);
        }
        else
        {
            return hcf(a, b - a);
        }
    }
    return a;
}
*/

//Sol 8//
/*
 #include<stdio.h>
void printFibonacci(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);//n-2 because 2 numbers are already printed
  return 0;
 }
*/

//Sol 9//
/*
#include <stdio.h>

//function to count digits
int countDigits(int num)
{
    static int count=0;

    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }
}
int main()
{
    int number;
    int count=0;

    printf("Enter a positive integer number: ");
    scanf("%d",&number);

    count=countDigits(number);

    printf("Total digits in number %d is: %d\n",number,count);

    return 0;
}
*/

//Sol 10//
#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
