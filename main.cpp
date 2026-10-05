#include <iostream>
using namespace std;

int main() {
    cout<<"Vnesi stevilko katero racunsko operacijo zelis izvesti"<<endl;
    cout<<"1. sestevanje"<<endl;
    cout<<"2. odstevanje"<<endl;
    cout<<"3. mnozenje"<<endl;
    cout<<"4. deljenje"<<endl;
    int izbira;
    cin>>izbira;
    cout<<"Stevilo1: ";
    double a;
    cin>>a;
    cout<<endl;
    cout<<"Stevilo2: ";
    double b;
    cin>>b;
    switch(izbira) {
        case 1:
            cout<<a+b;
            break;
        case 2:
            cout<<a-b;
            break;
        case 3:
            cout<<a*b;
            break;
        case 4:
            cout<<a/b;
            break;
        default:
            break;
    }

}