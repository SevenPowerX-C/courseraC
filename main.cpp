#include <iostream>
#include <vector>
#include <map>
using namespace std;

//Пользовательский тип
struct Person {
    string name;
    string surname;
    int age;
};




int main() {
    int x = 4;
    int y = 5;
    double pi = 3.14;
    bool logical_value = false;
    char symbol = 'Z';
    string str1 = "abc";
    string str2 = "a";
    string str = "abcdefg";
    for (char c : str) {
        cout << c << ", ";
    }

    cout << "\n";

    if (str1 < str2) {
        cout << "less";
    } else {
        cout << "not less";
    }
    cout << "\n";
    cout << (x + y) * (x - y);
    cout << "\n";
    if (x != y) {
        cout << "x != y";
    } else {
        cout << " x == y";
    }
    cout << "\n";

    string hw = "Hello, world";
    vector<int> nums = {1, 3, 5, 7};
//    cout << logical_value;
    cout << nums.size();
    cout << hw;


    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;

    cout << "\n two is " << name_to_value["two"];

    vector<Person> staff;
    staff.push_back({"Vasya", "Vasiliev", 32});
    staff.push_back({"Petro", "Petrov", 25});


    cout << staff[0].name;
    return 0;
}