#include<iostream>
#include<map>
#include<unordered_map>

using namespace std ;
int main () {

//CREATION--> unordered_map <dataType , crosspondData> mapName; ---->it means -> dataType => crosspondData
unordered_map <string ,int> m;

//INSERATION  
//1
pair <string , int> p=  make_pair ("krish" , 1);
m.insert(p);

//2
pair<string , int> pair2("raj" , 2);
m.insert(pair2);

//3
m["mittal"] = 3;
m["kumar"] = 4;

//SEARCH
cout<< m["krish"] <<endl ;
  
  //2 way to search
cout<< m.at("raj")<<endl;

//SIZE
cout<< m.size()<<endl ;

//TO CHECK PRESENCE
cout<<m.count("brother") <<endl;

//ERASE 
m.erase("kumar");
cout<< m.size() <<endl ;

//TO ACCESS ALL ELEMENT OF MAP


return 0;}