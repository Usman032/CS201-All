#include <iostream>
using namespace std;

double circleArea(double);

int main(){
    double radiusBig, radiusSmall;
    double ringArea;
    int controlVariale = 0;

    while (controlVariale = 0)
    {
        cout<<"Please enter radius of the bigger circle."<<endl;
        cin>>radiusBig;

        cout<<"Please enter radius of the smaller circle."<<endl;
        cin>>radiusSmall;
        
        if (radiusBig < radiusSmall){
            cout<<"Enter radius of bigger circle first.";
        }
        else if (radiusBig == radiusSmall)
        {
            cout<<"Both radii must not be equal.";
        }
        else
        {
            ringArea = circleArea(radiusBig) - circleArea(radiusSmall);
            cout<<"Area of the ring is "<<ringArea;
        }
            controlVariale = 1;
    }   
         
}
double circleArea(double radius){
    float Pi = 3.1415926;
    return (Pi * radius * radius);

}