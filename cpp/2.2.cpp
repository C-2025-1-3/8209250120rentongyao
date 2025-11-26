#include <iostream> 
using namespace std;
int main()
{
    double x, y;  
    cout << "请输入x的值：";
    cin >> x;

    if (x > 0 && x < 1)
    {
        y = 3 - 2 * x;
    }
    else if (x >= 1 && x < 5)
    {
        y = (2.0 / (4 * x)) + 1;  
    }
    else if (x >= 5 && x < 10)
    {
        y = x * x;  
    }
    else
    {
        cout << "x的值不在0~10范围内" << endl;
        
        return 0; 
    }

    cout << " y = " << y << endl;


    return 0;
}