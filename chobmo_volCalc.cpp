//Maria Chombo 
//24 September 2015
//Description:Write a single program which implements all of the functions assigned, one function at a time

#include <iostream>
#include <cmath>
using namespace std;

//the given function
double calcArea(double radius);
double calcArea(double lengthA, double lengthB);
double maximum(double valA, double valB);
double maximum(double valA, double valB, double valC);
double mean(double valA, double valB, double valC, double valD);
double mean(double valA, double valB, double valC);



int main()
{
//some integers to test the functions 
    double A = 2.0;
    double B = 1.0;
    double C = 3.0; 
    double D = 4.0; 
    
    cout << "Measure the area of the pizza " << calcArea(A) << endl;
    cout << "What is the are of a recangle " << calcArea(B,C) << endl;
    
    cout << " What is the maximum nummber " << maximum(C, D) << endl;
    cout << " What is the maximun number " << maximum (B, C, A) << endl;
    
    cout << "What is the mean " << mean(A, B, C, D) << endl;
    cout << "What is the mean " << mean(A, C, B) << endl; 
    
    return 0;
    
}
double calcArea(double radius)
{
    double r = radius;
    
    return ( 3.14 * r * r );//the formula for the radius
}

double calcArea(double lengthA, double lengthB)
{

    return ( lengthA * lengthB);
}

double maximum(double valA, double valB)
{
	
	if (valA >= valB)
	{
		return valA;	
	}
	else
	{
		return valB;
	}
		
}
double maximum(double valA, double valB, double valC)
{
    if (valA >= valB)
	{
		return valA;	
	}
	else if ( valB >= valC)
	{
		return valB;
	}
	else
	{
	    return valC; 
	}

}
double mean(double valA, double valB, double valC, double valD)
{
    return (( valA + valB + valC + valD)/4);
}
double mean(double valA, double valB, double valC)
{
    return (( valA + valB + valC)/3);
}




