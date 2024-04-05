#include <iostream>
using namespace std;

int main()
{
  float t, l, h;
  cout << "Hay nhap diem 3 mon" << endl;
  cout << "Diem toan:";
  cin >> t;
  cout << "Diem ly:";
  cin >> l;
  cout << "Diem hoa:";
  cin >> h;
  cout << "Diem trung binh 3 mon la:" << (t * 3 + l * 2 + h) / 6;
}