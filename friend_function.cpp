#include<iostream>
using namespace std;

class employe {
    public :
    string name;
    
    private :
    int salary;
    int work;

    public:
    void setdata () {
        cout<< "ENTER THE NAME OF THE EMPLOYE :: ";
        getline(cin,name);
        cout<<endl;
        cout<< "ENTER THE EMPLOYE SALARY (PER DAY) :: ";
        cin>>salary; 
        cout<<endl;
        // cout << "ENTER THE EMPLOYE WORKING DAYS :: ";
        // cin>>work; 
    }
     //employe (string a, float x) {name=a; salary =x ; }

    // void getdata () {
    //     cout<< "THE NAME OF THE EMPLOYE IS "<< name <<endl;   }
    friend void total (employe o1) ;    
    
};
 


void total (employe o1) {
    int w;
    cout<< "ENTER THE NUMBER OF WORKING DAYS :: ";
    cin>>w;
    cout<<endl;
    cout<< o1.name <<endl;
    cout << "TOTAL SALARY OF THE EMPLOYE :: " <<o1.salary* w <<endl; 
  
}


int  main () {

    // employe e1 ("ROHIT", 5000 );
    // employe e2 ("SHUBHAM" , 6000);
    // employe e3 ("AMAN" , 5400 );
    
    employe e1;
    e1.setdata () ;
    // e1.getdata();
    
   total (e1);
//   e1.getdata();

return 0;} 