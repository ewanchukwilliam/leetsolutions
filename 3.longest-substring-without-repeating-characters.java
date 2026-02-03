// @leet imports start
import java.util.*;
import java.math.*;
// @leet imports end

// @leet start
class Solution {
    public int lengthOfLongestSubstring(String s) {
		Integer last = 0;
		Integer ans = 0;
		Map<Character, Integer> map = new HashMap<>();
		for (int i = 0; i < s.length(); i++) {
			Character c = s.charAt(i);
			if (map.containsKey(c) && map.get(c) >= last) {
				last=map.get(c)+1;
			}
			map.put(c,i);
			ans=Math.max(ans, i-last+1);
		}
		return ans;
    }
}
// @leet end
