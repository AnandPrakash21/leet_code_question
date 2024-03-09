#include<bits/stdc++.h>
using namespace std;
class Solution
{
int remove_element(vector<int>& nums,int val)
{
  // try first approach
  vector<int>temp;
  for(auto it : nums)
  {
    if(it != val)
      {
        temp.push_back(it);
      }
  }
nums = temp;
return nums.size();

  // second approach
  // int index = 0;
  // for(int i = 0;i < nums.size();i++)
  //   {
  //     if(nums[i] != val)
  //     {
  //       nums[index] = nums[i];
  //       index++;
  //     }
  //   }
  // return index;
  
}
};
