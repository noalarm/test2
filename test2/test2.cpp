#include <iostream>
#include <string> 

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    string a, b;
    getline(cin, a);
    getline(cin, b);
    try {
        if (a.length() != b.length()) {
            throw 1;
        }
        cout << "Длины строк равны";
    }
    catch (int e) {
        if (e == 1) cout << "Длины строк не равны" << endl;
    }
}