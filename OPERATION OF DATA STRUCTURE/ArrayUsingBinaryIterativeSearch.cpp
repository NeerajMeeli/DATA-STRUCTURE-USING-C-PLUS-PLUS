//Impliment the data structure  binary searching operation iterative using array

#include<iostream>
using namespace std;
 int arr[20],n,x,i=0;
int Binarysearch(int low,int high)
{
    while(low<=high)
    {
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]>x)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
        
         }
    }
    return -1;
}
    int main()
    {
       
        cout<<"Enter the size of an array : ";
        cin>>n;
        cout<<"Enter the value of an array : ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the element search in array: ;";
        cin>>x;
        int result= Binarysearch(0,n-1);
        
        if(result==-1) 
        {
            cout<<"Reslt not found in array: ";
        }
        else{
            cout<<"Yes result forund in array:"<<result;
        }
    
        return 0;
    }
