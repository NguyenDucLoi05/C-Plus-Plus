#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Hay nhap 2 so nguyen" << endl;
  cout << "So a:";
  cin >> a;
  cout << "So b:";
  cin >> b;
  cout << "So nguyen cua a chia b: " << a / b << endl;
  cout << "So du cua phep chia: " << a % b;
  return 0;
}