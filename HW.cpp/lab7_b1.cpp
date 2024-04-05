#include <iostream>
using namespace std;

int main()
{
  float g;
  cout << "Hay nhap so giay:" << endl;
  cin >> g;

  cout << "Phut tuong ung la:" << g / 60 << endl;
  cout << "Gio tuong ung la:" << (g / 60) / 60 << endl;

  return 0;
}