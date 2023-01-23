// C++ program to find the number of ways to calculate
// a target number using only array elements and
// addition or subtraction operator.
#include <iostream>
#include <vector>
using namespace std;
 
// Function to find the number of ways to calculate
// a target number using only array elements and
// addition or subtraction operator.
int findTotalWays(vector<int> arr, int i, int k)
{
 
    // If target is reached, return 1
    if (k == 0 && i == arr.size())
        return 1;
 
    // If all elements are processed and
    // target is not reached, return 0
    if (i >= arr.size())
        return 0;
 
    // Return total count of three cases
    // 1. Don't consider current element
    // 2. Consider current element and subtract it from target
    // 3. Consider current element and add it to target
    return findTotalWays(arr, i + 1, k)
           + findTotalWays(arr, i + 1, k - arr[i])
           + findTotalWays(arr, i + 1, k + arr[i]);
}
 
// Driver Program
int main()
{
    vector<int> arr = { -3, 1, 3, 5, 7 };
 
    // target number
    int k = 6;
 
    cout << findTotalWays(arr, 0, k) << endl;
 
    return 0;
}