#include<iostream>
using namespace std;
template <class T>
T large(T n1, T n2){
    return (n1>n2)?n1:n2<<endl;
}
int main(){
    cout<<large(3,4);
    cout<<large(3.1,4.5);
    return 0;
}