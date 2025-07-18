1. Array -: A collection of elements stored at contiguous memory locations. 
All elements are of same data type.
Example:
int arr[5] = {1, 2, 3, 4, 5};


2. Linear Search -: Search each element one by one.
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key) return i;
    return -1;
}


3. Binary Search -: Works only on sorted arrays. Divide array in half to find the element.
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}



4. Find Maximum and Minimum. 
int maxElement(int arr[], int n) {
    int maxVal = arr[0];
    for(int i = 1; i < n; i++)
        maxVal = max(maxVal, arr[i]);
    return maxVal;
}




5. Reverse Array -: 
void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


6. Check if Sorted. 
bool isSorted(int arr[], int n) {
    for(int i = 1; i < n; i++)
        if(arr[i] < arr[i-1]) return false;
    return true;
}



7. Remove Duplicates from Sorted Array. 
int removeDuplicates(int arr[], int n) {
    int res = 1;
    for(int i = 1; i < n; i++)
        if(arr[i] != arr[res-1])
            arr[res++] = arr[i];
    return res;
}



8. Left Rotate by 1
void leftRotate(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}



9. Move Zeros to End
void moveZeros(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] != 0) swap(arr[i], arr[count++]);
}



10. Kadane's Algorithm (Max Subarray Sum)
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0], currSum = arr[0];
    for(int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

