class Solution
{
public:
    void swap(vector<int> &nums, int i, int j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void func(int index, vector<int> output, vector<int> &nums, vector<vector<int>> &res)
    {
        if (index == nums.size() - 1)
        {
            res.push_back(output);
            return;
        }

        func(index + 1, output, nums, res);
        for (int i = index + 1; i < nums.size(); i++)
        {
            swap(output, index, i);
            func(index + 1, output, nums, res);
            swap(output, i, index);
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        func(0, nums, nums, res);
        return res;
    }
};