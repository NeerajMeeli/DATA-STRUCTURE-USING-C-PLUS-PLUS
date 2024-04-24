//Selection Sort impliment using data structure

#include<iostream>
using namespace std;
    int arr[20],n;
    void sizeOfarray()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void InsertionSort()
    {
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            if(min!=i)
            {
                int temp;
                temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }
    }

    void print ()
    {
        cout<<"After print sorted array is :";
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<endl;
        }
    }
    int main()
    {
        sizeOfarray();
        InsertionSort();
        print();
        return 0;
    }