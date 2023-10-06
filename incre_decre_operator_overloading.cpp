#include <iostream>
using namespace std;

class fraction{
    public:
    int nume;
    int deno;

    fraction(int val1, int val2) : nume(val1), deno(val2) {}

    int gcd(int a, int b){
        if(a<0) a=-a;
        if(b<0) b=-b;

        if(a<b){
            if(a==0) return b;
            else return gcd(b%a, a);
        } else {
            int temp=a;
            a=b;
            b=temp;

            if(a==0) return b;
            else return gcd(b%a, a);
        }
    }

    fraction operator++(int){
        fraction ftemp=*this;

        nume=nume+deno;
        simplify();
        return ftemp;
    }

    fraction & operator++(){
        nume=nume+deno;
        simplify();
        return *this;
    }

    void simplify(){
        int common=gcd(nume, deno);
        deno=deno/common;
        nume=nume/common;
    }

    void print(){
        cout<<this->nume<<"/"<<this->deno<<endl;
    }
};

int main(){
    //Post increment

    cout<<"Post-Increment -> "<<endl;
    fraction f1(1,2);
    fraction f2=f1++;
    cout<<"f2 :: ";
    f2.print();
    cout<<"f1 :: ";
    f1.print();


    //Pre increment

    cout<<"\nPre-Increment -> "<<endl;
    fraction p1(1,2);
    fraction p2=++p1;
    cout<<"p2 :: ";
    p2.print();
    cout<<"p1 :: ";
    p1.print();    

    return 0;
}