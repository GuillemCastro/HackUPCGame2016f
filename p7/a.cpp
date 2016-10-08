#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string stringAt(int n) {
    if (n < 26) {
        string result = "";
        char a = 'a' + n;
        result += a;
        return result;
    }
    else {
        return stringAt(n/26 -1) + stringAt(n%26);
    }
}


int main(int argc, char* argv[]) {
    string s;
    vector<string> inputs = vector<string>();
    while (cin >> s) {
        cout << s << endl;
        inputs.push_back(s);
    }
    sort(inputs.begin(), inputs.end());
    for (int i = 0; i < inputs.size(); ++i) cout << inputs[i] << " ";
    cout << endl;
    int n = 0;
    while(binary_search(inputs.begin(), inputs.end(), stringAt(n))) {
        cout << n << stringAt(n) << endl;
        ++n;
    }
    cout << stringAt(n) << endl;
}