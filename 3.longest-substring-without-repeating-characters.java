// @leet imports start
import java.util.*;
import java.math.*;
// @leet imports end

// @leet start
class Solution {
    public int lengthOfLongestSubstring(String s) {
		Map<Character,Integer> map = new HashMap<>();
		Integer soln= 0;
		Integer last=0;
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (map.containsKey(c) && map.get(c)>=last) {
				last=map.get(c)+1;
			}
			map.put(c,i);
			soln=Math.max(soln, i-last+1);
				
		}
		return soln;
        
    }
}
// @leet end
