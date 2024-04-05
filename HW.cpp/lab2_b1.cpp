#include <iostream>
using namespace std;

int main()
{
  float R, S, P;

  cout << " Hay nhap ban kinh: ";
  cin >> R;

  S = 3.14 * R * R;
  P = 2 * 3.14 * R;

  cout << "\nDien tich hinh tron: " << S;
  cout << "\nChu vi hinh tron: " << P;

  return 0;
}