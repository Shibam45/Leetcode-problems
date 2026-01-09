class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int left = 0;
        int maxlength = 0;
        for(int right=0; right<s.length(); right++){

            if(m.find(s[right]) != m.end()){
                left = max(left, m[s[right]] + 1);
            }
            
            m[s[right]] = right;
            maxlength = max(maxlength,right-left+1);
        }
        return maxlength;
    }
};