#include <bits/stdc++.h>

using namespace std;

//Same memory address for every variable, memory size as per biggest element of the union

union Student {
    int marks;
    char Grade;
    float cgpa;
};


int main(){
    union Student s1;
    s1.marks=20;
    cout<<&s1.marks<<endl;
    s1.Grade='z';
    cout<<&s1.Grade<<endl;
    s1.cgpa=7.5;
    cout<<&s1.cgpa<<endl;

    return 0;
}
