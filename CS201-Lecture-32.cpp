#include <iostream>
#include <iomanip>
using namespace std;
class Complex{
private:
    float real, imag;
public:
    Complex operator - (Complex c);
    Complex operator -=(Complex c);

	Complex(){
		real = 0;
		imag = 0;
	}

    Complex(int r, int i){
    real = r;
    imag = i;
	}

	void print(){
	cout <<real <<"\t"<<imag<<"i"<<endl;
	}

    float getReal(){
    return real;
    }
    float getImag(){
    return imag;
    }
};
Complex Complex::operator-(Complex c){
    Complex Temp;
    Temp.real = real - c.real;
    Temp.imag = imag - c.imag;
    return Temp;
}
Complex Complex::operator-=(Complex c){
    real -= c.real;
    imag -= c.imag;
}


int main(){
    Complex c1(45.11, 8.32);
    Complex c2(22.1, 2.67);
    Complex c3;
    c3.print();
    c3 = c2-c1;
    c3.print();

    c3 -=c3;
    cout<<"After -= ++++++++++++++++++++++++\n";
    c3.print();




    return 0;
}
