class Solution {
    public int[] productExceptSelf(int[] nums) {
        int size = nums.length;

        int[] answer = new int[size];

        answer[0] = 1;

        for(int i = 1; i < size; i++){
            answer[i] = answer[i-1] * nums[i-1];
        }

        int rightProd = 1;
        for(int r = size - 1; r >= 0; r--){
            answer[r] = answer[r] * rightProd;
            rightProd *= nums[r];
        }
        return answer;
    }
}