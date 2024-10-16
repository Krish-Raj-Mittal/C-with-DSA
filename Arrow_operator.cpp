#include <iostream>
using namespace std;
class complex {
    public :
    int a ,b ;
    // void set () {
    //     cout<< "ENTER THE REAL PART OF THE COMPLEX NO. =  ";
    //     cin>>a;
    //     cout<< "ENTER THE IMAGINARY PART OF THE COMPLEX NO. =  ";
    //     cin>> b;
    // } 

void set (int x, int y) {
    a=x;
    b=y;
}
void get () {  cout << a << " + " << b << "i" <<endl ; }

}; 

int main () {

complex c1 ;
c1.set (5, 8);
c1.get ();

//taking object in the pointer 
complex c2;
complex *p = & c2;
(*p).set(2,5);
(*p).get(); 

// changing the value of the object c1 with using pointers 
complex*z =& c1;
(*z).set(6,9);
(*z).get();

//new operator in class :: 
//new operator --> basically use to create new object of coustm class or create new object of any class
//complex c3;
//complex *q =& c3; //in the place of this we can do simplily this ---> 
complex *q= new complex; //creat new object


//using ARROW operator
complex c3;
complex*a = & c3 ;
a->set(5,10);
a->get(); //arrow operator is used to do easily work

//uses of Arrow operator---->
complex*f =new complex ;
//(*f).set(50,44);     it is exactly same with arrow operator
 f-> set (50,44); 
//(*f).get();          it is exactly same with arrow operator
f->get();

return 0; }