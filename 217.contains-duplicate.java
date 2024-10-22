// @leet start


class Solution {
	public boolean containsDuplicate(int[] nums) {
		HashMap<Integer, Boolean> hash = new HashMap<>();
		for (int num : nums) {
			if (hash.containsKey(num)) {
				return true;
			} else {
				hash.put(num, true);
			}
		}
		return false;
	}
}
// @leet end
