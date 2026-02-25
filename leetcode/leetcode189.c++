#include <vector>
#include <iostream>
using namespace std;

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

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5,6,7};
    sol.rotate(nums, 3);
    for(int n : nums) cout << n << " ";
    return 0;
}