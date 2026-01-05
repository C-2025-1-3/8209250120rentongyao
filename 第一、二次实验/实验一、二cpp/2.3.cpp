#include <iostream>
using namespace std;
int main()
{
    double a, b, c;  
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;

 
    if (a + b > c && a + c > b && b + c > a)
    {
        double d = a + b + c;
        cout << "三角形的周长是：" << d<< endl;

        if (a == b || a == c || b == c)
        {
            cout << "这是等腰三角形" << endl;
        }
        else
        {
            cout << "这不是等腰三角形" << endl;
        }
    }
    else
    {
        cout << "无法构成三角形" << endl;
    }

    return 0;
}