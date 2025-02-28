#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int n, k, i, z, count = 0, min;
    cin >> n >> k;
    vector<int> s;
    for (i = 0; i < n; i++){
        int x;
        cin >> x;
        s.push_back(x);
    } for (i = 0; i < n; i++){
        if (k % s[i] == 0){
            z = s[i];   
            count++;
        } 
        if (count == 1){
            min = z;
        } else if (count > 1){
            if ((k/z) < (k/min)){
                min = z;
            }
        }
    } cout << k/min << endl;
    return 0;
}