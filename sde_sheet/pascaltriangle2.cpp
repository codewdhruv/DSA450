class Solution{
public:
    vector<ll> nthPascal(vector<ll> ans,int n,int len)
   {
       vector<ll> v;
       v.push_back(1);
       
       if(ans.size()==len)
           return ans;
       int i=0;
       while(i<ans.size()-1)
       {
           v.push_back((ans[i]+ans[i+1])%1000000007);
           i++;
       }
       v.push_back(1);
       return nthPascal(v,n,len);
   }
   
    vector<ll> nthRowOfPascalTriangle(int n) {
       // code here
       vector<ll> ans;
        ans.push_back(1);
       ans=nthPascal(ans,n,n);
       
       return ans;
   }
   
