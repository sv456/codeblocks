//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

//Find the largest palindrome made from the product of two 3-digit numbers.
#include<iostream>
using namespace std;
int ispal(int);
main()
{
    int prod,ans=0;
    for(int i=100;i<=999;i++)
    {
        for(int j=i;j<=999;j++)
        {
            prod=i*j;
            if(ispal(prod)&&prod>ans)
                ans=prod;

        }
    }
    cout<<ans;
}


int ispal(int x)
{
    int num=x,rev=0;
    while(num>0)
    {
        rev=rev*10+num%10;
        num/=10;
    }
    if(rev==x)
        {
            return 1;
        }
    return 0;
}
