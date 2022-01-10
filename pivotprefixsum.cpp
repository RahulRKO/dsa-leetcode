class Solution {
public:
  //leftsum==rightsum then return that index optimised:
    int pivotIndex(vector<int>& nums) {
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        long long leftsum=0;
        long long rightsum=sum;
         for(int i=0;i<nums.size();i++){
            rightsum-=nums[i];
             
             if(leftsum==rightsum){
                 return i;
             }
             leftsum+=nums[i];
        }
        return -1;
    }
};
