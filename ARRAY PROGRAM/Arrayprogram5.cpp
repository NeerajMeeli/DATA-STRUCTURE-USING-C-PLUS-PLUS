#include<iostream>
using namespace std;
    int main()
    {
        int arr[5]={1,2,3,4,5},sum=0;
        cout <<"The value print:";
        for(int i=1;i<=5;i++)
        {
            cout<<arr[i]<<endl;
            sum=sum+arr[i];
        }
        cout<<"the result print is:"<<sum;
        return 0;
    }