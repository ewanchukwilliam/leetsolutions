
#include <unordered_map>
class Solution {
  public:
    int longestPalindrome(string s){
		std::unordered_map<char, int> map;
		for (char c : s) {
			map[c]++;
		}
		int ans = 0;
		for (auto &p : map) {
			ans += p.second / 2 * 2;
			if (ans % 2 == 0 && p.second % 2 == 1) {
				ans++;
			}
		}
		return ans;

	} 
};

