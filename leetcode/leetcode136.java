class Solution {
    public int singleNumber(int[] nums) {
        int s=0;
        for(int i=0;i<nums.length;i++){
            s=s^nums[i];
        }
        return s;
    }
    public static void main(String[] args) {
        Solution sol = new Solution();
        System.out.println(sol.singleNumber(new int[]{2,2,1}));
        System.out.println(sol.singleNumber(new int[]{4,1,2,1,2}));
    }
}