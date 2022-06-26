#include <iostream>
using namespace std;

#define n 10
class Queue
{
    int *arr;
    int front=-1;
    int back=-1;
    
    public:
     Queue()
    {
       arr=new int[n];
        
        
    }
    void enqueue(int x)
    {
        if(back!=n-1)
        { back++;
             arr[back]=n;
              if(front==-1)
        {
            front++;
        }
     
        }
        else
        {
            cout<<"queue overflow";
        }
    
      
        
    }
    int dequeue()
    {
        if(isfull()==false)
        {int data=arr[front];
            front++;
            return data;
        }
    }
    bool isfull()
    {
        if(back<front or  front==-1)
        {
            return true;
        }
        return false;
    }
    int peek()
    {
        if(front!=-1 and front<=back)
        {
            return(arr[front]);
        }
    }
};
int main() {
	Queue q1;
	q1.enqueue(4);
	cout<<q1.dequeue();
	
}
