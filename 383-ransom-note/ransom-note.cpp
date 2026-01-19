class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();
        if(n>m){
            return false;
        }
        vector<int>freq(26,0);
        for(char c : magazine){
            freq[c-'a']++;
        }
        for(char c : ransomNote){
            freq[c-'a']--;
            if(freq[c-'a']<0){
                return false;
            }
        }
        return true;
    }
};