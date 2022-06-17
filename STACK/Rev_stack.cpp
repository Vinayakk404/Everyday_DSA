#include <iostream>
#include <stack>
using namespace std;

stack<int>s1;
void insert_at_bottom(int ele_top)
{
 if(s1.empty())
 {
  s1.push(ele_top);
 }
 else
 {
  int Top=s1.top();
  s1.pop();
  insert_at_bottom(ele_top);
   s1.push(Top);
 }

}

int rev()
{
if(!s1.empty())
 {
 int ele_top=s1.top();
 s1.pop();
 rev(); 
 insert_at_bottom(ele_top);
}
return 0;
}

int main() 
 {
 
 s1.push(1);
 s1.push(2);
 s1.push(3);
 s1.push(4);
rev();
 while(!s1.empty())
 {
  cout<<s1.top()<<endl;
  s1.pop();
 }
 }
