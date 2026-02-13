class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freqs1(26, 0), freqs2(26, 0);

        if (s2.size() < s1.size()) {
            return false;
        }

        for (char c : s1) {
            freqs1[c - 'a']++;
        }
        int window = s1.size();
        for (int i = 0; i < s2.size(); i++) {
            freqs2[s2[i] - 'a']++;

            if (i >= window) {
                freqs2[s2[i - window] - 'a']--;
            }
            if (freqs1 == freqs2) {
                return true;
            }
        }
        return false;
    }
};