#include<iostream>
using namespace std;
class store { 
    string item;
    float cost;
    float mrp;

    public :
    void set () {
        cout<< "THE NAME OF THE ITEM :: " ;
         cin>>item;
          cout<< "THE COST OF THE ITEM = ";
        cin>> cost;
         cout<< "THE MAXIMUM RETALING PRICE = ";
        cin>> mrp;
    }

    void get () {
        cout<< "THE NAME OF THE ITEM :: " <<item<<endl;
        cout<< "THE COST OF THE ITEM = "<< cost<< endl;
        cout<< "THE MAXIMUM RETALING PRICE = "<<mrp <<endl;

    }
};

int main () {
int n;
cout<< "ENTER THE NO. OF THE ITEMS = ";
cin>>n;
cout<<endl<<endl;
store *ptr =new store [n];

store* r= ptr;
for(int i=0; i<n; i++) {
cout<<"ITEM NUMBER "<< i+1<<endl;
ptr->set();
ptr++;
cout<< endl<<endl;
}

for(int i=0; i<n; i++) {
cout<< "ITEM NUMBER" << i+1<<endl;
r->get();
r++;
cout<<endl<<endl;
}

return 0;}