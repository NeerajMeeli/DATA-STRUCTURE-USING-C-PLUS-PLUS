//Impliment the data structure Sorted operation using array

#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],i=0,n;
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
                    //Method first using variable

                    //  int temp=arr[i];
                    // arr[i]=arr[j];
                    // arr[j]=temp;

                    //Method two without using variable
                    arr[i]=arr[i]+arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]=arr[i]-arr[j];
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