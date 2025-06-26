#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    stack<char> s;
    for (char c : str) {
        s.push(c);  //тут мы берем каждый символ 
    }

    cout << "Reversed string: ";   
    while (!s.empty()) {
        cout << s.top();   //тут поскольку stack, он по методу LIFO
        s.pop();
    }
    return 0;
}
