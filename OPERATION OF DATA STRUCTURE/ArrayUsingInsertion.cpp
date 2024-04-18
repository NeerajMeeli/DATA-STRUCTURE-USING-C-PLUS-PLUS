//Impliment data structure Insertion Operation using array at the beginning.

#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int beginning;
        cout<<"Enter the value at the  beginning:";
        cin>>beginning;
        i=0;
        for(i=n;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=beginning;
        n++;
        cout<<"print the value of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

        return 0;

    }
    

//Impliment data structure Insertion Operation using array at the end.

/*

#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[100],i=0,temp;
        cout<<"Enter the value of an array:";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int end;
        cout<<"Enter the value at the end:";
        cin>>end;
        arr[i]=end;
        n++;
        cout<<"print the all element of value:";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
    }
*/

    //     /*
    //     cout<<"_________________________________________________"<<endl;
    //     for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //         {
    //             if(arr[i]>arr[j])           //this is asending or disending code
    //             {
    //                 temp=arr[i];
    //                 arr[i]=arr[j];
    //                 arr[j]=temp;
    //             }
    //         }
    //     }
    //     cout<<"print Asending order:";
    //     for(int i=0;i<n;i++)
    //     {
    //         cout<<arr[i]<<endl;
    //     }
    // */
        

//Impliment data structure Insertion Operation using array at the any given possition.
/*
#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an arra:";
        cin>>n;
        int arr[n],i=0;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int pos,value;
        cout<<"Enter the any given possition:";
        cin>>pos;
        cout <<"Enter the  possiton value:";
        cin>>value;
        for(int i=n;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=value;
        n++;
        cout<<"print the all value of an array:";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

        return 0;
    }
    */