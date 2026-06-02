#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++){
            int l=0;
            int r=n-1;
            while(l<=r){
                int t=image[i][l];
                image[i][l]=image[i][r]^1;
                image[i][r]=t^1;
                l++;
                r--;
            }
        }
        return image;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> image = {{1,1,0},{1,0,1},{0,0,0}};
    auto result = sol.flipAndInvertImage(image);
    for(auto& row : result) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}