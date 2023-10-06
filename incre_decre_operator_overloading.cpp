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

    fraction operator++(){
        nume=nume+deno*1;
        
        fraction fnew(nume, deno);
        return fnew;
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
    fraction f1(1,2);
    f1.print();
    fraction f2=(f1++);
    f2.print();

    return 0;
}