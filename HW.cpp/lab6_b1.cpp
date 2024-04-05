#include <iostream>
using namespace std;

int main()
{
  float d, r;
  cout << "Hay nhap gia tri chieu dai va chieu rong cua HCN" << endl;

  cout << "Chieu dai:";
  cin >> d;

  cout << "Chieu rong:";
  cin >> r;

  cout << "Chu vi HCN la:" << (d + r) * 2 << endl;
  cout << "Dien tich HCN la:" << d * r;
  return 0;
}