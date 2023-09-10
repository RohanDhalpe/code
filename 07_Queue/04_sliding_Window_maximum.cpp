#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);

    for (int i = k; i < nums.size(); i++)
    {
        if (dq.front() == (i - k))
            dq.pop_front();
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
        res.push_back(nums[dq.front()]);
    }
    return res;
}

int main()
{
    vector<int> nums = {2, 0, -1, -7, -3, 2, 1, 4};
    vector<int> res = maxSlidingWindow(nums, 3);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
