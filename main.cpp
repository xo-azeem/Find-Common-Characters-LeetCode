// Code

class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<int> minFreq(26, INT_MAX);

        for (const string& word : words) 
        {
            vector<int> charFreq(26, 0);

            for (char c : word) 
                charFreq[c - 'a']++;
            for (int j = 0; j < 26; ++j) 
                minFreq[j] = min(minFreq[j], charFreq[j]);
        }

        vector<string> result;

        for (int i = 0; i < 26; ++i) 
            for (int j = 0; j < minFreq[i]; ++j) 
                result.push_back(string(1, 'a' + i));

        return result;
    }
};
