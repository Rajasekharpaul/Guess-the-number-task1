#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int guess;
    int count=0;
    int num=rand()%(1,10);
    while (true)
    {
        cout<<"Enter your guess:";
        cin>>guess;
        count++;
        if (guess<num)
        {
            cout<<"Too low try again"<<endl;
        }
        else if (guess>num)
        {
            cout<<"Too high try again"<<endl;
        }
        else
        {
            cout<<"Congrats you have gussed in "<<count<<" tries";
            break;
        }       
    }
    return 0;
}