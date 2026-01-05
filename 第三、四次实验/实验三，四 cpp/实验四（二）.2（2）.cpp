#include <iostream>
#include <cctype> 
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    while (*hexString != '\0') {
        char c = toupper(*hexString); 
        int num;
        if (c >= '0' && c <= '9') {
            num = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            num = c - 'A' + 10;
        }
        else {
            return 0;
        }
        result = result * 16 + num;
        
    }
    return result;
}

int main() {
    char hexStr[100];
    cout << "请输入十六进制字符串：";
    cin >> hexStr;

    int decimal = parseHex(hexStr);
    cout << "转换后的十进制数为：" << decimal << endl;

    cout << "parseHex(\"A5\") = " << parseHex("A5") << endl; 

    return 0;
}