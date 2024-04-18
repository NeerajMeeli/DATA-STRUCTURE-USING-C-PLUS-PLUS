//WAP N number of element and sum of all number using for loops.

#include<iostream>
using namespace std;
    int main()
    {
        int arr[5],N,sum=0,i=1;
        cout <<"Enter a number :";
        for( ; i<=N;){
        cin>>arr[i];
        i++;
        }
        i=1;
        cout <<"The array result print:";
        for( ; i<=N;){
        cout<<arr[i]<<endl;
        sum=sum+arr[i];
         i++;
       
        }
        cout <<"sum is :"<<sum;
        return 0;
    }
    
   //____________________________________second Method__________________________
   //WAP N number of element and sum of all number using do while loops

   /*
   #include<iostream>
   using namespace std;
    int main()
    { 
        const int Size =5;
        int arr[Size];
        int i=1;
        int sum=0;
        cout <<"Enter element of array :";
        do{
            cin>>arr[i];
            i++;
        }
        while(i<=Size);
        i=1;
        cout<<"The array print:";
        do{
            cout<<arr[i]<<endl;
            sum=sum+arr[i];
            i++;

        }
        while(i<=Size);
        cout <<"The sum is :"<<sum;

        return 0;
    }
     
    */


//________________________________Third Method_________________________________
//WAP N number of element and sum of all number using while loops
/*
   #include<iostream>
   using namespace std;
    int main()
    {
        const int Size=6;
        int arr[Size];
        int i=1;
        int sum=0;
        cout <<"Enter a element of array :";
        while(i<=Size)
        {
            cin>>arr[i];
            i++;
        }
        i=1;
        cout <<"The result is print :";
        while(i<=Size){
            cout <<arr[i]<<endl;
            sum=sum+arr[i];
            i++;
        }
        cout<<"The sum is :"<<sum;
        return 0;
    }
    */