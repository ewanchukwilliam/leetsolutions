// @leet start
#include <string>
class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for (int i = 1; i <= n; i++) {
            string str = "";
            if (i % 3 == 0 && i % 5 == 0 && i >= 5) {
                str = "FizzBuzz";
			} else if (i % 3 == 0 && i >= 3) {
				str = "Fizz";
			} else if (i % 5 == 0 && i >= 5) {
				str = "Buzz";
            } else {
                str = to_string(i);
            }
            answer.push_back(str);
        }
        return answer;
    }
};
// @leet end
