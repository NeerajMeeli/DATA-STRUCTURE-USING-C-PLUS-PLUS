//Impliment the data structure Trevarsal operation using using array and for loop

#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=1;
        cout<<"Enter the value of an array:";
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        i=1;
        cout<<"Print all element of an array:";
        for(i=1;i<=n;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
    }
    

 //Impliment the data structure Trevarsal operation using using array and while loop
    /*
   #include<iostream>
   using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=1;
        cout<<"Enter the value of an array:";
        while(i<=n)
        {
            cin>>arr[i];
            i++;
        }
        i=1;
        cout<<"print the element of an array:";
        while(i<=n)
        {
            cout<<arr[i]<<endl;
            i++;
        }
        return 0;
    }
    */


//Impliment the data structure Trevarsal operation using using array and do while loop
/*
#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"Enter the size of an array:";
        cin>>n;
        int arr[n],i=1;
        cout<<"Enter the value of an array:";
        do
        {
            cin>>arr[i];
            i++;
        }
         while (i<=n);

        i=1;
        cout<<"print the all element of an array:";
        do{
            cout<<arr[i]<<endl;
            i++;
        }
        while(i<=n);
        
        return 0;
    }
    */