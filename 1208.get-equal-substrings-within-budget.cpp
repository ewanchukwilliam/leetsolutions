// @leet start
#include <string>
using namespace std;
class Solution {
public:
  int equalSubstring(string s, string t, int maxCost) {
        int maxim = 0; 
        int cost = 0;
        int start = 0; 
        int i; 
        for (i = 0; i < s.size(); ++i) {
            cost += abs(s[i] - t[i]);
            while (cost > maxCost) {
                cost -= abs(s[start] - t[start]);
                ++start;
            }
            maxim = max(maxim, i - start + 1);
        }
        return maxim;
			}
};
// @leet end
