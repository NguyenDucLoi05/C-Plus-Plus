#include <iostream>
using namespace std;

int main()
{
  int n, sum(0);
  cout << "Hay nhap so n: " << endl;
  cin >> n;
  do
  {
    {
      for (int i = 1; i < n; i++)
      {
        if (n % i == 0)
          sum += i;
      }
      cout << sum << endl;
    }
    break;
  } while (n > 0);
  return 0;
}