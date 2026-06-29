class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(); int n2=nums2.size();
        int i=0; int j=0; vector<int> ans;

        while((i<n1) && (j<n2))
        {
            if(nums1[i]>nums2[j]) j++;

            else if(nums2[j]>nums1[i]) i++;

            else // = case
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
