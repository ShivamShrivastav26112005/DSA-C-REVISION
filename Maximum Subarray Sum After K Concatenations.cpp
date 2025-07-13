// Level: Hard
// Tags: Arrays, Kadane’s Algorithm, Dynamic Programming

// Problem Statement:
// You are given an array arr of integers and an integer k.
// Your task is to find the maximum subarray sum of the array formed by concatenating arr exactly k times.
// Return the maximum sum possible.
// Since the answer can be large, return it modulo 10^9 + 7.

// Input:
// arr: A list of n integers.
// k: Integer (1 ≤ k ≤ 10^5)
// −10⁴ ≤ arr[i] ≤ 10⁴
// Output:
// A single integer: the maximum subarray sum modulo 10⁹ + 7.



#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

// Kadane's Algorithm
long long kadane(vector<int>& arr) {
    long long maxEndingHere = 0, maxSoFar = 0;
    for (int num : arr) {
        maxEndingHere = max((long long)num, maxEndingHere + num);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    return maxSoFar;
}

int kConcatenationMaxSum(vector<int>& arr, int k) {
    long long max1 = kadane(arr);
    if(k == 1) return max1 % MOD;

    // Create arr2 = arr + arr
    vector<int> arr2 = arr;
    arr2.insert(arr2.end(), arr.begin(), arr.end());
    long long max2 = kadane(arr2);
    long long totalSum = accumulate(arr.begin(), arr.end(), 0LL);

    if(totalSum>0)
        return (max2 + (k - 2) * totalSum) % MOD;
    else
        return max2 % MOD;
}

int main() {
    vector<int>arr={1, -2, 1}; // change input here
    int k=5;
    cout<<"Maximum subarray sum after "<<k <<"concatenations is:"<<kConcatenationMaxSum(arr, k);
}


// Input: arr = [1, -2, 1], k = 5  
// Output: 2  
// Explanation: The best subarray is [1, -2, 1, 1, -2, 1], which gives sum = 2.
