	public:
	int perfectSum(int arr[], int n, int sum)
	{
       
       int t[n+1][sum+1];
       t[0][0]=1;
       int mod=1000000007;
       for(int i=1;i<sum+1;i++)
           t[0][i] = 0;
       
        for(int i=1;i<n+1;i++)
       {
           for(int j=0;j<sum+1;j++)
           {
               if(arr[i-1]<=j)
               {
                   t[i][j]=(t[i-1][j-arr[i-1]]+t[i-1][j])%mod;
               }
               else
               {
                   t[i][j]=(t[i-1][j])%mod;
               }
               
           }
           
       }
       return t[n][sum];
       
	}