#include<iostream>
using namespace std;

template<typename T>
class Stack
{
    int top;
    int capacity;
    T *arr;
    public:
    Stack()
    {
        top=-1;
        cout<<"enter capacity of stack"<<endl;
        cin>>capacity;
        arr=new T[capacity];
    }
    bool push();
    T pop();
    T peek();
    bool isEmpty();
    void display();
};

template<typename T>
bool Stack<T>::push()
{
  if(top==capacity-1)
  {
      cout<<"stack is full"<<endl;
      return false;
  }
  else
  {
      T element;
      cout<<"enter element you want to insert"<<endl;
      cin>>element;
      arr[++top]=element;
      return true;
  }  
}
 template<typename T>
 T Stack<T>::pop()
 {
     if(top==-1)
     {
         cout<<"stack is empty"<<endl;
         return 0;
     }
     else
     {
      return arr[top--];   
     }
 }

 template<typename T>
 T Stack<T>::peek()
 {
     if(top==-1)
     {
         cout<<"stack is empty"<<endl;
         return 0;
     }
     else
     {
         return arr[top];
     }     
 }

template<typename T>
bool Stack<T>::isEmpty()
{
  if(top==-1)
  {
      return true;
  }
  else
  {
      return false;
  }
  
}

template<typename T>
void Stack<T>::display()
{
    int i=0;
    for(i=0;i<=top;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    Stack<int> *stack=new Stack<int>();
    int op;
    bool flag=true;
    while(flag)
    {
        cout<<"choose the operation you want to perform:"<<endl;
        cout<<"(1)push\n(2)pop\n(3)peek\n(4)isEmpty\n(5)display the stack\n(6)exit"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:stack->push();
                   break;
            case 2:stack->pop();   
                   break;
            case 3:stack->peek();
                   break;
            case 4:stack->isEmpty();
                   break;
            case 5:stack->display();
                   break;
            case 6:flag=false;
                   break;
            default:cout<<"enter a valid option"<<endl;
        }
    }
}