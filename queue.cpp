#include<iostream>
using namespace std;
 
 class Queue
 {
     int rear;
     int front;
     int *arr;
     int capacity;
     public:
     Queue()
     {
         cout<<"enter capacity of queue:"<<endl;
         cin>>capacity;
         rear=-1;
         front=-1;
        arr=new int[capacity];
     }
     void enqueue();
     int dequeue();
     bool isEmpty();
     void display();
 };

 void Queue::enqueue()
 {
     int element;
     if(front==-1 && rear==-1)
     {
        cout<<"enter element you want to insert"<<endl;
        cin>>element;
        rear=front=0;
        arr[rear]=element;
     }
     else if(rear==capacity-1)
     {
         cout<<"queue is full"<<endl;
     }
     else
     {
         cout<<"enter element you want to insert"<<endl;
         cin>>element;
         arr[++rear]=element;
     }
 }

 int Queue::dequeue()
 {
     int val;
     if(front==-1 && front>rear)
     {
         cout<<"queue is empty"<<endl;
         return -1;
     }
     else if(front==rear)
     {
        val=arr[front];
        rear=front=-1;
        return val;
     }
     else
     {
         return arr[front++];
     }
 }

 bool Queue::isEmpty()
 {
     if(rear==capacity-1 && front==0)
        return false;
    else 
        return true;
 }
  
void Queue::display()
{
    if(rear==-1 && front>rear)
       cout<<"queue is empty"<<endl;
    else
    {
        int i;
        for(i=front;i<=rear;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}
int main()
{
    Queue *q=new Queue();
    int op;
    bool flag=true;
    while(flag)
    {
        cout<<"choose an option you want to perform"<<endl;
        cout<<"(1)enqueue\n(2)dequeue\n(3)isEmpty\n(4)display\n(5)exit"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:q->enqueue();
                   break;
            case 2:q->dequeue();
                   break;
            case 3:q->isEmpty();
                   break;
            case 4:q->display();
                   break;
            case 5:flag=false;
                   break;
            default:cout<<"enter a valid option"<<endl;
        }
    }
    
}