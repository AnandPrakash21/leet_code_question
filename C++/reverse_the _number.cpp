#include<bits/stdc++.h>
using namespace std;
class Soultion
{
public:
int reverse(int x)
{
  long long reverse = 0;
  while(x)
  {
  int temp = x % 10;
  reverse = reverse * 10 + temp;
  x = x / 10;
  }
  if( reverse > INT_MAX || reverse < INT_MIN)
  {
  return 0;
  }
  return reverse;
  }
};
