class Solution {
public:
    vector<vector<int>> ans;
    vector<int> arr;

    void allSubset(int index, vector<int>& nums) {
        if (index == nums.size()) {
            ans.push_back(arr);
            return;
        }

        arr.push_back(nums[index]);
        allSubset(index + 1, nums);

        arr.pop_back();
        allSubset(index + 1, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        arr.clear();
        allSubset(0, nums);
        return ans;
    }
};