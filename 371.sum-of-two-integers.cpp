// @leet start
class Solution {
public:
  int getSum(int a, int b) {

    int answer = 0;
    int asize = sizeof(a)* 8;
    int carry = 0;
    for (int i = 0; i < asize; i++) {
      int bita = (a >> i) & 1;
      int bitb = (b >> i) & 1;
      if (carry == 1 && bita == 1 && bitb == 1) {
        answer = (answer << 1) | 1;
        carry = 1;
      } else if (bita == 1 && bitb == 1) {
        answer = (answer << 1) | 0;
        carry = 1;
      } else if ((bita ^ bitb) == 1 && carry == 1) {
        answer = (answer << 1) | 0;
        carry = 1;
      } else if ((bita ^ bitb) == 1) {
        answer = (answer << 1) | 1;
      } else if (carry == 1) {
        answer = (answer << 1) | 1;
        carry = 0;
      } else {
        answer = (answer << 1) | 0;
      }
    }
    int reversed = 0;
    for (int i = 0; i < asize; i++) {
      int bit = (answer >> i) & 1;
      reversed = (reversed << 1) |
                 bit; 
    }
    return reversed;
  }
};
// @leet end
