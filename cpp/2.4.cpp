#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char a; 

    cout << "请输入第一个数：";
    cin >> num1;
    cout << "请输入运算符：";
    cin >>a;
    cout << "请输入第二个数：";
    cin >> num2;

   
    switch (a)
    {
    case '+':
        cout  << num1 + num2 << endl;
        break;
    case '-':
        cout  << num1 - num2 << endl;
        break;
    case '*':
        cout  << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
            cout << "除数不能为0" << endl;
        else
            cout << num1 / num2 << endl;
        break;
    case '%':
     
        if (num2 == 0)
            cout << "除数不能为0" << endl;
        else
            cout <<(int) num1 %(int) num2 << endl;
        break;
    default:
        cout << "运算符非法" << endl;
    }

    return 0;
}