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

    fraction operator+(fraction const & f){
        int temp_nume=(f.deno*nume) + (deno*f.nume);
        int temp_deno=deno*f.deno;

        fraction fnew(temp_nume, temp_deno);
        fnew.simplify();
        return fnew;
    }


    //& used so not new memory allocates and const  used for no interference in actual data

    fraction operator-(fraction const & f){
        int temp_nume=(f.deno*nume) - (deno*f.nume);
        int temp_deno=deno*f.deno;

        fraction fnew(temp_nume, temp_deno);
        fnew.simplify();
        return fnew;
    }

    fraction operator*(fraction const & f){
        int temp_nume=nume*f.nume;
        int temp_deno=deno*f.deno;

        fraction fnew(temp_nume, temp_deno);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction f){
        fraction ftemp(nume, deno);
        ftemp.simplify();
        f.simplify();

        return ((ftemp.nume==f.nume) && (ftemp.deno==f.deno));
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



int main() {
    //Addition

    fraction a1(1,2);
    fraction a2(3,4);

    fraction a3=a1+a2;
    cout<<a1.nume<<"/"<<a1.deno<<" + "<<a2.nume<<"/"<<a2.deno<<" : ";
    a3.print();

    //Subtract

    fraction s1(1,2);
    fraction s2(3,4);

    fraction s3=s1-s2;
    cout<<s1.nume<<"/"<<s1.deno<<" - "<<s2.nume<<"/"<<s2.deno<<" : ";
    s3.print();

    //Multiply

    fraction m1(1,2);
    fraction m2(3,4);

    fraction m3=m1*m2;
    cout<<m1.nume<<"/"<<m1.deno<<" x "<<m2.nume<<"/"<<m2.deno<<" : ";
    m3.print();

    //Equality  check

    fraction e1(5,10);
    fraction e2(10,20);

    if(e1==e2) cout<<"Fractions e1 & e2 are equal"<<endl;
    else cout<<"Not equal fractions"<<endl;

    return 0;
}