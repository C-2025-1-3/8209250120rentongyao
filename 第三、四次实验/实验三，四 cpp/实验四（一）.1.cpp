#include <iostream>
using namespace std;

int main() {
    int input[10];      
    int distinct[10];    
    int count = 0;       

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> input[i];
        bool isExist = false;
        for (int j = 0; j < count; j++) {
            if (input[i] == distinct[j]) {
                isExist = true;
                break;
            }
        }
        if (!isExist) {
            distinct[count] = input[i];
            count++;
        }
    }
    cout << "The distinct numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;

    return 0;
}