// @leet start
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
		map<char, int> dict; 
		dict['I'] = 1;
		dict['V'] = 5;
		dict['X'] = 10;
		dict['L'] = 50;
		dict['C'] = 100;
		dict['D'] = 500;
		dict['M'] = 1000;
			int ans=0;
			int len = s.length();
			for (int i = len - 1; i >= 0; i--) {
			if (i==len-1) {
				ans = ans + dict[s[i]];
			}else if (dict[s[i]] >= dict[s[i+1]]) {
				ans = ans + dict[s[i]];	
			}else {
				ans = ans - dict[s[i]];	
			}

			}
		return ans;
    }
};
// @leet end
