#include<iostream>
using namespace std;
main()
{
    int a=1,b=2,sum=b,c;
    while(1)
    {
        int c=a+b;
        if(c>4000000)
            break;
        if(c%2==0)
            sum+=c;
        a=b;
        b=c;

}
    cout<<sum;
}
