class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int sum=0;
        for(int val: nums){
            sum=sum+val;
            maxsum= max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
            
            

            } return maxsum;
         
    }
};