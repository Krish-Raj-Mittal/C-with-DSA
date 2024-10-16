#include<iostream>
using namespace std;
class any
{
private:
    int a;
public:
    void set(int a) { this-> a=a ; } //use of the this operator....
  void show () {cout<<a<<endl;}
};

int main () {
  any e[3];
  e[0].set (4);
  e[0].show (); 

  e[1].set(5);
  e[1].show();

  e[2].set(10);
  e[2].show();

  e[3].set(11);
  e[3].show();

  e[4].set(15);
  e[4].show();

return 0 ;}