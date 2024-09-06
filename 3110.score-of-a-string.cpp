// @leet start
#include <string>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
		int answer=0;
		for (int i = 0; i < s.size()-1; i++) {
			answer+=abs(s[i]-s[i+1]);
		}
		return answer;
    }
};
// @leet end
