#include <iostream>

using namespace std;

//it's a program that removes all
//occurrences of character ‘x’ from a given character array recursively

void removex(char str[]){
    if(str[0]=='\0') return;
    if(str[0]!='x'){
        removex(str+1);
    }
    else{
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
    str[i-1]=str[i];
    removex(str);
    }
}

int main(){
    char str[100];
    cout<<"Enter the character array : ";
    cin>>str;
    removex(str);
    cout<<str;

    return 0;
}


// - adil husain