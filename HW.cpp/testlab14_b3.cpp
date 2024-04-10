#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Nhập số nguyên dương từ người dùng
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;
    
    // Kiểm tra nếu số nhập vào không phải là số nguyên dương, yêu cầu nhập lại
    while (n <= 0) {
        cout << "So ban nhap khong hop le. Nhap lai: ";
        cin >> n;
    }
    
    int count = 0;
    int temp = n;
    
    // Đếm số chữ số bằng cách chia liên tiếp cho 10 đến khi số còn lại là 0
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    
    cout << "So " << n << " co " << count << " chu so." << endl;
    
    return 0;
}
