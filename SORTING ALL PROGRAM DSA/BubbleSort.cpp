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
         cout<<"Enter the value of an array:";
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

    

   //Impliment the data structure Bubble short using array
/*
   #include<iostream>
   using namespace std;
        int n,i=0;
         int arr[10];
        void getdata()
        {
            cout<<"Enter the size of an array;";
            cin>>n;
        }
        void inputvalue()
        {
           
            cout<<"Eenter the value of an array:";
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }

        }
        
        void bubblesort()
        {
            for(int i=0;i<n-1;i++)
            {
                int swap=0;
                for(int j=0;j<n-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {

                        arr[j]=arr[j]+arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                        swap=1;
                        
                        
                        // int temp;
                        // temp=arr[j];
                        // arr[j]=arr[j+1];
                        // arr[j+1]=temp;



                    }
                }
                //Not a compalsary but time and space comsumming 
                // if(swap==0)
                //       {                          
                //           break;
                //       }
                
          }

      }
        
        void print ()
        {
            cout<<"print the element of an array:";
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
        int main()
        {
            getdata();
            inputvalue();
            bubblesort();
            print();

            return 0;
        }

        */