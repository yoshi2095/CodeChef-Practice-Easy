#include<iostream>
using namespace std;
int main()
{
    int a, b, diff;
    cin>>a>>b;
    diff=a-b;
    if(diff>0) {
        if((diff%10)==9)
        {
            cout<<a-b-1;
        }
        else if ((diff%10)<9)
        {
            cout<<a-b+1;
        }
    }
    return 0;

}

