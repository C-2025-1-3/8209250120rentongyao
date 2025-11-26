#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    double a;
    cout << "请输入a的值：";
    cin >> a;

   
    double sign = 1.0;
    if (a < 0)
    {
        sign = -1.0;
        a = fabs(a);  
    }

    
    double xn = a;
    double xn1;  

    
    do
    {
        xn1 = 0.5 * (xn + a / xn);  
        
        double temp = xn;
        xn = xn1;
        xn1 = temp;
    } while (fabs(xn - xn1) >= 1e-5);  

   
    printf("a的平方根是：%.6f\n", sign * xn);

    system("pause");
    return 0;
}