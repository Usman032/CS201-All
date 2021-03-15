#include <iostream>       // BC200206062
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
	Complex(){
		real = 0;
		imag = 0;
	}  
	Complex(int r, int i){
		real = r;
		imag = i;
	}
	
	void print(){
		cout << real << " + " << imag << "i "<<endl;
	}	
	// operator overloading syntax
	Complex operator +(Complex c){ // https://youtu.be/BO2KagRMS3M?list=PLIY8eNdw5tW_o8gsLqNBu8gmScCAqKm2Q&t=532
		Complex temp;
		temp.real = real + c.real;
		temp.imag = imag + c.imag;
		return temp;
	}

};
int main(){

	Complex c1(5,4);
	Complex c2(2,5);
	Complex c3(1,1);
	Complex c4;
	
	c4 = c1 + c2 ; // c3 = c1.add(c2)  
	
	c4.print(); 


	return 0;
}

