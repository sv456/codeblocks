/** (From:http://projecteuler.net/index.php?section=problems&id=3)

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */
#include<iostream>
using namespace std;
main()
{   int big=1,arr[30],j=0,i=2;
    long long num=600851475143;
    while(i<num)
    {
        if(num%i==0)
            {
                num/=i;
                arr[j]=i;
                i=2;
                j++;
            }
        i++;
    }
    arr[j]=num;
    for(int l=0;l<j;l++)
    {
        big=arr[l];
        if(arr[l]<arr[l+1])
        {
            big=arr[l+1];
        }
    }
    cout<<big<<endl;
}
