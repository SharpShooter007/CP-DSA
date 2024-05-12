class Solution
{
public:
    void func(int index, vector<int> comb, vector<int> &nums, vector<vector<int>> &res)
    {
        if (index == nums.size())
        {
            res.push_back(comb);
            return;
        }
        func(index + 1, comb, nums, res);
        comb.push_back(nums[index]);
        func(index + 1, comb, nums, res);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> comb;
        func(0, comb, nums, res);
        return res;
    }
};