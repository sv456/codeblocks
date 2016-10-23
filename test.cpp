#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int cnt=0;
main()
{
    srand(time(0));
    int ran_num=1+(rand()%100);
    cout<<"Guess for a random num b/w 1 and 100"<<endl;
    int num;
    while(1){
    cin>>num;
    if(num==ran_num)
    {
        cnt++;
        cout<<"u got it right but u took "<<cnt<<" guesses"<<endl;
        break;
    }
    else{
        if(num>ran_num)
        {
            cout<<"number entered is big- try again"<<endl;
            cnt++;
        }
        else
        {
            cout<<"number is small - try again"<<endl;
            cnt++;
        }
    }
}
}
