
#include<iostream>
using namespace std;
    int main()
    {
        int n,arr[20],i=0,x;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:"<<endl<<"\t\t";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        i=0;
        cout<<"Enter the value search in array:";
        cin>>x;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                cout<<"Yes this num is index:"<<i<<"  value:"<<x;

            }
        }
        if(i==n)
        {
            cout<<"No this num is not the array:"; 
        }
        return 0;
    }