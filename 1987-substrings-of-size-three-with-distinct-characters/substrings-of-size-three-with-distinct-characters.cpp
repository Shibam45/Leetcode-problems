class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int goodstring = 0;
        for(int i=0; i<n-2; i++){
            char a = s[i];
            char b = s[i+1];
            char c = s[i+2];
            if(a!=b && a!=c && b!=c){
                goodstring++; 
            }
        }
        return goodstring;
    }
};