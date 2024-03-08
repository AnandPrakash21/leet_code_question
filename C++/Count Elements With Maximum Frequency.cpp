#include<bits/stdc++.h>
class Solution
{
public:
int maxFrequencyElements(vector<int>& nums)
{
  map<int,int>mp;
  int c=0;
  int max=0;
  for(int i = 0; i < nums.size(); i++)
  {
    mp[nums[i]]++;

    if(mp[nums[i]] > max)
    {
      max = mp[nums[i]];
      c=0;
    }

    if(mp[nums[i]] == max)
    {
      c++;
    }
  }
  return c*max;
}
};
