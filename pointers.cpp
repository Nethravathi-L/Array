// Pointer is a variable that used to store the address of another variable
#include<iostream>
using namespace std;

int main() {
    
    int var = 3;
    cout<< "value is:" << var << endl;
    cout<< "address is:" << &var <<endl;
    cout<< "value is:" << *&var <<endl;
   
    return 0;
}