#include <iostream>       // BC200206062
using namespace std;

class Complex
{
	private:
		double real;
		double imag;
	public:
		Complex(){
			cout << "Parameterless constructor called.\n"<<endl;
		}
		Complex(double r, double i){
			cout << "Parameterized constructor called.\n"<<endl;
			real = r;
			imag = i;
		}
//		void real(double r){	// setter of the real number
//			real = r;
//		}
//		double real(){	// getter of the real number
//			return real;
//		}
//		void imaginary(double i){	// setter of the imaginary number
//			imag = i;
//		}
//		double imaginary(){	// getter of the imaginary number
//			return imag;
//		}
		void display(){		
		cout <<real <<" " << imag <<"i"<<endl;
		}
		
		Complex operator +(Complex c);
//		Complex operator + (Complex &c2);
//		Complex	operator + (double, Complex)
};
Complex Complex::operator +(Complex c){
	Complex temp;
	temp.real = real + c.real;
	temp.imag = imag + c.imag;
	return temp;
}

//Complex Complex :: operator+(Complex &c1){
//	cout << "\nOperator + called...";
//	Complex temp;
//	temp.real = real + c1.real;
//	temp.imag = imag + c1.imag;
//	return temp;
//}



int main(){
	Complex c1(2,5.7);
	Complex c2(3,7.2);
	Complex c3;
	
	c3 = c1 + c2;
	cout << "c1 :   ";
	c1.display();
	cout << "c2 :   ";
	c2.display();
	cout <<"\n----------------------------\n"<<endl;
	cout << "c3 :   ";
	c3.display();
	
	return 0;
}

