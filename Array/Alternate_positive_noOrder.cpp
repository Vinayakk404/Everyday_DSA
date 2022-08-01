
	void rearrange(int arr[], int n) {
	    
	  int i=0,j=n-1;
	 while(i<=j)
	 {
	     if(arr[i]<0)
	     {
	         if(arr[j]>=0)
	         {
	             swap(arr[i],arr[j]);
	         }
	         else
	         {
	             j--;
	         }
	     }
	     else
	 {
	     i++;
	 }
	 }
	  j=1;
	 while(i<n and j<n)
	 {
	     swap(arr[i],arr[j]);
	     i++;j=j+2;
	 }
	}