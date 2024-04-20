#include<iostream>
using namespace std;
int arr[10],n,x ,i=0;
int Binarysearch(int low,int high)
{
        if(low>high)
        {
            return -1;
        }
        else
        {
            int mid=(low+high)/2;
            if(arr[mid]==x)
            {
                return mid;
            }
            else if(arr[mid>x])
            {
                return Binarysearch(low,mid-1);
            }
            else{
                return Binarysearch(mid+1,high);
            }
        }
}   
        
    int main()
    {
        
        cout <<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the element to search in array:";
        cin>>x;
        int result=Binarysearch(0,n-1);
        if(result==-1)
        {
            cout<<"sorry element not found in array:";
        }
        else{
            cout<<"Element found in an array: "<<result;
        }
        return 0;
    }