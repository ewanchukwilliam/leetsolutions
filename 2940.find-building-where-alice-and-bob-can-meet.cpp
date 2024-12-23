// @leet start
class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
		int n = heights.size();
		vector<int> res;
		vector<int> leftmost(n, INT_MAX);
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				leftmost[i] = heights[i];
			} else {
				leftmost[i] = min(leftmost[i - 1], heights[i]);
			}
		}
		for (auto& q : queries) {
			int l = q[0], r = q[1], x = q[2];
			if (leftmost[r] <= x) {
				res.push_back(r - l + 1);
			} else if (leftmost[l] > x) {
				res.push_back(0);
			} else {
				int left = l, right = r;
				while (left < right) {
					int mid = left + (right - left) / 2;
					if (leftmost[mid] <= x) {
						right = mid;
					} else {
						left = mid + 1;
					}
				}
				res.push_back(left - l);
			}
		}
		return res;
        
    }
};
// @leet end
