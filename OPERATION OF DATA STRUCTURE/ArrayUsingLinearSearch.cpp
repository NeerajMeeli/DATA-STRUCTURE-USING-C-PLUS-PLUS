//____________________________Impliment program________________________________
//Impliment the data structure Serching Operation using array or for loop

#include<iostream>
using namespace std;
    int main()
    {
        int n,arr[20],i=0,x;
        cout<<"Enter the size of an array:";
        cin>>n;
        cout<<"Enter the value of an array:"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        cout<<"Enter the value search in array:";
        cin>>x;
        for( i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                cout<<"Yes this num is index:"<<i<<"  value:"<<x;
                break;

            }
        }
            if(i==n)
            {
                cout<<"sorry this num is not found in array:";
            }
        return 0;
    }

    

   //________________________________prectice_______________________________
   //Impliment the data structure Searching operation using array
    /*
   #include<iostream>
   using namespace std;
    int main()
    {
        int arr[20],n;
        cout<<"Enter the limit of an array:";
        cin>>n;
        cout<<"Enter the value of an array:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x,i=0;
        cout<<"Enter the searching value :";
        cin>>x;
        for( i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
                cout<<"Yes it's number is avilable :"<<"  index:"<<i<<"  value:"<< x;
                break;
            }
                   
            
        }
        if(i==n)
        {
            cout<<"sorry this num is not found:";
        }
        
       
       
        return 0;
    }
    */