class Solution {
public:

    int countNumber(vector<int>& sortedArray,int mid){
       auto lower = std::lower_bound(sortedArray.begin(), sortedArray.end(), mid);
        int count = sortedArray.end() - lower;
        return count;
    }
    int specialArray(vector<int>& nums) {
      
      sort(nums.begin(),nums.end());
      int ans=-1;

      for(int i=1;i<=nums.size();i++){
        if(countNumber(nums,i)==i){
            ans=i;
        }
      }
      return ans;    
    }
};