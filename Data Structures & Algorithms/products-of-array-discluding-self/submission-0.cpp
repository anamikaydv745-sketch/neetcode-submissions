class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
int n=nums.size();

        vector<int>prefixpro(n);

        prefixpro[0]=1;
        for(int i=1;i<n;i++){
            prefixpro[i]=prefixpro[i-1]*nums[i-1];
        }

        vector<int>suffixpro(n);

        suffixpro[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffixpro[i]=suffixpro[i+1]*nums[i+1];
        }

        vector<int>ans(n);
for(int i=0;i<n;i++){
    ans[i]=prefixpro[i]*suffixpro[i];
}
return ans;
    }
};
