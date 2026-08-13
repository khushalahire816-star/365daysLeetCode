class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int x: nums){
            freq[x]++;
        }

        int ans = 0;

        for(auto it : freq){
            int x = it.first;

            if(freq.count(x + 1)){
                int length = freq[x] + freq[x + 1];
                ans = max(ans, length);
            }
        }
        return ans;
        
    }
};