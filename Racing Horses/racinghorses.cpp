#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
	//cout<<"enter t:"<<endl;
	cin>>t;
	while(t>0)
	{
        int n;
        //cout<<"Enter the no. of elements:"<<endl;
        cin>>n;
        //cout<<"Now enter all the elements"<<endl;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        /*for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }*/
        int mini,diff=0;
        mini = arr[1]-arr[0];
        for(int k=0;k<n-1;k++)
        {
            diff = arr[k+1]-arr[k];
            if(diff<mini)
            {
                mini = diff;
            }
        }
        cout<<mini<<endl;
        t--;
	}

}
