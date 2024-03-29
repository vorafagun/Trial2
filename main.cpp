#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"Function A"<<endl;
    }
    void func(string name){
        cout<<"Function "<<name<<endl;
    }
    int func(int x){
        cout<<"Function "<<x<<endl;
    }
};

int main(){
    A obj;
    obj.func();
    obj.func("Fagun");
    obj.func(444);
    return 0;
}
