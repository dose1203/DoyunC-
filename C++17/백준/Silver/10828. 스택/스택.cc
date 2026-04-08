#include <iostream>
using namespace std;

struct Stack {
    int arr[10000];
    int topIndex = -1;

    void push(int x) {
        arr[++topIndex] = x;
    }

    int pop() {
        if (topIndex == -1) return -1;
        return arr[topIndex--];
    }

    int size() {
        return topIndex + 1;
    }

    int empty() {
        return topIndex == -1 ? 1 : 0;
    }

    int top() {
        if (topIndex == -1) return -1;
        return arr[topIndex];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    Stack s;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (cmd == "pop") {
            cout << s.pop() << "\n";
        }
        else if (cmd == "size") {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty") {
            cout << s.empty() << "\n";
        }
        else if (cmd == "top") {
            cout << s.top() << "\n";
        }
    }

    return 0;
}