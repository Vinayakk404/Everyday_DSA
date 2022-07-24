// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void recu(string v1,int i,int n,string curr)
{
    if(i>=n)
    {cout<<curr<<endl;
        return;
    }
   
    recu(v1,i+1,n,curr);
   

    recu(v1,i+1,n,curr+v1[i]);

   
}

int main() {
   string v1="abc";
   recu(v1,0,v1.size(),"");
   
    return 0;
}