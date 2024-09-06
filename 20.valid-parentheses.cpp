// @leet start
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
  bool isValid(string s) {
		stack<char>stack;
		for(char ch:s){
			switch (ch) {
				case '(':
				case '[':
				case '{':
				stack.push(ch);
				break;
				case ')':
				case ']':
				case '}':
				if(stack.empty())return false;
					if((')' == ch && stack.top() != '(' ||
							']' == ch && stack.top() != '[' ||
							'}' == ch && stack.top() != '{')){
						return false;
				}else {
					stack.pop();
					break;
				}
			}
		}
		return stack.empty();
  }
};
