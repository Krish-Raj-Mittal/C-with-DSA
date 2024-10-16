#include<iostream>
using namespace std;

class excess {
    private :
    string name;
    int salary;
    int id;
    
    public :
    excess (string x, int y ,int z ) {
        name=x;
        salary=y;
        id=z;
    }
    void get () {
        cout<<name << "  with salary (per day) =" << salary;
    }

    friend void password (excess e1, int a);
};

void password ( excess e1 ,int a) { if(a== e1.id) {cout<<e1.name << "  with salary (per day) =" << e1.salary;}
  else {cout << "invalid password ";} }

int main () {
   
   excess e1( "rahul" , 5000 , 123);
   excess e2( "vinay", 12000 ,456);
   excess e3 ("ashish" , 7800 , 789);

   int a;
   cout<< "enter password :: ";
   cin >>a;
   password(e1, a);
   


    
return 0;} 