class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqr(nums.size());
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            sqr[i] = nums[i] * nums[i];
        }

        
        for (int i = 0; i < sqr.size(); i++) {
            for (int j = i + 1; j < sqr.size(); j++) {
                if (sqr[i] > sqr[j]) {
                    temp = sqr[i];
                    sqr[i] = sqr[j];
                    sqr[j] = temp;
                }
            }
        }

        return sqr;
    }
};