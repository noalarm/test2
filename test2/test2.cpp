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
            throw exception("Длины строк не равны");
        }
        cout << "Длины строк равны";
    }
    catch (exception e) {
        cout << e.what() << endl;
    }
}