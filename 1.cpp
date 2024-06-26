#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;
    // vector<int> v;

    while (i >= 0 && j >= 0)
    {
        if ((nums1[i] >= nums2[j]))
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else if ((nums1[i] < nums2[j]))
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
    while (j >= 0)
    {
        nums1[k] = nums2[j];
        k--;
        j--;
    }
    while (i >= 0)
    {
        nums1[k] = nums1[i];
        i--;
        k--;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
}
