lass Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long diff=INT_MAX;
    long  w=m;
for(long i=0;(i+m-1)<a.size();i++)
{
    diff=min(diff,a[i+m-1]-a[i]);
 
}   
    return diff;
    }   
    }