// @leet start
class Solution {
  public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> answer;
        for (int i = 1; i <= n; i++) {
            std::string str = "";
            if (i % 3 == 0 && i % 5 == 0 && i >= 5) {
                str = "FizzBuzz";
            } else if (i % 3 == 0 && i >= 3) {
                str = "Fizz";
            } else if (i % 5 == 0 && i >= 5) {
                str = "Buzz";
            } else {
                str = std::to_string(i);
            }
            answer.push_back(str);
        }
        return answer;
    }
};
// @leet end
