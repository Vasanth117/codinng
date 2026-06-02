#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=1;i<nums.size();i++){
            int space=nums[i]-nums[i-1];
            res=max(space,res);
             
            }
        return res;    
        }
        
    
};

int main() {
    Solution sol;
    vector<int> nums = {3,6,9,1};
    cout << sol.maximumGap(nums) << endl;
    return 0;
}