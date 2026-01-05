#include <iostream>
using namespace std;

const int MAX_SIZE = 80;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int list1[MAX_SIZE], list2[MAX_SIZE], list3[MAX_SIZE * 2];
    int size1 = 0, size2 = 0;
    int num;

    cout << "Enter list1: ";
    while (cin.peek() != '\n')
    {
        cin >> num;
        list1[size1++] = num;
    }
    cin.ignore(); 

    cout << "Enter list2: ";
    while (cin.peek() != '\n') 
    {
        cin >> num;
        list2[size2++] = num;
    }

    merge(list1, size1, list2, size2, list3);

    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) 
    {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}