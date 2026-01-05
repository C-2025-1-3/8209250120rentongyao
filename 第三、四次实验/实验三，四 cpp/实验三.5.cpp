#include <iostream>
using namespace std;

int peach(int n) {
    if (n == 10) {
        return 1;
    }
    return (peach(n + 1) + 1) * 2;
}

int main() {
    cout << "第一天摘的桃子数：" << peach(1) << endl;
    return 0;
}