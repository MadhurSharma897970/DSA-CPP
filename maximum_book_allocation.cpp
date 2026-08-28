#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isValid(vector<int> arr, int k, long long mid, int n) {
        int students = 1;
        long long pages = 0;

        for (int i = 0; i < n; i++) {

            // If a single book has more pages than mid
            if (arr[i] > mid) {
                return false;
            }

            if (arr[i] + pages <= mid) {
                pages += arr[i];
            }
            else {
                students++;
                pages = arr[i];
            }
        }

        return students <= k;
    }

    int findPages(vector<int>& arr, int k) {

        int n = arr.size();

        // More students than books
        if (k > n) {
            return -1;
        }

        long long sum = 0;

        for (int x : arr) {
            sum += x;
        }

        long long start = 0;
        long long end = sum;
        long long ans = -1;

        while (start <= end) {

            long long mid = start + (end - start) / 2;

            if (isValid(arr, k, mid, n)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    int n, k;

    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter pages of each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> k;

    int answer = obj.findPages(arr, k);

    cout << "Minimum maximum pages = " << answer << endl;

    return 0;
}