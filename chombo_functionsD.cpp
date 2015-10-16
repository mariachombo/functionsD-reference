//Maria Chombo
//16 October 2015
//Description: Its to write a single program which implements all of the functions assigned, one function at a time

#include <iostream>
#include <cmath>
#include<cassert>
 
using namespace std; 
//*******************************************************************************************************************************
void sort(int& numA, int& numB, int& numC);
//Preconditon : The function will sort the integers,as long that they are in a range of 0-100
//Postcondition : Pass by referernce assigns A - C, in increas order 
void numDigits(int  valA, int& n);
//Preconditon : Determines the number of digits in an integer, this time also going to a negative range -1000 - 1000
//Postconditon : Pass the reference, variable 'n' will be assing to the value 
void computeSphere(double& a, double& v, double r);
//Preconditon : Calculate the are and the valume of the circle
//Postconditon : The variable 'a' will get assign the are, and 'v' the volume 
void swap(int& A, int& B);
//Precondition: Will swap the values from A to B to A
//Postcondition : Pass by reference returns the value of A and B swapped 
//********************************************************************************************************************************
int main ()
{
        int three = 6 , two = 1, one = 2;
        int x = 50, y = 10, z = 1;
        int a = 4, b = 12, c = 45;
        
        cout << endl;
        
        sort ( a, b, c);
        sort ( x, y, z);
        sort (one, two, three);
        
        cout << endl;
        
        int d = 0;
        int e = 12;
        int f = -10;
        
        numDigits ( d, z);
        numDigits (e, z);
        numDigits (a, z);
        
        cout << endl;
        
        double rad1 = 2.0;
        double rad2 = 3.12;
        double rad3 = 5.1;
        double container = 0;
        double container2 = 0;
        
        computeSphere(container, container2, rad1);
        computeSphere(container, container2, rad2);
        computeSphere(container, container2, rad3);
        
        cout << endl << "Everything work" << endl << endl;
      
    return 0;
}
void sort(int& numA, int& numB, int& numC)
{
    assert( ((numA >= 0) && (numA <= 100)) );
    assert( ((numB >= 0) && (numB <= 100)) );
    assert( ((numC >= 0) && (numC <= 100)) );
    
    cout << endl << "Values are : " << numA << " , " << numB << " , " << numC << endl;
    
   if ( numA > numB)
   {
        swap (numA, numB);
   }
   if (numA > numC)
   {
        swap (numA,numC);
   }
   if (numB > numC)
   {
        swap (numB,numC);
   }
   
   cout << "Values sorted are: " << numA << " , " << numB << " , " << numC  <<  endl;
   
}
void numDigits(int  valA, int& n)
{
        assert ( ((valA >= -1000 ) && (valA <= 1000)) );
        cout << "Number is " << valA << endl;
        
        if (valA < 0)
        {
                valA = valA * - 1;
        }
        for ( n = 0;  valA > 0 ; n++)
        {
                valA = valA / 10;
        }
        
        cout << "Number of digits are: " << n << endl;
        
        return;
}
void computeSphere(double& a, double& v, double r)
{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);        
        
        const double PI = 3.1415;
        a = 4 * PI * r * r;
        v = (4/3) * PI * r * r* r;
        
        cout << "Area with a radius of " << r << "is " << a << endl;
        cout << "Volume with a radius of " << r << " is " << v << endl;
}
void swap(int& A, int& B)
{
    int temp;
   temp = A;
   A = B; 
   B = temp;
}
