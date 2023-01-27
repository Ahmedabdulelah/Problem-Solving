class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         map<int,bool>container;
        for(int i=0; i<nums.size();i++){
            if(container[nums[i]])
            {
                return true;
            }
            container[nums[i]] = true;
        }
        
    return false;
        
    }
};