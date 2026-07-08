// Template 1 - in Cpp
#include<iostream>
using namespace std;
template <class T>
class num{
    private: T a;
    public: num(T x){
        a = x;
    }
    void display(){
        cout<<a<<endl;
    }
};
int main(){                                 //execution starts from the main func.
    num<int>obj1(10);                       //num mein ek integer object made and called.
    obj1.display();                         //another func. called to display it.
    num<float>obj2(1.1);                    //same things with another object 2.
    obj2.display();
    return 0;
} 
