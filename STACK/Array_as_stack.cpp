#include <iostream>
using namespace std;


class Stack{
    int *a;
    int top;
    public:
    int n=10;
    Stack(){a=new int[n];top=-1;}
   void push(int data){
      if(top==n-1){"Overflwo";}
      else{top++;a[top]=data;}
    }
   void pop(){
        if(top==-1){cout<<"Nothing to pop";}
        else
        {top--;}
    }
    int Top(){
        return a[top];
        
    }
};
int main() {
	Stack st;
	st.push(8);
	st.push(2);
	st.pop();

	cout<<st.Top();
	return 0;
}
