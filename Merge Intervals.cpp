// Question: Merge Intervals

// Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

// Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
// Output: [[1,6],[8,10],[15,18]]

// First sort the intervals by starting time.
// Then merge by comparing current and last intervals.


#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> result;
    if (intervals.empty()) return result;
    // Step 1: Sort intervals by start time
    sort(intervals.begin(), intervals.end());
    // Step 2: Start with the first interval
    result.push_back(intervals[0]);
    for(int i = 1; i < intervals.size(); i++) {
        // Get the last interval in result
        vector<int>& last = result.back();
        // If overlapping, merge
        if(intervals[i][0] <= last[1]) {
            last[1] = max(last[1], intervals[i][1]);
        } 
        else{ // No overlap, add to result
            result.push_back(intervals[i]);
        }
    }
    return result;
}
int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> merged = merge(intervals);
    for(auto interval : merged) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
}
