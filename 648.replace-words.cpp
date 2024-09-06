// @leet start
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
    string answer;   
		unordered_map<string, int>maps;
    string word;
    vector<string> words;
		for (int i = 0; i < sentence.size(); i++) {
			while (sentence[i]!=' ' && i < sentence.size()) {
				word.push_back(sentence[i]);
				i++;
			}
			words.push_back(word);
			word.clear();
		}
		for (int i = 0; i < dictionary.size(); i++) {
			if (maps.find(dictionary[i])==maps.end()) {
				maps[dictionary[i]]=1;
			}
		}
		for (int i = 0; i < words.size(); i++) {
			word.clear();
			for (int n = 0; n < words[i].size(); n++) {
				word.push_back(words[i][n]);
				if (maps.find(word)!=maps.end()) {
					words[i]=word;
					break;
				}
			}
		}
		for (int i = 0; i < words.size(); i++) {
			answer+=words[i];
			if (i!=words.size()-1) {
				answer+=" ";	
			}
		}
		return answer;
    }
};
// @leet end
