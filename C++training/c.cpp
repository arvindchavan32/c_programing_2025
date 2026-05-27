#include<iostream>
using namespace std;

int main(){
    int day;
    cout<<"enter day number (1-3):";
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday"<<endl;
        break;
        case 2:
        cout<<"tuesday"<<endl;
        break;
        case 3:
        cout<<"wednesday"<<endl;
        break;
        default:
        cout<<"invalid day number"<<endl;

    }
    return 0;

    }
#include<iostream>
using namespace std;
int main(){
    int age=25;
    bool haslicense=true;

    if(age >= 18 && haslicense){
        cout<<"you are eligible to drive"<<endl;
    }else{
        cout<<"you are not eligible to drive"<<endl; 
    }
    return 0;
}