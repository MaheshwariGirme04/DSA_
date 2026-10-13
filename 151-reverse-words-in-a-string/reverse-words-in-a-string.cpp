class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        // Extract and store each word
        while (ss >> word) {
            words.push_back(word);
        }

        string result = "";

        // Traverse words in reverse order
        for (int i = words.size() - 1; i >= 0; i--) {
            if (!result.empty()) {
                result += ' ';
            }

            result += words[i];
        }

        return result;
    }
};