class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int best = nums[0];
        int wrost = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int a = nums[i] * best;
            int b = nums[i] * wrost;
            int c = nums[i];
            best = max(a,max(b, c));
            wrost = min(a,min(b, c));
            ans = max(ans, best);
        }
        return ans;
    }
    };