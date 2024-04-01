#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> frequency;

    int min = INT_MAX, max = INT_MIN, sum = 0, mode = -1;
    float avg;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        frequency[arr[i]]++;
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
        avg = static_cast<float>(sum) / (i + 1);

        if (frequency[arr[i]] > frequency[mode]) {
            mode = arr[i];
        }
        cout << min << " " << max << " " << sum << " " << avg << " " << mode << endl;
    }

    

    return 0;
}
