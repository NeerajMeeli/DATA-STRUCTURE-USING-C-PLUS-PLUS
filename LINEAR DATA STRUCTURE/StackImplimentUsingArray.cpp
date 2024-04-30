// Stack implimentation using array in c++

#include<iostream>
using namespace std;
    int stack[5],n=5,top=-1;

    void push()
    {
        int x;
       if(top==n-1)
        cout<<"\nStack is ful"<<endl;

       else{
        cout<<"Enter the element in stack :";
        cin>>x;
        top++;
        stack[top]=x;
       }
    }

    void pop()
    {
       // int n;
        if(top==-1)
        {
            cout<<"Stack is Empty";
        }
        else{
            stack[top];

            cout<<"The popped element is :"<<stack[top]<<endl;
            top--;
        }
    }

    void display()
    {
        
        if(top==-1){
           cout<<"Stack is empty ";

        }
         else
         {
            cout<<"Element of stack :";
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
        do
        {
        cout<<"\n__________________Circular Queue Menu________________";
        cout<<"\n1.push\n2.pop\n3.display\n4.peek";
       cout<<"\n___________________________________________________"<<endl;
        cout<<"\nEnter your choise :";
        cin>>choise;
        switch(choise)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:int y=peek();
            cout<<"The top element of the stack is : "<<y<<endl;
            break;
        }
    }
        while(choise!=5);


        return 0;
    }

    


  