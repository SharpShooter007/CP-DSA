#include <bits/stdc++.h>
using namespace std;

// void init()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

void subsetSum(int sum, int index, vector<int> output, vector<int> &nums, vector<vector<int>> &res)
{
    if (sum == 0)
    {
        res.push_back(output);
        return;
    }

    if (sum < 0 || index == nums.size())
    {
        return;
    }

    output.push_back(nums[index]);
    subsetSum(sum - nums[index], index + 1, output, nums, res);
    output.pop_back();
    subsetSum(sum, index + 1, output, nums, res);
}
int main()
{
    // init();
    vector<int> nums = {1, 2, 3, 4, 5};
    int sum = 6;
    vector<int> output;
    vector<vector<int>> res;
    subsetSum(sum, 0, output, nums, res);

    for (auto v : res)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "End" << endl;
}