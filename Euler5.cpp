
/**
Project Euler problem# 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/
#include<iostream>
using namespace std;
int div_check(int);
int check=0;
main()
{
    long j,small=1000000000,c;
    for(int i=20;i<=1000000000;i++)
    {
        c=div_check(i);
        if(c==1)
        {
            if(small>i)
                small=i;
            break;
        }
    }
    cout<<small<<endl;
}
int div_check(int a)
{
    int j=1;
    while(j<=20)
    {
        if(a%j==0)
        {
            check=1;
            j++;
        }
        else
        {
            check=0;
            return 0;
        }
    }
    return 1;
}
