// Online C compiler to run C program online
#include <iostream>
using namespace std;
void merge(int arr[],int l,int r)
{
    int mid=(l+r)/2;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    int k=l;
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[k++];
        
    }
     k=mid+1;
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[k++];
    }
    int i=0,j=0;
    while(i<n1 &&j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;i++;
        }
        else
        {
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;k++;
        
    }
    while(j<n2)
    {
        arr[k]=a[j];
        j++;k++;
    }
    
}
void mergeSort(int arr[],int low,int high)
{
    while(low<high){
    int mid=low+(high-low)/2;
    
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,high);
    }
}
int main() {
    int arr[]={1,5,2,4,3};
    int n=5;
    mergeSort(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}