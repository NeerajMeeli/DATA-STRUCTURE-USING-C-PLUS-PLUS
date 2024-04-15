 //_____________________________________Method First_______________________________
/*QUESTION: WAP N number of eleent and print the element or sum
     of all nmber using do while loop*/

     #include<iostream>
     using namespace std;
        int main()
    {
        int n,i=1;
        cout <<"Enter a limit of an array:";
        cin>>n;
        int arr[n];
         cout<<"Enter a value of an array:";
             do{
                cin>>arr[i];
                 i++;
         }
         while(i<=n);
            i=1;
           int sum=0;
                 cout <<"The all array print of consol screen:";
                 do{
                  cout<<arr[i]<<endl;
                    
                     sum=sum+arr[i];
                      i++;
         }
                 while(i<=n);
                 cout<<"The all value sum is :"<<sum;
        return 0;
    }
    
