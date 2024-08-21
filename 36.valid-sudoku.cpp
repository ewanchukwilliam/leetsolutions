// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    int rows[9] = {0}, cols[9] = {0}, boxes[9] = {0};
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        char num = board[i][j];
        if (num != '.') {
          int bit = 1 << (num - '1');
          if ((rows[i] & bit) || (cols[j] & bit) ||
              (boxes[(i / 3) * 3 + j / 3] & bit)) {
            return false;
          }
          rows[i] |= bit;
          cols[j] |= bit;
          boxes[(i / 3) * 3 + j / 3] |= bit;
        }
      }
    }
    return true;
  }
};
// @leet end
