#include <iostream>

using namespace std;

void f(int xval)
{
 int x;
 x = xval;
 // in dia chi cua x tai d�y
 cout<<&x<<endl;
}
void g(int yval)
{
 int y;
 // in dia chi cua y tai d�y
 cout<<&y;
}
int main()
{
 f(7);
 g(11);
 return 0;
 // dia chi cua x giong voi dia chi cua y vi khi truyen vao ham thi ta lay gia tri cua xval gan cho x va dia chi cua x van la dia chi cua bien trong ham
} 
