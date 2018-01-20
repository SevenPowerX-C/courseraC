#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<int> nums = {1, 5, 2, 3, 6, 5};
    for (int num : nums) {
        cout << num << ", ";

    }
    cout << "\n";
    vector<string> numStr = {"1", "5", "2", "3", "6", "5+"};
    for (auto num : numStr) {
        cout << num << ", ";

    }
    return 0;
}