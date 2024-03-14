#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
int numSubarrayWithSum(vector<int>& nums,int goal)
{
  int n = nums.size();
  int result =0;
int prefixSum = 0;
unordered_map<int ,int> mp;
mp[0] = 1;

for(int i=0;i<n;i++)
{
prefixSum += nums[i];

// result += mp[prefixSum -goal];
// mp[prefixSum]++;

  if(mp.find(prefixSum - goal) != mp.end())
  {
    result += mp[prefixSum - goal];
}
  mp[prefixSum]++;
}
return result;
}
};
