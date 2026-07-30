class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char, int> freq;

        for(char x: s){
            freq[x]++;
        }
        for(char x: t){
            freq[x]--;
        }

        for(auto it: freq){
            if(it.second != 0){
                return false;
            }
        }
        return true;
        
    }
};