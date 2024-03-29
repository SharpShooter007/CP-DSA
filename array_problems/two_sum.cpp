class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {

    // brute force approach O(n2) -> 273 ms
    vector<int> res;

    // for(int i=0;i< nums.size()-1; i++) {
    //     for (int j= i+1 ; j< nums.size(); j++) {
    //         if (nums[i]+ nums[j] == target)
    //         {
    //             res.push_back(i);
    //             res.push_back(j);
    //         }
    //     }
    // }

    // return res;

    // O(nlogn) -> 11 ms
    // vector<pair<int,int>> v;

    // for (int i=0;i<nums.size(); i++) {
    //     v.push_back({nums[i],i});
    // }

    // sort(v.begin(), v.end());

    // int i=0, j= v.size()-1;

    // while(i< j) {
    //     if (v[i].first + v[j].first > target) {
    //         j--;
    //     } else if(v[i].first + v[j].first < target) {
    //         i++;
    //     } else {
    //         res.push_back(v[i].second);
    //         res.push_back(v[j].second);
    //         break;
    //     }
    // }

    // return res;

    // O(n)  -> 8 ms / S(n) = O(n)

    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
      int val = target - nums[i];
      auto itr = mp.find(val);

      if (itr != mp.end())
      {
        res.push_back(i);
        res.push_back(itr->second);
        return res;
      }
      else
      {
        mp[nums[i]] = i;
      }
    }

    return res;
  }
};