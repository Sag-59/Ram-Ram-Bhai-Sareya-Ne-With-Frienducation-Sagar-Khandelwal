#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            nums.erase(nums.begin() + i, nums.begin() + i + 1);
            n--;
            i--;
        }
    }
    return nums.size();
}