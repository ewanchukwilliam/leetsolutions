// @leet start
#include <string>
#include <unordered_map>
#include <cstdlib>
using namespace std;
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
		if (s.size()==0) {
			return 0;
		}
    unordered_map<char, int> map;
    int maxLength = 0;
    int start = 0;
		for (int i = 0; i < s.size(); i++) {
			if (map.find(s[i]) != map.end()) {
				start = max(start,map[s[i]]+1);
			}
			map[s[i]]=i;
			maxLength = max(maxLength, i-start+1);
		}
    return maxLength;
  }
};
// @leet end
