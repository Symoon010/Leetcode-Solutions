class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {

        map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==-1){
                ans^=nums[i];
            }
            mp[nums[i]]=-1;
        }
        return ans;
        
    }
};