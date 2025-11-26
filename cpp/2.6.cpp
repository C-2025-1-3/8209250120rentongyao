#include <iostream>
using namespace std;
int main()
{
    int a, b, x, max, min;
    cout << "请输入第一个正整数：";
    cin >> a;
    cout << "请输入第二个正整数：";
    cin >> b;

   
    int A = a;
    int B = b;

    while (b != 0)
    {
        x = a % b;  
        a = b;         
        b = x;      
    }
    max = a;

    min = (A * B) / max;

   
    cout << "最大公约数是：" << max << endl;
    cout << "最小公倍数是：" << min << endl;

    return 0;
}