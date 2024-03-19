#include <iostream>
using namespace std;
struct point {
int x;
int y;
};
int main()
{
  point p;
  p.x = 15;// toán tử truy cập thành viên đối tượng 
  p.y = 11;
  cout<<"Point Coordinates: " << p.x << ", " << p.y << endl;
  return 0;
  }