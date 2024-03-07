#include<bits/stdc++.h>
using namespace std;
/**
struct ListNode
{
int data;
ListNode *next;
ListNode() :data(0) , next(nullptr){}
ListNode(int x) : val(x),next(nullptr){}
ListNode(int x, ListNode *next) : val(x),next(next){}
};
*/

class Solution
{
public:
ListNode* middleNode(ListNode* head)
{
  if(head == NULL || head -> next == NULL)
    {
      return NULL;
    }
ListNode* fast = head -> next;
ListNode* slow = head;

while(fast != NULL)
{
  fast = fast -> next ;
  if(fast != NULL)
  {
    fast = fast -> next;
  }
slow = slow -> next;
}
return slow;
}
};

