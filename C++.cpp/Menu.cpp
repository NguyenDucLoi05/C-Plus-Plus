//Viết một chương trình C++ để hiển thị một menu cho phép người dùng lựa chọn hoặc quan sát tất cả bản ghi của sinh viên hoặc chỉ quan sát các bản ghi của một sinh viên cụ thể bởi lựa chọn id của sinh viên đó.
//1. Quan sat tat ca ban ghi cua sinh vien
//2. Quan sat mot ban ghi cua sinh vien boi ID
//3. Hien thi diem thi cuoi ky cao nhat va thap nhat
//Nhap lua chon cua ban (1-3): 1
//|ID | Kiemtra1 | Kiemtra2 | Giuaky | Cuoiky
//|1232 | 10 | 23 | 45 | 56 |
//|2343 | 45 | 43 | 24 | 78 |
//|2343 | 34 | 45 | 45 | 45 |
//|3423 | 67 | 6 | 65 | 56 |
// bài giải
#include <cstdlib>
#include <iostream>
using namespace std;
void showheading();
int hivalue(int stu[4][5]);
int lovalue(int stu[4][5]);
void displaymenu(){
cout<<"========================================================"<<"\n";
cout<<" MENU "<<"\n";
cout<<"========================================================"<<"\n";
cout<<" 1. Quan sat tat ca ban ghi cua sinh vien"<<"\n";
cout<<" 2. Quan sat mot ban ghi cua sinh vien boi ID"<<"\n";
cout<<" 3. Hien thi diem thi cuoi ky cao nhat va thap nhat"<<"\n";
}
void viewall(int stu[4][5]){
int i,j;
//Hien thi tieu de
showheading();  
for(i=0;i<4;i++){
for(j=0;j<5;j++) cout<<stu[i][j]<<"\t\t";
cout<<"\n";
}
}
void viewbyid(int stu[4][5]){
int id,i,j;
bool l=false;
cout<<"Nhap ID cua sinh vien:";
cin>>id;
for(i=0;i<4;i++){
if(stu[i][0]==id){
showheading();l=true;
for(j=0;j<5;j++)cout<<stu[i][j]<<"\t\t";}
cout<<"\n";}
if(l==false) cout<<"Xin loi, khong tim thay!\n";
}
void showhl(int stu[4][5]){
cout<<"Diem thi cao nhat la:"<<hivalue(stu);
cout<<"\n";
cout<<"Diem thi thap nhat la:"<<lovalue(stu);
cout<<"\n";
}
void showheading(){
cout<<"========================================================\n";
cout<<"ID Kiemtra1 Kiemtra2 Giuaky Cuoiky\n";
cout<<"========================================================\n";
}
int hivalue(int stu[4][5]){
int *max,i;
max=&stu[0][4];
for(i=0;i<4;i++)
if(*max<stu[i][4])*max=stu[i][4];
return(*max);
}
int lovalue(int stu[4][5]){
int *min,i;
min=&stu[0][4];
for(i=0;i<4;i++)
if(*min>stu[i][4])*min=stu[i][4];
return(*min);
}
int main(int argc, char *argv[])
{
//xay dung mang hai chieu de luu tru ban ghi cua sinh vien
int stu[4][5]={{1016,7,7,8,9},{0245,6,8,5,8},{1122,5,6,6,7},{0647,8,9,8,9}};  
//Hien thi menu
displaymenu();
int yourchoice;
char confirm;
do
{
cout<<"Nhap lua chon cua ban (1-3):";
cin>>yourchoice;
switch(yourchoice){
case 1:viewall(stu);break;
case 2:viewbyid(stu);break;
case 3:showhl(stu);break;
default:cout<<"Khong hop le";
}
cout<<"Nhan y hoac Y de tiep tuc:";
cin>>confirm;
}while(confirm=='y'||confirm=='Y');
return 0;
}