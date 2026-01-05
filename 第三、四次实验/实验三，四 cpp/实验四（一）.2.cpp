#include <iostream>
using namespace std;

void bubbleSort(double arr[], int listSize)
{
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    const int SIZE = 10;
    double nums[SIZE];

    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> nums[i];
    }

    bubbleSort(nums, SIZE);
    cout << "排序后的数字为：" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}