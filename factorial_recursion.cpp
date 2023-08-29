#include <bits/stdc++.h>

using namespace std;

int factorial(int num){
    if ((num==0) || (num==1)){
        return 1;
    } else {
        return num*(factorial(num-1));
    }
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num<0) cout<<"Invalid Input!"<<endl;
    else cout<<"The factorial of "<<num<<" is -> "<<factorial(num)<<endl;
}

// - adil husain