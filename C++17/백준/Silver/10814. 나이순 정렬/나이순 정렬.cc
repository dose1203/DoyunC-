#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public:
    int age;
    string name;

    Person(int age, string name) {
        this->age = age;
        this->name = name;
    }
};

bool compare(const Person& a, const Person& b) {
    return a.age < b.age;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<Person> v;

    for (int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;

        v.push_back(Person(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (const auto& p : v) {
        cout << p.age << " " << p.name << "\n";
    }

    return 0;
}