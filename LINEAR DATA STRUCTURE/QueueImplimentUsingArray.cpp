// Queue impliment Using Array in c++ 

#include<iostream>
using namespace std;
    int Queue[5],size=5,front=0,rear=-1;

    void Enqueue()
    {
        int n;
        if(rear==size-1)
        {
            cout<<"\nQueue is Overflow ";
        }
        else{
            //Queue[rear];
            cout<<"Enter element in Queue :";
            cin>>n;
            rear++;
            Queue[rear]=n;
        }
    }

    void Dequeue()
    {
        int x;
        if(front > rear)
        {
            cout<<"\nQueue is Empty";
        }
        else{
            x=Queue[front];
            cout<<"\nThe Deleted Element is Queue :"<<x;
            front++;
           
        }
    }

    void Display()
    {
        if(front > rear)
        {
            cout<<"\nQueue is Empty";
        }
        else{
            cout<<"\nThe Queue element is :";
             for(int i=rear;i>=front ;i--)
            {
                cout<<Queue[i]<<"  ";
            }
        }
    }

    int peek()
    {
        return Queue[front];
    }

    int main()
    {
        int choise;
        do
        {
            cout<<"\n_________________________Queue Menu_________________________";
            cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.peek";
            cout<<"\n____________________________________________________________";
            cout<<"\nEnter Your Choise : ";
            cin>>choise;
            switch(choise)
            {
                case 1:Enqueue();
                break;
                case 2:Dequeue();
                break;
                case 3:Display();
                break;
                case 4:peek();
                cout<<"The Front Element is :"<<Queue[front];
                break;
            }
        }
        while(choise!=5);
        return 0;
    }