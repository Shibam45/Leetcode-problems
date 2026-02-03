class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>m;

        for(int x:nums1){
            m[x]++;
        }

        for(int x:nums2){
            if(m[x]>0){
                result.push_back(x);
                m[x]--;
            }
        }
        return result;
    }
};