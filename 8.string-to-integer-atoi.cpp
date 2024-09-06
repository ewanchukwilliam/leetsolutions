// @leet start
#include <climits>
#include <string>
using namespace std;
class Solution {
public:
  int myAtoi(string s) {
        int result=0;     // helper variables
        int i=0;
        int sign=1;
    
        while(i<s.size()&&s[i]==' ')i++;  //ignore leading white space
        
        if(s[i]=='-'||s[i]=='+')          //check if number positve or negative
        {
            sign=s[i]=='-'?-1:1;
            i++;
        }
        // now iterate across digits if any
    // should only be in range 0-9
        while(i<s.length()&&(s[i]>='0'&&s[i]<='9'))  //traverse string till nondigit not found or string ends
        {
            int digit=(s[i]-'0')*sign;
            if(sign==1 && (result>INT_MAX/10 || (result==INT_MAX/10 && digit>INT_MAX%10))) return INT_MAX; //check for overflow
            if(sign==-1 &&(result<INT_MIN/10 || (result==INT_MIN/10 && digit<INT_MIN%10))) return INT_MIN; //check for underflow
            
            result=result*10+digit; // update result
            i++;
        }
    return result;
  }
};
// @leet end
