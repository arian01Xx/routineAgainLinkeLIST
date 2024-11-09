#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head){
        vector<int> listVals;
        while(head){
            listVals.push_back(head->val);
            head=head->next;
        }
        int left=0; int right=listVals.size()-1;
        while(left<right && listVals[left]==listVals[right]){
            left++;
            right--;
        }
        return left >= right;
    }
};

int main(){
    return 0;
}