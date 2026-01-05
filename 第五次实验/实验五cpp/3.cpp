#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    void input() {
        cout << "请输入长、宽、高（用空格分隔）：";
        cin >> length >> width >> height;
    }
    double getVolume() {
        return length * width * height;
    }

    void output() {
        cout << "体积为：" << getVolume() << endl;
    }
};

int main() {
    Box box1, box2, box3;

    cout << "输入第1个长方柱的信息：" << endl;
    box1.input();
    cout << "输入第2个长方柱的信息：" << endl;
    box2.input();
    cout << "输入第3个长方柱的信息：" << endl;
    box3.input();

    cout << "\n第1个长方柱的";
    box1.output();
    cout << "第2个长方柱的";
    box2.output();
    cout << "第3个长方柱的";
    box3.output();

    return 0;
}