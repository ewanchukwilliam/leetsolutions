// @leet start
class Solution {
public:
  int passThePillow(int n, int time) {
    int answer=1;
		bool forwards=true;
		for (int i = 0; i < time; i++) {
			if (forwards) {
				answer++;
			}
			else {
				answer--;
			}
			if (answer==n) {
				forwards=false;
			}
			if (answer==1) {
				forwards=true;
			}
		}
    return answer;
  }
};
// @leet end
