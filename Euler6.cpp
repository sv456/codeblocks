/*The sum of the squares of the first ten natural numbers is,

12 + 22 + … + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + … + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
#include<iostream>
#include<math.h>
using namespace std;
int sum_of_squares();
int sum_square();
main()
{
    int s1=sum_of_squares();
    int s2=sum_square();
    if(s1>s2)
        cout<<s1-s2;
    else
        cout<<s2-s1;
}
int sum_of_squares()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        sum+=pow(i,2);
    }
    return sum;
}
int sum_square()
{
    int sum=0;
    for(int j=1;j<=100;j++)
    {
        sum+=j;
    }
    int s=pow(sum,2)+1;
    return s;
}
