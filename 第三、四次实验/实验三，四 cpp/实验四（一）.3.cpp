#include <iostream>
using namespace std;

int main() {
    const int LOCKER_NUM = 100;
    bool lockers[LOCKER_NUM + 1] = { false };

    for (int student = 1; student <= LOCKER_NUM; student++)
    {
        for (int locker = student; locker <= LOCKER_NUM; locker += student) 
        {
            lockers[locker] = !lockers[locker]; 
        }
    }
    cout << "开启的储物柜编号为：" << endl;
    for (int i = 1; i <= LOCKER_NUM; i++) 
    {
        if (lockers[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}