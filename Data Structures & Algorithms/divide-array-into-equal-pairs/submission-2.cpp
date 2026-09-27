class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int ans=nums[0];
        for(int i=1; i<nums.size(); i++) {
            ans=ans ^ nums[i];
            if(i%2==1){
                if(ans!=0)
                {
                    return false;
                } 
            }
        }
        return ans==0;
    }
};