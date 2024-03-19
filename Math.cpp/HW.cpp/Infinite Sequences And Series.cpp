#include <stdio.h> 

int main() 
{ 
   // định nghĩa các biến 
   int n1 = 16, n2 = 8, max; 
   // Số lớn nhất giữa n1 và n2 
   max = (n1 > n2) ? n1 : n2; 
   // In ra số lớn nhất 
   printf("So lon nhat giua %d va %d la %d.", n1, n2, max); 

   return 0; 
} 