// @leet start
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  int maxScoreWords(vector<string> &words, vector<char> &letters,
                    vector<int> &score) {
    vector<int> subset;
    int length = 1 << words.size();
    vector<vector<int>> allsets;
    for (int mask = 0; mask < length; mask++) {
      for (int i = 0; i < words.size(); i++) {
        if (mask & (1 << i)) {
          subset.push_back(i);
        }
      }
      allsets.push_back(subset);
      subset.clear();
    }

    int answer = 0;
    unordered_map<char, int> alphabet;
    for (int i = 0; i < 26; i++) {
      char letter = 'a' + i;
      int scores = score[i];
      alphabet[letter] = score[i];
    }
    unordered_map<char, int> letterhash;
    for (int i = 0; i < letters.size(); i++) {
      if (letterhash.find(letters[i]) == letterhash.end()) {
        letterhash[letters[i]] = 1;
      } else {
        letterhash[letters[i]]++;
      }
    }
    unordered_map<char, int> letterbackup = letterhash;

    unordered_map<char, int> backup = alphabet;
    unordered_map<string, int> wordhash;
    for (const string &word : words) {
      alphabet = backup;
      for (char ch : word) {
        int scores = alphabet[ch];
        answer += scores;
      }
      wordhash[word] = answer;
      answer = 0;
    }
    int final = 0;
    for (int i = 0; i < allsets.size(); i++) {
      answer = 0;
      letterhash = letterbackup;
      bool enoughletters = true;
      for (int n = 0; n < allsets[i].size(); n++) {
        unordered_map<char, int> templetters = letterhash;
        for (int j = 0; j < words[allsets[i][n]].size(); j++) {
          if (templetters[words[allsets[i][n]][j]] > 0) {
            templetters[words[allsets[i][n]][j]]--;
          } else {
            enoughletters = false;
            break;
          }
        }
        if (enoughletters) {
          answer += wordhash[words[allsets[i][n]]];
          letterhash = templetters;
        } else {
          break;
        }
      }
      if (enoughletters && answer > final) {
        final = answer;
      }
    }
    return final;
  }
};
// @leet end
