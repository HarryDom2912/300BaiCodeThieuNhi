/*Nhập tọa độ 2 điểm A(xA, yA) và B(xB, yB). Tính khoảng cách AB.
|AB| = SQRT((xB - xA)^2 + (yB - yA)^2)*/

#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main(){
    float xA = 0, yA = 0, xB = 0, yB = 0, result = 0;
    cout << "A(xA, yA)?" << " ";
    cin >> xA >> yA;
    cout << "B(xB, yB)?" << " ";
    cin >> xB >> yB;
    result = abs(sqrt(pow((xB - xA),2) + pow((yB - yA),2)));
    cout << "|AB| = " << result;
    return 0;
}