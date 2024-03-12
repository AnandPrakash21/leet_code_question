#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> v;
            ListNode *temp = head;
            while (temp != NULL)
            {
                v.push_back(temp->val);
                temp = temp->next;
            }
            for (int i = 0; i < v.size(); i++)
            {
                int sum = 0;
                for (int j = i; j < v.size(); j++)
                {
                    sum += v[j];
                    if (sum == 0)
                    {
                        for (int k = i; k <= j; k++)
                        {
                            v[k] = 0;
                        }
                        break;
                    }
                }
            }
            ListNode* dummy = new ListNode(-1);
            ListNode* ans = dummy;
            for(int i = 0; i < v.size(); i++){
                if(v[i] != 0){
                    ans -> next = new ListNode(v[i]);
                    ans = ans->next;
                }
            }
            ans -> next = NULL;
            return dummy -> next;
       
       
        // int prefixSum = 0;
        // unordered_map<int ,ListNode*>mp;
        // ListNode* dummy = new ListNode(0);
        // dummy -> next = head;
        // mp[0] = dummy;
        // while(head != NULL)
        // {
        //     prefixSum += head -> val;
        //     if(mp.find(prefixSum) != mp.end())
        //     {
        //         //delete the node 
        //         ListNode* start = mp[prefixSum];
        //         ListNode* temp = start;
        //         int pSum = prefixSum;
        //         while(temp != head)
        //         {
        //             temp = temp -> next;
        //             pSum += temp -> val;
        //             if(temp != head)
        //             {
        //                 mp.erase(pSum);
        //             }
        //         }
        //         start -> next =head -> next;
        //     }
        //     else
        //     {
        //         mp[prefixSum] =  head;
        //     }
        //     head = head -> next;
        // }
        // return dummy -> next;
    }
};
