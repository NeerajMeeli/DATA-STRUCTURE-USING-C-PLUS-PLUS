// Insertion sort impliment data structure  using array

#include<iostream>
using namespace std;
    int arr[10],n;
    void inputsizeofArray()
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

    


   // Insertion sort impliment using array
   /*

   #include<iostream>
   using namespace std;
        int arr[20],n,i=0;
        void ReadInputData()
        {
            cout<<"Enter the size of an array:";
            cin>>n;
            cout<<"Enter the value of an array:";
           while(i<n)
           {
            cin>>arr[i];
            i++;
           }
        }

        void Insertionsort()
        {
            for(int i=1;i<n;i++)
            {
                int key=arr[i];
                int j=i-1;

                while(key<arr[j]&& j>=0)
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=key;
            }
        }

        void print ()
        {
            i=0;
            cout<<"print the all data is :";
            while(i<n)
            {
                cout<<arr[i]<<endl;
                i++;
            }
        }

        int main()
        {
            ReadInputData();
            Insertionsort();
            print();
            return 0;
        }

        */