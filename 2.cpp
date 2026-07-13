// Template 2 - largest using template 
#include<iostream>
using namespace std;
template <typename T>
T getlargest(T n1, T n2){
    return (n1>n2)?n1:n2;
}
int main(){
    cout<<getlargest<int>(3,4)<<endl;
    cout<<getlargest<double>(4.5,3.1)<<endl;
    return 0;
}