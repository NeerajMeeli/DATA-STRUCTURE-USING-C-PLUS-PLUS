//Impliment the data structure Bubble short using array

#include<iostream>
using namespace std;
    int arr[10],n,i=0;
    void getdata()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
    }
    void inputdata()
    {
         cout<<"Enter the value of Ascen/Discen/jumbled order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
   
    void bubblesort()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    void print()
    {
        cout<<"print the all element of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    int main()
    {        
        getdata();
        inputdata();
        bubblesort();
        print();
        return 0;
    }
