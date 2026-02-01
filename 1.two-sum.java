// @leet start
class Solution {
    public int[] twoSum(int[] nums, int target) {
		Map<Integer, Integer> map = new HashMap<>();
		for (int i =0; i< nums.length; i++) {
			map.put(nums[i],i);
		}
		for (int i = 0; i < nums.length; i++) {
			int seek = target- nums[i];
			if (map.containsKey(seek) && map.get(seek)!=i ){
				return new int[]{map.get(seek), i};
				
			}
	
		}
		return new int[0];

    }
}
// @leet end
