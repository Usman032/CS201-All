// https://youtu.be/bhSjVF5LjII?list=PLFX_EwFvKKWNOxZIqqaacHgXlVt-m5T2J&t=737
#include <iostream>
using namespace std;

void swapWrong(int, int);
void swapPtr(int *, int *);
void swapRef(int &, int &);

int main(){
	int x = 25;
	int y = 92;

	cout <<"In main() Before  x = " <<x<<" and y = " <<y <<endl;
	swapWrong(x, y);
	cout <<"\nIn main() After   x = " <<x<<" and y = " <<y <<endl;

	cout << "\n-------------------------------------\n";	
	cout <<"In main() Before  x = " <<x<<" and y = " <<y <<endl;
	swapRef(x, y);
	cout <<"\nIn main() After   x = " <<x<<" and y = " <<y <<endl;
		
	cout << "\n-------------------------------------\n";	
	cout <<"In main() Before  x = " <<x<<" and y = " <<y <<endl;
	swapPtr(&x, &y);
	cout <<"\nIn main() After   x = " <<x<<" and y = " <<y <<endl;
	

	system("pause");
return 0;	
}

// wrong way to swap... by call-by-value via VALUES
void swapWrong(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	cout << "\nIn swapWrong()    x = " <<x<<" and y = " <<y <<endl;
}

// Right way to swap... by call-by-reference via POINTERS
void swapPtr(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout <<"\nIn swapPtr()      x = " <<*x<<" and y = " <<*y <<endl;
	
}

// The Elegant way to swap... by call-by-reference via REFERENCES
void swapRef(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
	cout <<"\nIn swapRef()      x = " <<x<<" and y = " <<y <<endl;
}

