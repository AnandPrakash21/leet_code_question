#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
int pivotInteger(int n)
{
int leftSum=0;
int rightSum=0;
for(int i=1;i<=n;i++)
{
leftSum = i *(i + 1) / 2; //calculate the sum of elements from 1 to i using arithmetic progression formula
rightSum = n * (n + 1) / 2 - i * (i - 1) / 2; // calculate the sum of elements from i to n using arithmetic progression formula

if(leftSum == rightSum)
{
return i; //return pivot integer 
}
}
return -1;
}
};
