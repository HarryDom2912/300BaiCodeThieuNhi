/*Viết chương trình nhập vào tọa độ các đỉnh của tam giác ABC và của điểm M, 
xác định điểm M nằm trong, nằm trên cạnh hay nằm ngoài tam giác ABC.*/

#include<bits/stdc++.h>

using namespace std;

//Hàm tính diện tích tam giác khi biết tọa độ của 3 điểm
double area(double xA, double yA, double xB, double yB, double xC, double yC){
    return 0.5 * abs((xA*yB)-(xB*yA)+(xB*yC)-(xC*yB)+(xC*yA)-(xA*yC));
}

int main(){
    double xA, yA, xB, yB, xC, yC, xM, yM;
    //Nhập tọa độ điểm A, B, C, M
    cout << "A(xA, yA)? ";
    cin >> xA >> yA;
    cout << "B(xB, yB)? ";
    cin >> xB >> yB;
    cout << "C(xC, yC)? ";
    cin >> xC >> yC;
    cout << "M(xM, yM)? ";
    cin >> xM >> yM;
    double d =
    (   area(xM, yM, xA, yA, xB, yB)    //Diện tích tam giác MAB
    +   area(xM, yM, xB, yB, xC, yC)    //Diện tích tam giác MBC
    +   area(xM, yM, xC, yC, xA, yA))   //Diện tích tam giác MCA
    -   area(xA, yA, xB, yB, xC, yC);   //Diện tích tam giác ABC
    //Biện luận bằng cách so sánh tổng diện tích các tam giác MAB + MBC + MCA với diện tích tam giác ABC
    if(d > 0) cout << "M nam ngoai tam giac ABC" << endl;
    else if(area(xM, yM, xA, yA, xB, yB) == 0 || area(xM, yM, xB, yB, xC, yC) == 0 || area(xM, yM, xC, yC, xA, yA) == 0) cout << "M nam tren canh tam giac ABC" << endl;
        else cout << "M nam trong tam giac ABC" << endl;
    return 0;
}