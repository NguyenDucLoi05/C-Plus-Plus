#include <iostream>
using namespace std;

int main()
{
  int a, b, UCLN, BCNN, vTemp;
  cout << "Hay nhap so a va b:" << endl;
  cin >> a >> b;

  if (a > b)
  {
    vTemp = a;
  }
  else
  {
    vTemp = b;
  }

  for (int i = vTemp; i > 0; i--)
  {
    if (a % i == 0 && b % i == 0)
    {
      UCLN = i;
      break;
    }
  }

  BCNN = (a * b) / UCLN;

  cout << "Uoc chung lon nhat la: " << UCLN << endl;
  cout << "Boi chung nho nhat la: " << BCNN << endl;
  return 0;
}