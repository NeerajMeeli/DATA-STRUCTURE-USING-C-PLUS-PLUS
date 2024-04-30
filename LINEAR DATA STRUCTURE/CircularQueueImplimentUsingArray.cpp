// Circular Queue impliment using array in c++

#include<iostream>
using namespace std;
    int CircularQueue[5],size=5,front=-1,rear=-1;

    void Enqueue()
    {
        int n;
        if((rear+1)%size==front)
        {
            cout<<"\nCircularQueue is Overflow ";
        }
        else{
            cout<<"Enter the element in Queue :";
            cin>>n;
            if(rear==-1&&front==-1)
            {
                front=0;
                rear=0;
            }
            else{
                rear=(rear+1)%size;
            }
            CircularQueue[rear]=n;
        }
    }

    void Dequeue()
    {
        int x;
        if(rear==-1&&front==-1)
        {
            cout<<"\nCircularQueue is Empty ";
        }
        else{
            x=CircularQueue[front];
            cout<<"\nThe delete element is Queue :"<<x;
            if(rear==front)
            {
                front==-1;
                rear==-1;
            }
            front=(front+1)%size;
        }
    }

    void Display()
    {
        int i;
        if(rear==-1&&front==-1)
        {
            cout<<"\nCircularQueue is Empty :";

        }
        else{
            cout<<"\nThe all element in CircularQueue :";
            for(i=front;i!=rear;(i=(i+1)%size))
            {
                cout<<CircularQueue[i]<<"  ";
            }
            cout<<CircularQueue[i]<<"   ";
        }
    }

    int main()
    {
        int choise;
        do{
            cout<<"\n______________________Circular Queue Menu___________________";
            cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek";
            cout<<"\n___________________________________________________________";
            cout<<"\nEnter Your Choise  :";
            cin>>choise;

            switch(choise)
            {
                case 1:Enqueue();
                break;
                case 2:Dequeue();
                break;
                case 3:Display();
                break;
                
            }

        }
        while(choise!=6);
        return 0;
    }