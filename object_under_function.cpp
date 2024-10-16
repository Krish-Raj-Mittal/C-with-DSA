#include<iostream>
using namespace std;
class flip {
public:
int a ;
string b;
char c;

flip (int l, string m, char n) {
    a= l;
    b= m;
    c= n;
}

};

class pin{
    int j ;
    string k;

    public :
    void set (int a , string c) {
        j=a;
        k=c;
    }
    void get () {
        cout<< j << " " << k << " ";
    }
};

void call () {
    //creating object without constructor under function

     //for public class flip
    // flip f1;
    // f1.a=20;
    // f1.b= "hello";
    // f1.c= 'L';
//cout<< f1.a<< " " << f1.b <<" "<< f1.c << "  " ;

  
  //for private class pin 
    pin p1;
    p1.set(40 , "done");
    p1.get() ;

    //creating object  with constructor under function of public
    flip f2 (20 , "krish" , 'k');
    cout<< f2.a<< " " << f2.b <<" "<< f2.c << "  " ;
}

//taking public object as argument in the function---->
void argu (flip o1 , flip o2) {
    int c= o1.a + o2.a;
    cout<< endl <<endl << c;
 }


int main () {
    void  call ();
    call () ;

    flip f3 (20 , "ram ", 'd');
    flip f4 (50, "intput", 'f');
    argu(f3,f4); 

}