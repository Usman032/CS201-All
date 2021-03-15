// Add user input handling, big / small radius, char digit etc.
#include <iostream>
#include <limits>
using namespace std;

float AreaOfRing(float);
float AreaOfCircle(float);
float Pi = 3.1415926;

main(){
    AreaOfRing(100);

}

float AreaOfRing(float){
    float radiusBig, radiusSmall;
    float ringArea;

    cout<<"Please enter radius of the bigger circle."<<endl;
    cin>>radiusBig;

    cout<<"Please enter radius of the smaller circle."<<endl;
    cin>>radiusSmall;
    
    cout<<"Area of big circle is   = "<<AreaOfCircle(radiusBig)<<endl;
    cout<<"Area of small circle is = "<<AreaOfCircle(radiusSmall)<<endl;

    ringArea = AreaOfCircle(radiusBig) - AreaOfCircle(radiusSmall);
    cout<<"Area of the ring is     = "<<ringArea;
    
    return 0;
}

float AreaOfCircle(float radius){
        return (Pi * radius * radius);
    }