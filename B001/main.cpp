#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &val) {
    for (int i = 0; i < val.size(); i++) {
        cout << val[i] << " ";
    }
    cout << "\n";
}

int main(void) {

    int a[3] = {1, 2, 3};
    vector<int> v;
    // 1, 2, 3 부터 오름차순으로 순열입력
    for (int i = 0; i < 3; i++)
        v.push_back(a[i]);
    do {
        print(v);
    } while(next_permutation(v.begin(), v.end()));

    cout << "------------" << '\n';
    v.clear();

    for (int i=2; i>=0; i--) 
        v.push_back(a[i]);

    do {
        print(v);
    } while(prev_permutation(v.begin(), v.end()));

    return 0;
}