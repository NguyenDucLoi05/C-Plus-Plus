#include <iostream>
using namespace std;

int main()
{
  int namsinh;
  char hoten[50];

  cout << "Hay nhap ho va ten:" << hoten;
  cin.getline(hoten, 50);

  cout << "Hay nhap nam sinh:" << namsinh;
  cin >> namsinh;

  cout << "\n*********************";
  cout << "\nHo ten: " << hoten;
  cout << "\ntuoi: " << 2024 - namsinh;
  cout << "\n*********************";

  return 0;
}