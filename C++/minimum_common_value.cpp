#include<bits/stdc++.h>
using namespace std;
class Solution
{
int minimumcommon(vector<int>& nums1 , vector<int>& nums2)
{
  set<int> st;
  int result = -1;
  for(int num : nums1)
  {
    st.insert(num);
  }
  for
    for(int num : nums2)
    {
      if(st.contains(num))
      {
        result = num;
        break;
      }
    }
  return result;
}
};
