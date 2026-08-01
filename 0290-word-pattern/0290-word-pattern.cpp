class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;
        while(ss >> word){
            words.push_back(word);
        }

        if(pattern.length() != words.size()){
            return false;
        }

        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        for(int i = 0; i < pattern.length(); i++){
            char ch = pattern[i];
            string word = words[i];

            if(mp1.count(ch)){
                if(mp1[ch] != word){
                    return false;
                }
            }

            if(mp2.count(word)){
                if(mp2[word] != ch){
                    return false;
                }
            }

            mp1[ch] = word;
            mp2[word] = ch;
        }
        return true;

        
    }
};