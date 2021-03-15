#include <iostream>
using namespace std;

const int MAX = 10;
class Distance{
	private:
		int feet;
		int inches;
	public:
		void getDist(){
			cout <<"\nEnter feet: "; cin>>feet;
			cout <<"\nEnter inches: "; cin>>inches;
		}
		void showDist(){
			cout <<"Distance is " <<feet <<" feet and " <<inches <<" inches\n";
		}
		~Distance(){
			cout <<"Destructor Called\n";
		}
};

int main(){
	Distance dist[MAX];
	int n = 0;
	char ans;
	do{
		cout<<"Enter Distance number : "<<n+1<<endl;
		dist[n++].getDist();
		cout<<"Want to enter one more? (y/n)" <<endl;
		cin>>ans;
	}
	while(ans != 'n');
	
	for(int j = 0; j<11; j++){
		dist[j].showDist();
	}
	return 0;
}
