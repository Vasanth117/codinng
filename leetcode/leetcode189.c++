class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       k=k%10;
       int forr=n-k;
       vector<int>num(n);
       int j=0;
       for(int i=forr;i<n;i++){
        num[j++]=nums[i];
       }
       for(int i=0;i<forr;i++){
        num[j++]=nums[i];
       }
       nums=num;
    }
};