#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Hay nhap so nguyen duong n: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
    if (i % 2 ==0 || i % 5==0)
      cout << i <<",";
}