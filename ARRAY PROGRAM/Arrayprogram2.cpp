//_____________________________________Method First_______________________________
/*QUESTION: WAP N number of eleent and print the element or sum
     of all nmber using for loop*/


#include<iostream>
using namespace std;
    int main() 
    {
        int n;
       // int sum=0;
        cout <<"Enter a limit of an array:";
        cin>>n;
        int arr[n],i=1;
        cout<<"Enter value of array:";
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        i=1;
        int sum=0;
        cout<<"All valur of array print:";
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<endl;
            sum=sum+arr[i];

        }
        cout<<"the sum is :"<<sum;
        
        
        return 0;
    }


    

 
    
    
