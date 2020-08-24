/* A scientific calculator that does the following
1: Addition			7: Sin 				13: Log 
2: Subtraction		8: Cos				14: Log with base 10
3: Multiplication	9: Tan				15: Roots of a Quadratic Equation
4: Division			10: Inverse of Sin	16: Cubic root"<<endl; 
5: Exponent			11: Inverse of Cos 
6: Square root		12: Inverse of Tan 					*/

#include<iostream> 
#include<math.h> 
using namespace std; 
int main() 
{ 

//declaration of variables
float a, b, PI, c, x1, x2, discriminant, realPart, imaginaryPart;
int d; 
enternumber:
	
cout<<endl; 
cout<<"***************************************** Calculator ******************************************\n"; 
cout<<"-----------------------------------------------------------------------------------------------\n"; 
cout<<"\tOperations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n"; 
cout<<"-----------------------------------------------------------------------------------------------\n"; 
cout<<"\t1: Addition\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl; 
cout<<"\t2: Subtraction\t\t"<<"8: Cos\t\t"<<"\t\t14: Log with base 10"<<endl; 
cout<<"\t3: Multiplication\t"<<"9: Tan\t\t"<<"\t\t15: Roots of a Quadratic Equation"<<endl; 
cout<<"\t4: Division\t\t"<<"10: Inverse of Sin\t"<<"\t16: Cubic root"<<endl; 
cout<<"\t5: Exponent\t\t"<<"11: Inverse of Cos"<<endl; 
cout<<"\t6: Square root\t\t"<<"12: Inverse of Tan"<<endl; 
cout<<"\nEnter the function that you want to perform : "; 
cin>>d; 

PI=3.14159265; 

switch(d) 
{ 

//to add two numbers
case 1: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Addition = "<<a+b<<endl; 
break; 

//to Subtract two numbers
case 2: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Substraction = "<<a-b<<endl; 
break; 

//to Multiply two numbers
case 3: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Multiplication= "<<a*b<<endl; 
break; 

//to divide two numbers
case 4: 
cout<<"Enter 1st number : "; 
cin>>a; 
cout<<"Enter 2nd number : "; 
cin>>b; 
cout<<"Addition = "<<a/b<<endl; 
break; 

//to find the exponent
case 5: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Enter the exponent : "; 
cin>>b; 
cout<<"Exponent = "<<pow(a,b)<<endl; 
break; 

//to find the square root
case 6: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Square Root = "<<sqrt(a)<<endl; 
break; 

//to find the sine
case 7: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Sin = "<<sin(a)<<endl; 
break; 

////to find the cosine
case 8: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Cos = "<<cos(a)<<endl; 
break; 

////to find the tangent
case 9: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Tan = "<<tan(a)<<endl; 
break; 

////to find the inverse of sine
case 10: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl; 
break; 

//to find the inverse of cosine
case 11: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl; 
break; 

//to find the inverse of tangent
case 12: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl; 
break; 

//to find the log
case 13: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Log = "<<log(a)<<endl; 
break; 

//to find the log with base 10
case 14: 
cout<<"Enter the number : "; 
cin>>a; 
cout<<"Log with base 10 = "<<log10(a)<<endl; 
break; 

//to find the root of a quadratic equation
case 15:
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
break;

//TO FIND THE CUBE ROOT
case 16:
cout << "Enter any number : ";
cin >> a;
b = pow(a, 1.0/3.0);
cout << "\nCube root of " << a << " is: " << b;
break;

default: 
cout<<"Wrong Input"<<endl; 
goto enternumber;
} 
}
