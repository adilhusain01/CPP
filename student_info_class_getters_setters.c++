#include <iostream>
#include <sstream>

using namespace std;

class Student{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
    void set_age(int age){
        this->age=age;
    }
    void set_standard(int standard){
        this->standard=standard;
    }
    void set_first_name(string first_name){
        this->first_name=first_name;
    }
    void set_last_name(string last_name){
        this->last_name=last_name;
    }
    
    int get_age(){
        return age;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    int get_standard(){
        return standard;
    }
    
    string to_string(){
        stringstream one,two;
        string str_age, str_standard;
        one<<age;
        two<<standard;
        one>>str_age;
        two>>str_standard;
        return str_age+","+first_name+","+last_name+","+str_standard;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the first name : ";
    cin>>first_name;
    cout<<"Enter the lat name : ";
    cin>>last_name;
    cout<<"Enter the standard : ";
    cin>>standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout <<"Student's age is : "<<st.get_age() << "\n";
    cout <<"Student's last name is : "<< st.get_last_name() <<" , Student's first name is : "<< st.get_first_name() << "\n";
    cout <<"Student's standard is : "<< st.get_standard() << "\n";
    cout << "\n";
    cout << "The final string is : "<<st.to_string();
    
    return 0;
}