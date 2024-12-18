// @leet start
class Solution {
public:
  int buyChoco(vector<int> &prices, int money) {
    int choc1 = INT_MAX;
    int choc2 = choc1;
    for (int price : prices) {
      if (price < choc1) {
        choc2 = choc1;
        choc1 = price;
      } else if (price < choc2) {
        choc2 = price;
      }
    }
    int answer = money - (choc1 + choc2);

    return answer >= 0 ? answer : money;
  }
};
// @leet end
