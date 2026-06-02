#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int m=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
                 m=max(m,c);

            }
            else{
                c=0;
            }

        }
        return m;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,0,1,1,1};
    cout << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}