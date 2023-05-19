
class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
 
    unordered_map<int,int> m;
    m[0]=-1;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
        if(m.find(sum)!=m.end())
        {
            ans=max(ans,i-m[sum]);
        }
        else
        m[sum]=i;
    }
    return ans;
    }
};
