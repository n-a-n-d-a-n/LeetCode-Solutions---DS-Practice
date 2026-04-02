class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int n=nums.size();
        int count=0;
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[count]){
                count++;
                nums[count]=nums[j];
            }
        }
        return count+1;
    }
};
