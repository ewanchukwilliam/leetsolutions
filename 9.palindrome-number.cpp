// @leet start
#import <string>
using namespace std;
class Solution {
public:
  bool isPalindrome(int x) {
		bool ans=true;
    string string1 = to_string(x);
		int left=0;
		int right=string1.size()-1;
		while (left<right) {
				if (string1[left]!=string1[right]) {
					ans=false;
					break;
				}	
			left++;
			right--;
		}
    return ans;
  }
};
// @leet end
