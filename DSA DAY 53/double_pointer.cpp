#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int *ptr = &n;//single pointer
    int **dptr = &ptr; //double pointer
    int ***tptr = &dptr; //triple pointer
    int ****fptr = &tptr; //quadruple pointer
    cout<< "address of n = "<<ptr<<endl;  
    cout<<"address of ptr = "<< &ptr<<endl;  
    cout<<"address of ptr = "<< dptr<<endl;  
    cout<< "Address of dptr = "<< &dptr<<endl;  
    cout<< "Address of tptr = "<< tptr<<endl;  
    cout<< "Address of tptr = "<< &tptr<<endl;
    cout<< "Address of fptr = "<< fptr<<endl;
    cout<<endl;
    cout<<endl;
    
    
    //Value ko modify karne ke liye jo n me rakhi hai
    *ptr = *ptr +10;
    cout<< "Value of n after modification with ptr = "<< n <<endl; 
    cout<<endl;
    cout<<endl;
    //Value ko modify karne ke liye jo n me rakhi hai with help of dptr
    **dptr = **dptr + 10;
    cout<< "Value of n after modification with dptr = "<< n <<endl; 
    cout<<endl; 
    cout<<endl;
    //Value ko modify karne ke liye jo n me rakhi hai with help of tptr
    ***tptr = ***tptr + 10;
    cout<< "Value of n after modification with tptr = "<< n <<endl;
    cout<<endl;
    cout<<endl;
    //Value ko modify karne ke liye jo n me rakhi hai with help of fptr
    ****fptr = ****fptr + 10;
    cout<< "Value of n after modification with fptr = "<< n <<endl;
    cout<<endl;
    cout<<endl;



}