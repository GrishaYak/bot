#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    vector<vector<int>> result(n, vector<int>(3));
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
        int h, w;
        cin >> h >> w;
        result[i] = {abs(180 - h), 75 - w};
        if (result[i][1] < 0) {
            result[i][1] = 75 - result[i][1];
        }
        
    }
}