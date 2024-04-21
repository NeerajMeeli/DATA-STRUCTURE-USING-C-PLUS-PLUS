//__________________________________Impliment_____________________________
//Array using Deletion operation  at the beginning data structure

#include<iostream>
using namespace std;
    int main()
{
    int arr[20],n,i=0;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the value of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
            
        }
        n--;
        cout <<"Element print before deletion :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
}



//__________________________________Impliment_____________________________
//Array using Deletion operation  at the end data structure
/*
#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],n,i=0;
        cout<<"Enter the size of an array :";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n;i<n-1;i--)
        {
            arr[i-1]=arr[i];
        }
        n--;
        cout<<"print the before deletion array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
    }

    */


 //__________________________________Impliment_____________________________
//Array using Deletion operation  at the any given index data structure
/*
#include<iostream>
using namespace std;
    int main()
    {
        int arr[20],n,i=0,x;
        cout <<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the element of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }                                               //not complite code
        
        cout<<"Enter the possition of array:";
        cin>>x;
        for(int i=n;i>=x-1;i--)
            {
                arr[i-1]=arr[i];
            }       
            arr[x-1]=x;
            n--;
            cout<<"print the all element of an array :"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }


        return 0;
    }

    */