✅ 1. Linear Search
Definition:
Check every element one by one to find the target value.
Time: O(n)

✅ 2. Binary Search
Definition:
Search in a sorted array by dividing it into half each time.
Time: O(log n)

✅ 3. Kadane’s Algorithm
Definition:
Find the maximum subarray sum (largest sum of continuous elements).
Time: O(n)

✅ 4. Two Pointer Technique
Definition:
Use two variables (pointers) to solve problems like sorted pair sum, reverse array, etc.
Time: O(n)

✅ 5. Sliding Window Technique
Definition:
Use a fixed-size or variable-size window to solve problems like max sum subarray of size k.
Time: O(n)

✅ 6. Prefix Sum / Cumulative Sum
Definition:
Create an array where each element is the sum of all previous elements, to answer range sum queries quickly.
Time: O(n) for prefix, O(1) for query

✅ 7. Dutch National Flag Algorithm
Definition:
Sort an array of 0s, 1s, and 2s in linear time.
Used in: Sort Colors problem
Time: O(n)

✅ 8. Moore’s Voting Algorithm
Definition:
Find the majority element (that appears more than n/2 times).
Time: O(n)

✅ 9. Merge Sort (for Inversion Count)
Definition:
Used to count inversions in an array. Also used to sort.
Time: O(n log n)

✅ 10. Quickselect Algorithm
Definition:
Used to find the kth smallest/largest element in array.
Time: O(n) average

✅ 11. XOR Algorithm
Definition:
Used to find the missing number, duplicate, or single non-repeating element.
Time: O(n)

✅ 12. Merge Intervals
Definition:
Used in interval-based problems to combine overlapping intervals.
Time: O(n log n)

✅ 13. Frequency Count using Hashing
Definition:
Count how many times each number appears using a map or array.
Time: O(n)

✅ 14. Sorting Algorithms (used with arrays)
Bubble Sort: Repeatedly swap if elements are in wrong order – O(n²)
Selection Sort: Select minimum every time – O(n²)
Insertion Sort: Insert element at correct place – O(n²)
Merge Sort: Divide and merge – O(n log n)
Quick Sort: Pick pivot and sort around it – O(n log n) average




// Code in C++ -: 

✅ 1. Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target) return i;
    return -1;
}



✅ 2. Binary Search (sorted array)
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}



✅ 3. Kadane’s Algorithm
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0], currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}



✅ 4. Two Pointer Technique (Check if pair sum exists)
bool hasPairWithSum(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) return true;
        else if (sum < target) left++;
        else right--;
    }
    return false;
}



✅ 5. Sliding Window Technique (max sum subarray of size k)
int maxSumWindow(int arr[], int n, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) sum += arr[i];
    int maxSum = sum;
    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}



✅ 6. Prefix Sum
void prefixSum(int arr[], int n, int prefix[]) {
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];
}
// range sum from l to r
int rangeSum(int prefix[], int l, int r) {
    if (l == 0) return prefix[r];
    return prefix[r] - prefix[l - 1];
}



✅ 7. Dutch National Flag Algorithm
void sortColors(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) swap(arr[low++], arr[mid++]);
        else if (arr[mid] == 1) mid++;
        else swap(arr[mid], arr[high--]);
    }
}



✅ 8. Moore’s Voting Algorithm
int majorityElement(int arr[], int n) {
    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++) {
        if (count == 0) candidate = arr[i];
        count += (arr[i] == candidate) ? 1 : -1;
    }
    return candidate;
}


✅ 9. Merge Sort (for inversion count)
int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left, j = mid, k = left, inv_count = 0;
    while (i <= mid - 1 && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            inv_count += (mid - i);
        }
    }
    while (i <= mid - 1) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (i = left; i <= right; i++) arr[i] = temp[i];
    return inv_count;
}
int mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;
    if (right > left) {
        mid = (left + right) / 2;
        inv_count += mergeSort(arr, temp, left, mid);
        inv_count += mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}



✅ 10. Quickselect Algorithm
int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) swap(arr[i++], arr[j]);
    }
    swap(arr[i], arr[high]);
    return i;
}

int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k) return arr[pi];
        else if (pi > k) return quickSelect(arr, low, pi - 1, k);
        else return quickSelect(arr, pi + 1, high, k);
    }
    return -1;
}



✅ 11. XOR Algorithm (Single non-repeating element)
int singleElement(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}



✅ 12. Merge Intervals
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (res.back()[1] >= intervals[i][0])
            res.back()[1] = max(res.back()[1], intervals[i][1]);
        else
            res.push_back(intervals[i]);
    }
    return res;
}



✅ 13. Frequency Count using Hashing
void countFrequency(int arr[], int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    for (auto it : freq)
        cout << it.first << " -> " << it.second << endl;
}



✅ 14. Sorting Algorithms (short codes)
Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
}



Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}



Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
            arr[j + 1] = arr[j--];
        arr[j + 1] = key;
    }
}



Merge Sort
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}



Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low;
    for (int j = low; j < high; j++)
        if (arr[j] < pivot) swap(arr[i++], arr[j]);
    swap(arr[i], arr[high]);
    return i;
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


