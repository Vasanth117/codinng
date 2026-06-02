class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int>temp;
        int n=arr.size();
        for(int i=0;i<n;i++){
        if (arr[i]!=0){
            temp.push_back(arr[i]);
        }
        int t=temp.size();
        for(int i=t;i<n;i++){
            arr[i]=temp[i];
        }
        for(int i=t;i<n;i++){
            arr[i]=0;
        }
        }
        
    }
};

 int j = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }