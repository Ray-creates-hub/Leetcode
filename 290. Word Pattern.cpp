class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        string word;

        stringstream ss(s);

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, string> patternToWord;
        unordered_map<string, char> wordToPattern;

        for (int i = 0; i < pattern.size(); i++) {

            char p = pattern[i];
            string w = words[i];

            if (patternToWord.count(p)) {
                if (patternToWord[p] != w) {
                    return false;
                }
            }

            if (wordToPattern.count(w)) {
                if (wordToPattern[w] != p) {
                    return false;
                }
            }

            patternToWord[p] = w;
            wordToPattern[w] = p;
        }
        return true;
    }
};
