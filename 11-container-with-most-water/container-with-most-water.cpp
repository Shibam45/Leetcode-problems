class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size()-1, maxwater = 0;
        while(lp < rp){
            int wt = rp - lp;
            int ht = min(height[rp] , height[lp]);
            int area = ht * wt;
            maxwater = max(maxwater , area);
            height[lp] < height[rp] ? lp ++ : rp --;
        }
        return maxwater;
        
    }
};