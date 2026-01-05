#include <iostream>
using namespace std;

class Student {
public:
    int num;    
    int score; 

    Student(int n, int s) : num(n), score(s) {}
};

void max(Student* arr, int size) {
    Student* maxStudent = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i].score > maxStudent->score) {
            maxStudent = &arr[i];
        }
    }
    cout << "最高成绩的学生学号：" << maxStudent->num << "，成绩：" << maxStudent->score << endl;
}

int main() {
    Student students[] = {
        Student(101, 85),
        Student(102, 92),
        Student(103, 78),
        Student(104, 95),
        Student(105, 88)
    };

    max(students, 5);

    return 0;
}