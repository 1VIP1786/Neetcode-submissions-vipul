class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int count = 1 ;
        int longest = 1 ; 
        if(nums.empty()){
            return 0 ;
        }
        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i] == nums[i+1]){
                continue ;
            }
            if(nums[i+1] - nums[i] == 1 ){
                count++ ;
            }
            else{
                count = 1 ; 
            }
            longest = max(longest,count);

        }
    return longest ;

    }
};
