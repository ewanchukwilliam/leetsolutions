
#include <algorithm>
#include <cstdlib>
#include <vector>
/* struct ListNode { */
/*   int val; */
/*   ListNode *next; */
/*   ListNode() : val(0), next(nullptr) {} */
/*   ListNode(int x) : val(x), next(nullptr) {} */
/*   ListNode(int x, ListNode *next) : val(x), next(next) {} */
/* }; */

class Solution {
public:
  bool isHappy(int n) {
		if (n==1) {
			return true;
		}
    ListNode *slow = new ListNode(n);
    ListNode *fast = square(slow);
    while (slow->val != fast->val) {
      slow = square(slow);
      fast = square(square(fast));
      if (fast->val == 1 || slow->val == 1) {
        return true;
      }
    }
    return false;
  }
  ListNode *square(ListNode *root) {
    std::vector<int> array = split(root->val);
    int sum = 0;
    for (int val : array) {
      sum += val * val;
    }
    ListNode *node = new ListNode(sum);
    return node;
  }

  std::vector<int> split(int num) {
    std::vector<int> digits;
    bool isNegative = num < 0;
    num = abs(num);
    do {
      int digit = num % 10;
      digits.push_back(digit);
      num /= 10;
    } while (num > 0);
    std::reverse(digits.begin(), digits.end());
    if (isNegative) {
      digits[0] = -digits[0];
    }
    return digits;
  }
};
