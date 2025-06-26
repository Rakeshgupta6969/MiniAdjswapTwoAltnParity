class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int od=0,ev=0;
        for(auto& i:nums){
            if(i%2==0) ev++;
            else od++;
        }
        if(abs(od-ev)>1) return -1;
        int count1=0,count2=0;
        int st=0,st1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                count1+=abs(st-i);
                st+=2;
            }else{
                count2+=abs(st1-i);
                st1+=2;
            }
        }
        if(od>ev) return count2;
        else if(ev>od) return count1;
        else return min(count1,count2);
    }
};