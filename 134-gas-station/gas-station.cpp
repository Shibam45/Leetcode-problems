class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int totgas = 0, totcos = 0;

        int start = 0;
        int currgas = 0;

        for(int i=0; i<gas.size(); i++){
            totgas += gas[i];
            totcos += cost[i];
            currgas += (gas[i] - cost[i]);

            if(currgas < 0){
                start = i+1;
                currgas = 0;
            }

        }
        return totgas < totcos ? -1 : start;
    }
};