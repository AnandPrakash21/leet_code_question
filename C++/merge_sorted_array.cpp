#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void merge(vector<int>& nums1,int m,vector<int>& nums2,int n)
    {
        for(int i=0;i<n;i++)
        {
            nums1[m+i] = nums1[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
int main()
{
    int  t;cin>>t;while(t--)
    {
            int a,b;
            cin>>a>>b;
            vector<int> v1(a),v2(b);
            Solution obj;
            obj.merge(v1,a-1,v2,b-1);
            cout<<"Merged array is : ";
            for(auto x:v1)cout<<x<<" ";
            cout<<endl;
    }
}