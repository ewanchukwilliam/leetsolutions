// @leet start
#include <bitset>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
  int subsetXORSum(vector<int> &nums) {
    int answer = 0;
    int xored = 0;
    int length =1;
    string index;
		for (int i = 0; i < nums.size(); i++) {
			length*=2;
		}
    vector<string> binaryind(length);
    for (int i = 0; i < length; i++) {
      index = bitset<20>(i).to_string();
      binaryind[i] = index;
    }
    for (int i = 0; i < binaryind.size(); i++) {
      for (int n = 0; n < binaryind[i].size(); n++) {
        if (binaryind[i][binaryind[i].size()-1-n] == '1') {
          xored ^= nums[n];
        }
      }
      answer += xored;
      xored = 0;
    }
    return answer;
  }
};

// @leet end
/* #include <vector> */
/* #include <cmath> */
/* using namespace std; */
/* class Solution { */
/* public: */
/*   int subsetXORSum(vector<int> &nums) { */
/*     int answer = 0; */
/*     int xored = 0; */
/* 		for (int i = 0; i < nums.size(); i++) { */
/* 			xored |= nums[i]; */
/* 		} */
/* 		answer = xored * pow(2,nums.size()-1); */
/*   	return answer; */
/*   } */
/* }; */
