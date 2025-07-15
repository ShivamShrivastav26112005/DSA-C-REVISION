
// Ques -: "Find the maximum subarray sum" (Kadane’s Algorithm)

// Given an integer array nums, find the contiguous subarray (containing at least one number) 
// which has the largest sum and return its sum.

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: Subarray [4, -1, 2, 1] has the largest sum = 6



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        // At each step, either start new subarray or extend previous
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << "Maximum Subarray Sum is: " << maxSum << endl;
}

// Maximum Subarray Sum is: 6
