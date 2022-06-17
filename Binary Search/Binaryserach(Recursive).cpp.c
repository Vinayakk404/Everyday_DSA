//Binary search recursive
#include <iostream>
using namespace std;

int binarys(int a[],int key,int low,int high){
    
if(high<=low){return 1;}
    int mid=(high+low)/2;
    
        if(a[mid]==key)
        {
            cout<<"FOund"<<endl;
      
            
        }
        else if(a[mid]>key)
        {binarys(a,key,low,mid-1);}
        else
        {binarys(a,key,mid+1,high);}
    
}
int main() {

int a[]={-4,1,6,19,20};
binarys(a,20,0,4);
	return 0;
}
