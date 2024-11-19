#include <iostream>
#include <string>
using namespace std;

int Count(const string& s) {
    int k = 0;
    size_t pos = 0;
    while ((pos = s.find(',', pos)) != string::npos) { // ��������� ','
        if (s[pos + 1] == '-') { // ����������, �� ��������� ������ '-'
            k++;
        }
        pos++; // ���������� ����� �� �������� �������
    }
    return k;
}

string Change(const string& s) {
    string result = s; // ������� ���������� �����
    size_t pos = 0;
    while ((pos = result.find(',', pos)) != string::npos) { // ��������� ','
        if (result[pos + 1] == '-') { // ����������, �� ��������� ������ '-'
            result.replace(pos, 2, "*"); // �������� ����� ",-" �� "*"
        }
        else {
            pos++; // ���������� ����� �� �������� �������
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str); // ������� �����, ��������� ������

    cout << "String contained " << Count(str) << " groups of ',-'" << endl;

    string modifiedStr = Change(str);

    cout << "Modified string (param) : " << modifiedStr << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
