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