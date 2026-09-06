class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st1;
        vector<int> ans;

        for(int num : nums1)
            st1.insert(num);

        for(int num : nums2) {
            if(st1.find(num) != st1.end()) {
                ans.push_back(num);
                st1.erase(num);  
            }
        }

        return ans;
    }
};