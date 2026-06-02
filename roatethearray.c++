class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n =arr.size();
        vector<int> temp;
        d=d%n;
        for(int i=0;i<d;i++){
            temp.push_back(arr[i]);
        }
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        for(int i=0;i<d;i++){
            arr[n-d+i]=temp[i];
        }
    }
};