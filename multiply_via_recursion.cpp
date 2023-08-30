#include <iostream>

using namespace std;

int power(int x, int y){
    if(y==0){
        return 1;
    } else {
        int z=power(x, y-1);
        return x*z;
    }
}

int main(){
    int num;
    cout<<"Enter 1st number : ";
    cin>>num;

    int num1;
    cout<<"Enter second number : ";
    cin>>num1;

    if(num1<0) cout<<"Invalid Input!"<<endl;
    else cout<<num<<" * "<<num1<<" -> "<<power(num, num1)<<endl;

    return 0;
}

// - adil husain 