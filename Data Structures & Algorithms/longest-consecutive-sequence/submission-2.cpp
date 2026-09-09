class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int>st(nums.begin(),nums.end());

        

int maxlen=0;
        for(int i=0;i<nums.size();i++){
if(st.find(nums[i]-1)==st.end()){
    int len=1;
int current=nums[i];
while(st.find(current+1)!=st.end()){
    current++;
    len++;
}
maxlen=max(len,maxlen);
}


        }

        return maxlen;
        
    }
};
