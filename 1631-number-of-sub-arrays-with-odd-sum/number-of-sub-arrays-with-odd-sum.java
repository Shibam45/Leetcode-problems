
class Solution {
    public int numOfSubarrays(int[] arr) {

        int mod = 1000000007;

        int odd = 0;
        int even = 1;
        int sum = 0;
        int count = 0;

        for(int i = 0; i < arr.length; i++){
            sum += arr[i];

            if(sum % 2 == 1){
                count += even;
            }else{
                count += odd;
            }

            if(sum % 2 == 1){
                odd++;
            }else{
                even++;
            }

            count %= mod;
        }
        return count;
    }
}
