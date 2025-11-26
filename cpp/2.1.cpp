#include <iostream>
using namespace std;
int main()
{
    char a;  
    cout << "请输入字符：";
    cin >> a; 

    if (a >= 'a' && a <= 'z')
    {
        a = a - 32;
        cout << "转换后的大写字符是：" << a << endl;
    }
    else
    {
        int ASCII = a + 1;
        cout << "其后继字符的ASCII码是：" << ASCII << endl;
    }

 
    return 0;
}