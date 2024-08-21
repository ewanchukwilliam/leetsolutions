// @leet start
/**
 * @param {number} n
 * @param {number} time
 * @return {number}
 */
var passThePillow = function(n, time) {
	var forwards = true; 	
	var answer=1;
	for (let i = 0; i < time; i++) {
		if (forwards) {
			answer++;	
		}else {
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
    
};
// @leet end
