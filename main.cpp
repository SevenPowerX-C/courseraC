#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;


int main() {
    vector<int> nums = {1, 5, 2, 3, 6, 5};
    int quantity = 0;
    for (int num : nums) {
        cout << num << ", ";

    }
    for (auto x : nums) {
        if(x == 5)quantity += 1;
    }
    cout << endl;
    cout << "quantity 5:  = "<<quantity<<endl;
    cout << "test"<< endl;

    quantity = count(begin(nums), end(nums), 5);
    cout << endl;
    cout << "quantity 5:  = "<<quantity<<endl;

    sort(begin(nums), end(nums));
    for(auto x : nums)cout <<x << ", ";
    cout <<endl<< "test"<< endl;

    vector<string> numStr = {"1", "5", "2", "3", "6", "5+"};
    for (auto num : numStr) {
        cout << num << ", ";
    }
    return 0;
}