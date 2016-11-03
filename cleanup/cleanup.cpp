#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n, m;
    //cout<<"Enter t:"<<endl;
    cin>>t;

    while(t>0)
    {
        //cout<<"enter n (total no. of jobs):\n";
        cin>>n>>m;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            arr[i]=i+1;
            //cout<<arr[i]<<" ";
        }
        //cout<<endl;
        //cout<<"\nenter m (no. of jobs already done):\n";
        //cout<<"now enter the jobs already done:\n";
        for(int j=0;j<m;j++)
        {
            int job;
            cin>>job;
            arr[job-1]=0;
        }
        sort(arr,arr+n);
        for(int k=m;k<n;k+=2)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        for(int p=m+1;p<n;p+=2)
        {
            cout<<arr[p]<<" ";
        }
        cout<<endl;
        t--;
    }
}

