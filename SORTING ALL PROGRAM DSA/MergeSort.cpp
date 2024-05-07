// Mergesort impliment using array 

#include <iostream>
using namespace std;
int array[20],n;
void inputvalue()
{
    cout<<"Eneter the size  of an array :";
     cin>>n;
    cout<<"Enter the value of an array :";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
}


void merge(int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int array1[n1];
    int array2[n2];
    for(int i=0;i<n1;i++)
    {
        array1[i]=array[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        array2[j]=array[q+1+j];
    }
     int i=0;
    int j=0;
   // int p=0;
    int k=p;

    while(i<n1 && j<n2)
    {
        
    if(array1[i]<=array2[j])
    {
        array[k]=array1[i];
        i++;
    }
    else{
        array[k]=array2[j];
        j++;
    }
    k++;
    }

    while(i<n1)
    {
    array[k]=array1[i];
    i++;
    k++;
    }

    while(j<n2)
    {
    array[k]=array2[j];
    j++;
    k++;
    }

}

    void mergesort(int l,int r)
    {
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        merge(l,mid,r);

    }
    }

    void print ()
    {
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<endl;
    }
    }
    int main()
    {
        inputvalue();
        cout<<"Before sorting element are :";
        print();
        mergesort(0,n-1);
        cout<<"After sorting element are :";
         print();
        return 0;
    }