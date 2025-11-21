class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1;

        int carry = 1;

        while(i >= 0 && carry == 1){
            int sum = digits[i] + carry;

            if(sum < 10){
                digits[i] = sum;
                carry = 0;
            }else{
                digits[i] = 0;
                carry = 1;
            }
            i--;
        }
            if(carry == 1){
                digits.insert(digits.begin(),1);
            }
        return digits;
    }
};