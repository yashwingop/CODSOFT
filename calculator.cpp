#include<iostream>

using namespace std;

int main(){
    cout<<"1.Open Calculator\n2.Exit"<<endl;
    int c;
    cout<<"Enter choice: ";
    cin>>c;
    while(c==1){
        float a,b;
        cout<<"Enter the two numbers on which you want to apply the arthematic operations: "<<endl;
        cin>>a>>b;
        cout<<"Enter the basic arithmetic operation you want to apply"<<endl;
        char ch;
        cin>>ch;
        if(ch=='+'){
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
        }
        else if(ch=='-'){
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
        }
        else if(ch=='*'){
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
        }
        else if(ch=='/'){
            cout<<a<<"/"<<b<<"="<<a/b<<endl;
        }
        else cout<<"Invalid Opeartor!!"<<endl;
        cout<<"1.Open Calculator\n2.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>c;
    }
    cout<<"Exit!"<<endl;
    return 0;
}