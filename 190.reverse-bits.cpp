// @leet start
#include <cstdint>
class Solution {
public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t answer = 0;
    for (int i = 0; i < 32; i++) {
      int bit = (n >> i) & 1;
      answer = (answer << 1) | bit;
    }
    return answer;
  }
};
// @leet end
