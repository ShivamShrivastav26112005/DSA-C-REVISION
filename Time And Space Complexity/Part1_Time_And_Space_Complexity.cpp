// Time And Space Complexity -: 

// Part-1 -: Finding T.C. And S.C. of the given code which is written in copy.
// Basic about T.C. And S.C. 

// And solving one ques. to find the duplicate ele. from the given array. 







// Q -> 1 -: Given an array of size n+1 consisting of integers from 1 to n. 
// One ele. is duplicate, find those duplicate ele. 

    // finding duplicate ele. 
    // Method - 1-: traversing in the whole array and check one by one ele. 
    // by using two for loops -: 

    // Method - 2-: by using sum from 1 to n and subtract from array's ele.s 


// // Method - 1 -: 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int findDuplicates(vector<int>& nums) {
//     int duplicates;

//     sort(nums.begin(), nums.end()); // Sort the array

//     // Check for consecutive duplicates
//     for (int i = 1; i < nums.size(); ++i) {
//         if (nums[i] == nums[i-1]) {
//             duplicates=nums[i];
//             cout<<duplicates;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 3, 4, 2, 2}; // Example input array
//     return findDuplicates(arr); // 2
   
// }








// // Method - 2 -: 
// #include <iostream>
// #include <vector>
// using namespace std;
// int findDuplicate(vector<int>& arr) {
//     int n = arr.size() - 1; // Given the array size is n+1
//     // Step 1: Calculate the sum of all elements in the array
//     int sum = 0;
//     for (int i = 0; i < n + 1; ++i) {
//         sum += arr[i];
//     }
//     // Step 2: Calculate the sum of first n natural numbers
//     int expectedSum = n * (n + 1) / 2;
//     // Step 3: Find the duplicate element
//     int duplicate = sum - expectedSum;
//     return duplicate;
// }

// int main() {
//     vector<int> arr = {1, 3, 4, 2, 2}; // Example input array
//     int duplicate = findDuplicate(arr); // fun. calling 
//     cout<<"Duplicate element is: "<<duplicate;
// }








// // given array of size n+1 
// Used vectors -: 

// #include<iostream>
// #include<vector>
// using namespace std;

// int find(vector<int>& arr){ // size n=4
//     int n=arr.size()-1;

//     int sum=0;
//     for(int i=0; i<n+1; i++){
//         sum+=arr[i];
//     }

//     // sum from 1 to 5 becoz total ele. is 5. 
//     int s=n*(n+1)/2;
//     int ans=sum-s;

//     return ans;
// }

// int main(){
//     vector<int>arr={1,3,4,2,4}; // size is n+1=5 (given)
//     cout<<find(arr);
// }








// Used arrays -: 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    // sum of the given array 
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    int m=n-1; // IMP steps -: 
    // sum from 1 to 4 no. becoz array's size is n+1 i.e. 4 so, we find sum from 1 to n means 1 to 4 
    // so, we take an extra variable 

    int s=m*(m+1)/2;
    int ans=sum-s;

    cout<<ans;

} // 4 

// Observation -> when finding single ele. or duplicate ele. from the array then use flag variable 
// bool flag = false; 


// // T.C. is -: Imp -: 

// i++ -> O(n)
// i+=2 -> O(n/2)
// i+=3 -> O(n/3)

// i*=k -> O(logn) base k 
// i*=2 > O(logn) base 2

// i=0 to n and j=0 to i (triangle) j<i -> O(n)

// logn*n/2 -> nlogn -> O(nlogn) 

// i+=i == i*=2 -> O(logn)