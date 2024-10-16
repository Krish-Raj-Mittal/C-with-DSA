#include<iostream>
using namespace std;

class excess {
    private :
    string name;
    int salary;
    int id;
    
    public:
    excess (string x, int y ,int z ) {
        name=x;
        salary=y;
        id=z;
    }
    void get () {
        cout<<name << "  with salary (per day) =" << salary;
    }

    friend void id (excess e1, excess e2 ,excess e3, int a);
};

void id ( excess e1 , excess e2 ,excess e3 ,int a) { if(a== e1.id) {cout<<e1.name << "  with salary (per day) =" << e1.salary;}
  else if(a== e2.id) {cout<<e2.name << "  with salary (per day) =" << e2.salary;}   
  else if(a== e3.id) {cout<<e3.name << "  with salary (per day) =" << e3.salary;}  
  else cout << "invalid id ";
  }

int main () {
   
   excess e1( "rahul" , 5000 , 123);
   excess e2( "vinay", 12000 ,456);
   excess e3 ("ashish" , 7800 , 789);

   int a;
   cout<< "enter id :: ";
   cin >>a;
   id (e1,e2,e3,a);
   
return 0;} 