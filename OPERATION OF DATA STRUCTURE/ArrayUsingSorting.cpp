//Impliment the data structure Sorted operation using array

#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],i=0,temp,n;
        cout<<"Enter the size of an array:";
        cin>>n;
        
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"_____________________sorting arrry______________________"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                     temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        i=0;
        cout<<"Print the sorted array is:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;        }
        return 0;
    }