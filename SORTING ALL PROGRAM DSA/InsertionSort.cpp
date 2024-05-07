// Insertion sort impliment data structure  using array

#include<iostream>
using namespace std;
    int arr[10],n;
    void inputsizeofArray()
    {
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of Ascen/Discen/jumbled order :";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    }

    void InsertionSort()
    {
        for(int i=1;i<n;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(key<arr[j] && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }

    void print ()
    {
        cout<<"Print the all element are :";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    int main()
    {   
        inputsizeofArray();
        InsertionSort();
        print();
        return 0;
    }
