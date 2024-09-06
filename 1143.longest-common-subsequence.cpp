// @leet start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  int longestCommonSubsequence(string text1, string text2) {
    int answer = 0;
    vector<vector<int>> matrix;
    for (int i = 0; i < text1.size(); i++) {
      matrix.push_back({});
      for (int n = 0; n < text2.size(); n++) {
        matrix[i].push_back(0);
      }
    }
    for (int i = 0; i < text1.size(); i++) {
      for (int n = 0; n < text2.size(); n++) {
        if (text1[i] == text2[n]) {
          for (int j = i; j < text1.size(); j++) {
            for (int k = n; k < text2.size(); k++) {
              matrix[j][k]++;
            }
          }
        }
      }
    }
    return matrix[text1.size() - 1][text2.size() - 1];
  }
};
// @leet end
