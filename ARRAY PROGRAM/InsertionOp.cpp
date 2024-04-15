#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout <<"Enter size of an array:";
        cin >>n;
        int arr[n],i=1;
        cout <<"Enter value of an array:"<<endl;
        // do{
        //     cin>>arr[i];
        //     i++;
        // }while(i<=n);
        // while(i<=n){
        //     cin>>arr[i];
        //     i++;
        // }
        for(; i<=n;)
        {
            cin>>arr[i];
            i++;
        }
        return 0;
    }