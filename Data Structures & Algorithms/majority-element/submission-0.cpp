class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>ans ;
        int n = nums.size()/2 ;
        for(int i = 0 ; i < nums.size() ; i++){
            ans[nums[i]]++ ;
        }
        for(auto x : ans){
            if( x.second > n ){
                return x.first ;
            }
        }
        return -1 ;
    }
};