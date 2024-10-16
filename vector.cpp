#include<iostream>
//to Access the vector in the c++ we have to include header file i.e. ----->
#include<vector>
#include<algorithm>
using namespace std;
int main () {

// //CREATING VECTOR -->
//    //{ vector <data_type> vector_name  }
//        vector <int> vec ;

// //TO ENTER DATA AT END 
//      vec.push_back(1);
//      vec.push_back(2);
//      vec.push_back(3);


// //2nd WAY TO ENTER DATA IN VECTOR --> DECLERATION & INIIALSATION WITH DATA
//     vector<int> v ={1,2,3,4,5,6,7,8,9};

// //TO REMOVE OR DELETE DATA FROM END IN VECTOR
//     vec.pop_back();  

// //PRINTING THE SINGLE ELEMENT OF THE VECTOR 
//     cout<<"THE VALUE OF VECTOR 'vec' ELEMENT 1 = " << vec[1] <<endl;
//     cout<<"THE VALUE OF VECTOR 'vec' ELEMENT 1 = " << vec[2] <<endl;



// //TAKING INPUT IN THE VECTOR THROUGH LOOPING
//     vector<int> ent;
    
//     for(int i=0 ; i<=5 ; i++) {
//         int element;
//         cout<< "ENTER THE VALUE VECTOR 'ent' " << i << " = " ;
//         cin>>element;
//         ent.push_back(element) ;
//     }

// //PRINTING THE ELEMENTS OF THE VECTOR
    
//     cout<< "THE VALUE 'ent' VECTOR :: "; 
//     for(int i=0; i<=5; i++) {
//         cout<< ent[i] <<"  " ;
//     }

//     cout<<endl;



// //2nd WAY TO TAKE INPUT IN THE VECTOR AS ARRAYS 
//      //before use vector as an array it must be to decleare its size---> { vector <data_type> vector_name (sizeOfTheVector); }
//     vector <int> arr (6);
    
//     for (int i=0 ; i<=5 ;i++) {
//         cout<< "ENTER THE VALUE OF VECTOR 'arr' " << i<< " = " ;
//         cin>> arr[i];
//     }

//     cout<< "THE VALUES OF THE VECTOR 'arr' :: ";
//     for(int i=0 ; i<=5 ; i++) {
//         cout << arr[i] <<" ";
//     }

//     cout<< endl;

// //TO CLEARE OR REMOVE ALL THE ELEMENTS FROM THE VECTOR (THIS ONLY REMOVE VALUE FROM VECTOR WITHOUT REMOVING VECTOR) --> WE USE THIS --> {vector_name.clear() ;}
//     vec.clear();

//REMOVING DATA FROM THE MIDDLE OF THE VECTOR --> {vector_name.erase(vectoe_name.begin()+ position_to_be_remove); }

     vector <int> a (6);
    
    for (int i=0 ; i<=5 ;i++) {
        cout<< "ENTER THE VALUE OF VECTOR 'a' " << i<< " = " ;
        cin>> a[i];
    }

    cout<< "THE VALUES OF THE VECTOR 'a' :: ";
    for(int i=0 ; i<=5 ; i++) {
        cout << a[i] <<" ";
    }

    cout<<endl;

    a.erase(a.begin() +2); //---->removing element from position 3nd from begin
    //it will always remove element from begin to that position (EXAMPLE)--> 
    //FOR ELEMENT IN 4th POSITION TO BE REMOVE THEN condition --->  (VectorName.begin() + positonToThatPosition) --> (exclude 1st element in counting)
    //Or --> (VectorName.begin()+(positionToBeRemove -1);) --> (include 1st element in counting)
    
     cout<< "THE VALUES OF THE VECTOR 'a' BEFORE EARSING 4th POSITION ELEMENT :: ";
    for(int i=0 ; i<=5 ; i++) {
        cout << a[i] <<" ";
    }

    cout<<endl;

    a.erase(a.begin() +3); 

     cout<< "THE VALUES OF THE VECTOR 'a' AFTER EARSING 4th PODITION ELEMENT :: ";
    for(int i=0 ; i<=5 ; i++) {
        cout << a[i] <<" ";
    }

    cout<<endl;


//SIZE & CAPACITY OF THE VECTOR
  cout<<"THE SIZE OF THE VECTOR 'a' IS " << a.size() <<endl;
  cout<<"THE CAPACITY OF THE VECTOR 'a' IS " << a.capacity() <<endl;

//EMPTY
 cout<<"IS MY VECTOR 'a' IS EMPTY : " << a.empty() <<endl;

//FRONT & BACK
    cout<< "MY 1ST ELEMENT VALUE IS : " << a.front() <<endl;
    cout<< "MY 2ND ELEMENT VALUE IS : " << a.back() <<endl;

//SORTING
    sort(a.begin(), a.end());

return 0 ;}