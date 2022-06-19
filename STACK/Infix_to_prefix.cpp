#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
void display(stack<int>s2)
{
    while(!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
}
 int main() {
 string s="-+7*45+20";
 stack<int>s1;

 for(int i=s.length()-1;i>=0;i--)
  {
     if(isdigit(s[i]))
     {
         s1.push(s[i]-'0');
     }
     else 
     {
         int a=s1.top();
         s1.pop();
         int b=s1.top();
         s1.pop();
         switch(s[i])
         {
             case '+':
              s1.push(a+b);
              break;
             case '-':
              s1.push(a-b);
              break;
             case '/':
              s1.push(a/b);
              break;
             case '*':
              s1.push(a*b);
              break;
             case '^':
              s1.push(pow(a,b));
              break; 
             default:
             cout<<"NOO";
         }
     }
  }
  display(s1);

	return 0;
}
