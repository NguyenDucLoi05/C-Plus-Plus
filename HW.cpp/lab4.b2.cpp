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

        if (n % i == 0 && i < n)
        {
          sum += i;
          if (sum = n)
          {
            cout << "Day la so hoan thien!" << endl;
          }
        }
    }
    break;  
  } while (n > 0);
  return 0;
}