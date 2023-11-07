#include <iostream>
using namespace std;
class A{
public :
 int a = 3, b = 7, temp;
 void bdisp()
 {
 cout<<"numbers before swapping:"<<"a:"<<a<<"  b: "<<b<<endl;
}
void swaping(){
    temp = a;
    a = b;
    b = temp;
}
void display()
{
   cout<<"After swapping:"<<endl;
   cout<<"a:"<<a<<endl;
   cout<<"b:"<<b<<endl;
}};
int main()
{
    A a;
    a.bdisp();
    a.swaping();
    a.display();
}
