#include<bits/sdtc++.h>
using namespace std;
class Solution
{
public:
vector<int> intersection_of_two_array(vector<int>& nums1, vector<int>& nums2)
{
int n = nums1.size();
int m = nums2.size();
sort(nums1.begin(),nums1.end());
sort(nums2.begin(),nums2.end());

set<int> st;
int i=0,j=0;
while(i < n && j < m)
{
if(nums1[i] > nums2[j])
{
j++;
}
else if(nums1[i] < nums2[j])
{
i++;
}
else
{
st.insert(nums1[i]);
i++;
j++;
}
}
vector<int> v;
for(auto i : st)
{
v.push_back(i);
}
return v;
}
};
