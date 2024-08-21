// @leet start
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
  string addBinary(string a, string b) {
    string result = ""; // This will store the result
    int carry = 0; // This will store the carry
    // Make sure a is the longer string, if not, swap them
    if (a.length() < b.length()) {
        swap(a, b);
    }
    // Reverse both strings to simplify addition from right to left
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    // Add each bit
    for (size_t i = 0; i < b.length(); ++i) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result.push_back((sum % 2) + '0'); // Add the result of (sum mod 2)
        carry = sum / 2; // Update carry
    }
    // Continue the addition if a is longer than b
    for (size_t i = b.length(); i < a.length(); ++i) {
        int sum = (a[i] - '0') + carry;
        result.push_back((sum % 2) + '0');
        carry = sum / 2;
    }
    // If there's still a carry at the end, add it to the result
    if (carry) {
        result.push_back(carry + '0');
    }
    // The result is currently reversed, so reverse it back
    reverse(result.begin(), result.end());
    return result;
  }
};
// @leet end
