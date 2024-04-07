#include <iostream>
using namespace std;

int main()
{
  float n, sum(0);
  cout << "Hay nhap so n: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int z = (i % 2 == 0) ? -1 : 1;
    sum+= z * (float(i) / (i + 1));
  }
  cout << "Tong s la: " << sum;
  return 0;
}
