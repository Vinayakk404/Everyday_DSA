..Binary search (Iterative)
#include <iostream>
using namespace std;

void binarys(int a[],int key,int n){
    int high=n-1;
    int low=0;int mid;
    while(high>=low){
        mid=(high+low)/2;
        if(a[mid]==key)
        {
            cout<<"FOund"<<endl;
        break;
            
        }
        else if(a[mid]>key)
        {high=mid-1;}
        else
        {low=mid+1;}
    }
}
int main() {

int a[]={-4,1,6,19,20};
binarys(a,20,5);
	return 0;
}
