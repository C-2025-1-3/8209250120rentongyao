#include <iostream>
using namespace std;  
#define PI 3.14159

int main()
{
   
    int r, h, v;


    cout << "请输入圆锥底面半径：";
    cin >> r;  
    cout << "请输入圆锥的高：";
    cin >> h; 

    
    v= (1.0/ 3) * PI * r * r * h;

    cout << "圆锥的体积是:" << v<< endl;

    return 0; 
}