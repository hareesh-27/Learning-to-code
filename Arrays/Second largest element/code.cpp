class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest=INT_MIN; int s_largest=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > largest)
            {
                s_largest=largest;
                largest=nums[i];
            }
            else if(nums[i] > s_largest && nums[i] != largest)
            {
                s_largest=nums[i];
            }
        }

        if(s_largest == INT_MIN) return -1;
        else return s_largest;    
    }
};
