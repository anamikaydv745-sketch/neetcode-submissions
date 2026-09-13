class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
int n=nums.size();

        vector<vector<int>>ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){

            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
unordered_set<int>st;
            for(int j=i+1;j<n;j++){
// if(j>i+1&&nums[j]==nums[j-1]){
//     continue;
// }

int needed=-(nums[i]+nums[j]);
if(st.count(needed)){
    ans.push_back({nums[i],needed,nums[j]});
     while(j + 1 < n && nums[j] == nums[j + 1])
                        j++;
}
st.insert(nums[j]);

            }
        }

        return ans;
        
    }
};
