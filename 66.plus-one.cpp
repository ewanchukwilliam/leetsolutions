// @leet start
#include <vector>
class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; i--) {
      int current = carry + digits[i];
      digits[i] = current % 10;

      if (current >= 10) {
        carry = 1;
      } else {
        carry = 0;
      }
    }
    if (carry) {
      digits.insert(digits.begin(), carry);
    }
    return digits;
  }
};
// @leet end
