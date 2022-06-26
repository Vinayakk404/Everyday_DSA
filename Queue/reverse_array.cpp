#include <iostream>
#include<queue>
using namespace std;

void recu(queue<int>q1)
{
    if(q1.empty())
    {
        return ;
    }
    else{
    int a=q1.front();
    q1.pop();
    recu(q1);
    q1.push(a);
   
    }
}
void display(queue<int>q1)
{
    while(!q1.empty())
    {
        cout<<q1.front();
        q1.pop();
    }
}
int main() {
queue<int>q1;
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);


recu(q1);
display(q1);

	return 0;
}
