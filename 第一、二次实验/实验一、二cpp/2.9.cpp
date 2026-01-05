#include <iostream> 
using namespace std;
int main()
{
    const double price = 0.8; 
    int day = 0;               
    int today_num = 2;        
    int total_num = 0;         
    double total_cost = 0;     

    while (today_num <= 100)  
    {
        day++;
        total_num += today_num;
        total_cost += today_num * price;  
        today_num *= 2;  
    }

    double avg_cost = total_cost / day;
 
   printf("每天平均花费:%.2f元",  avg_cost);

    return 0;
}