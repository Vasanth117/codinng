class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        /*// code here
        if(arr.size()<3){
            return -1;
        }
        int first=INT_MIN;
        int second=INT_MIN;
        int third=INT_MIN;
        for(int x:arr){
            if(x>first){
                 
                third=second;
                second=first;
                first=x;
               
            }
            else if(x>second&&x!=first){
                second=x;
                third=second;
            }
            else if(x>third&&x!=second&&x!=first){
                third=x;
            }
            
        }
        if(third==INT_MIN){
            return -1;
        }
        return third;
    }
};
sort(arr.begin(),arr.end());
int n=arr.size();
int first=1;
int large=arr[n-1];
for(int i=n-2;i>=0;i--){
    if(arr[i]!=large){
        first++;
        large=arr[i];
    }
    if(first==3){
        return arr[i];
    }
}
return -1;}};*/
 int n = arr.size();

        if(n < 3)
            return -1;

        sort(arr.begin(), arr.end());

        return arr[n - 3];}};