#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) { // Знаходимо ','
        if (s[pos + 1] == '-') { // Перевіряємо, чи наступний символ '-'
            k++;
        }
        pos++; // Продовжуємо пошук із наступної позиції
    }
    return k;
}

string Change(const string& s) {
    string result = s; // Копіюємо початковий рядок
    size_t pos = 0;
    while ((pos = result.find(',', pos)) != string::npos) { // Знаходимо ','
        if (result[pos + 1] == '-') { // Перевіряємо, чи наступний символ '-'
            result.replace(pos, 2, "*"); // Замінюємо групу ",-" на "*"
        }
        else {
            pos++; // Продовжуємо пошук із наступної позиції
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str); // Зчитуємо рядок, включаючи пробіли

    cout << "String contained " << Count(str) << " groups of ',-'" << endl;

    string modifiedStr = Change(str);

    cout << "Modified string (param) : " << modifiedStr << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
