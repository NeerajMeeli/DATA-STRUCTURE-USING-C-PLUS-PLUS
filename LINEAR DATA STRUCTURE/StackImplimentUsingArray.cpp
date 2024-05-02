// Stack implimentation using array

#include<iostream>
using namespace std;
    int stack[5],size=5,top=-1;

    void push()
    {
        int x;
        if(top==size-1)
        {
            cout<<"Stack is Overflow"<<endl;
        }
        else{
            cout<<"Enter an element in stack:";
            cin>>x;
            top++;
            stack[top]=x;
        }
    }

    void pop()
    {
        if (top==-1)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else{
            stack[top];
            cout<<"The delete element is :"<<stack[top];
            top--;
        }
    }

    void display()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty "<<endl;
        }
        else{
            cout<<"The all element in stack :"<<endl;
            for(int i=top;i>=0;i--)
            cout<<stack[i]<<endl;
        }
    }

    int peek()
    {
        return stack[top];
    }
    
       int main()
       {
        int choise;
        do{
        cout<<"\n_____________________neme________________";
        cout<<"\n1.push  2.pop  3.display  4.peek"<<endl;
        cout<<"\nEnter your choise :";
        cin>>choise;
        switch(choise)
        {
            case 1:push();break;
            case 2:pop();break;
            case 3:display();break;
            case 4:peek();
            cout<<"The top element is :"<<stack[top]<<endl;
            break;
        }
        }
        while(choise!=5);

        return 0;
       }

