#include <iostream>
#include <climits>
using namespace std;

int main() {
    long arrayAge[20];
    int a;
    long b;
    long long c;
    unsigned long long d;
    float e;
    double f;
    char g;
    cout<<sizeof(arrayAge)/sizeof(arrayAge[0])<<endl;
    cout<<sizeof(arrayAge)<<endl;
    cout<<sizeof(arrayAge[0])<<endl;
    cout<<"size of int a = "<<sizeof(a)<<" bits "<<CHAR_BIT<<endl;
    cout<<"size of long b = "<<sizeof(b)<<" bits "<<CHAR_BIT<<endl;
    cout<<"size of long long c = "<<sizeof(c)<<endl;
    cout<<"size of unsighned long long d = "<<sizeof(d)<<" bits "<<CHAR_BIT<<endl;
    cout<<"size of float e = "<<sizeof(e)<<" bits "<<CHAR_BIT<<endl;
    cout<<"size of double f = "<<sizeof(f)<<" bits "<<CHAR_BIT<<endl;      
    cout<<"size of char g = "<<sizeof(g)<<" bits "<<CHAR_BIT<<endl;


    cout<<"size of short = "<<__SIZEOF_SHORT__<<endl;
    cout<<"size of int = "<<__SIZEOF_INT__<<endl;
    cout<<"INT_MAX = "<<INT_MAX<<endl;
    cout<<"INT_MIX = "<<INT_MIN<<endl;
    cout<<"UINT_MAX = "<<UINT_MAX<<endl;
    cout<<"UINT_MAX - INT_MaX = "<<UINT_MAX - INT_MAX - INT_MAX<<endl;
    cout<<"LONG_MAX = "<<LONG_MAX<<endl;
    cout<<"LONG_MIN = "<<LONG_MIN<<endl;
    cout<<"INT_MAX = "<<sizeof(long long unsigned int)<<endl;    


    return 0;
}
