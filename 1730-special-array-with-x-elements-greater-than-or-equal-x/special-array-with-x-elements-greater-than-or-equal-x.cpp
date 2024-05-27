class Solution {
public:

    int countNumber(vector<int>& sortedArray,int mid){
       auto lower = std::lower_bound(sortedArray.begin(), sortedArray.end(), mid);
        int count = sortedArray.end() - lower;
        return count;
    }
    int specialArray(vector<int>& nums) {
      
      sort(nums.begin(),nums.end());

       int start = 0;
            int end = nums.size();
            while(start<=end){

                    int mid = start+ (end-start)/2;
                    if(countNumber(nums, mid) == mid){
                        return mid;
                    }
                    else if(countNumber(nums, mid)>mid){
                         start = mid+1;
                    }
                    else{
                        end = mid-1;
                    }
            }  
        return -1;
     
    }
};