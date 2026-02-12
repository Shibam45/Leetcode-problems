class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.size() < p.size())
            return result;

        vector<int> freqp(26, 0), freqs(26, 0);

        for (char c : p) {
            freqp[c - 'a']++;
        }

        int window = p.size();
        for (int i = 0; i < s.size(); i++) {
            freqs[s[i] - 'a']++;
            if (i >= window)
                freqs[s[i - window] - 'a']--;
            if (freqs == freqp)
                result.push_back(i - window + 1);
        }
        return result;
    }
};