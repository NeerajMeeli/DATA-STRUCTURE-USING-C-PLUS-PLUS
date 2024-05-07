//Selection Sort impliment using data structure

#include<iostream>
using namespace std;
    int arr[20],n;
    void sizeOfarray()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of Jumbled or Discending order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }

    void SelectionSort(int min)
    {
        for(int i=0;i<n-1;i++)
        {
           // int min=i;
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
        SelectionSort(0);
        print();
        return 0;
    }