//Cameron Murphy
//CIS 1202
#include<iostream>
using namespace std;

template <typename number>
number half(number halfMe){
   return halfMe/2; 
};

int main(){
    double d = 3.2;
    float f = 4.6;
    int i = 11;
    cout << half(d) << endl;
    cout << half(f) << endl;
    cout << half(i) << endl;
    return 0;
}
