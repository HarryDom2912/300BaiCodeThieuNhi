/*Viết chương trình nhập vào ba số nguyên. 
Hãy in ba số này ra màn hình theo thứ tự tăng dẫn và chỉ dùng tối đa một biến phụ*/

#include<bits/stdc++.h>
#include<set>

using namespace std;

int increase(int a, int b, int c){
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    return 1;
}

int main(){
    int a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    cout << "Tang dan: ";
    increase(a, b, c);
    return true;
}