// @leet start
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string result = "";
    bool matches = true;
    int n = 0;
    char prev,next;
    while (matches) {
		if (n<strs[0].size()) {
    	prev = strs[0][n];
		}else {
			break;
		}
      for (int i = 0; i < strs.size(); i++) { 
        next = strs[i][n];
				if (prev!=next) {
					matches=false;
					break;
				}
				else if (i==strs.size()-1 && matches==true) {
					result.push_back(prev);
				}
      }
			n++;
    }

    return result;
  }
};
// @leet end
