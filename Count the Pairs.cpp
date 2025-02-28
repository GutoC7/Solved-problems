#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, K, value, count = 0;
    unordered_set<int> numSet;
    cin >> N;
    cin >> K;
    
    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> value;
        v.push_back(value);
        numSet.insert(value);
    }

    for (int num : v) {
        if (numSet.count(num + K)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}