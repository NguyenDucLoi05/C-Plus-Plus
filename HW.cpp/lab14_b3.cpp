#include <iostream>
using namespace std;

int main()
{
  int n, m, count(0);
  cout << "Hay nhap so nguyen duong n: ";
  cin >> n;
  while (n <= 0)
  {
    cout << "Hay nhap lai so nguyen duong n: ";
    cin >> n;
  }
  m = n;
  while (m != 0)
  {
    m /= 10;
    count++;
  }
  cout << "So " << n << " co " << count << " chu so.";
  return 0;
}