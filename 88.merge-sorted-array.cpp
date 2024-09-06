// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    int i = 0;
    int k = 0;
    if (m == 0) {
      nums1 = nums2;
      return;
    }
    if (n == 0) {
      return;
    }
    vector<int> answer;
    for (int i = nums1.size() - 1; i >= nums1.size() - m-1; i--) {
      nums1.erase(nums1.begin() + i);
    }
    m = nums1.size();
    while (i < m && k < n) {
      if (nums1[i] < nums2[k]) {
        answer.push_back(nums1[i]);
        i++;
      } else if (nums1[i] > nums2[k]) {
        answer.push_back(nums2[k]);
        k++;
      } else if (nums1[i] == nums2[k]) {
        answer.push_back(nums1[i]);
        i++;
        answer.push_back(nums2[k]);
        k++;
      }
    }
    if (i < m) {
      for (int j = i; j < m; j++) {
        answer.push_back(nums1[j]);
      }
    }
    if (k < n) {
      for (int j = k; j < n; j++) {
        answer.push_back(nums2[j]);
      }
    }
    nums1 = answer;
  }
};
// @leet end
