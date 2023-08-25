#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    cout<<"Enter total no. of subjects: ";
    int a;
    cin>>a;
    vector<float>marks;
    vector<string>subject;
    vector<string>grade;
    float total=0;
    float totalmarks=0;
    for(int i=0;i<=a;i++){
        float ans;
        if(i!=a){
            string temp;
            cout<<"Enter name of the subject: ";
            cin>>temp;
            subject.push_back(temp);
            cout<<"Enter marks of the subject "<< temp<<": ";
            
            cin>>ans;
            marks.push_back(ans);
        }
        else{
            subject.push_back("Overall");
            ans=100*totalmarks/total;
            marks.push_back(ans);
        }   
        if (ans >= 90){
            grade.push_back("A+");
            // cout<<"Your Grade is A+";
        }
        else if (ans >= 80){
            grade.push_back("A");
        }
        else if (ans >= 70){
            grade.push_back("B+");
        }
        else if (ans >= 60){
            grade.push_back("B");
        }
        else if (ans >= 50){
            grade.push_back("C");
        }
        else if (ans >= 40){
            grade.push_back("D");
        }
        else if (ans >= 30){
            grade.push_back("E");
        }
        else if (ans <= 30){
            grade.push_back("F");
        }
        total+=100;
        totalmarks+=ans;

    }
    cout<<"|---------------------------------------------------------------|"<<endl;
    cout<<"|"<<"\t\t"<<"Subject"<<"\t\t"<<"Marks"<<"\t\t"<<"Grade"<<"\t\t"<<"|"<<endl;
    cout<<"|---------------------------------------------------------------|"<<endl;
    for(int i=0;i<grade.size();i++){
        cout<<"|"<<"\t\t"<<subject[i]<<"\t\t"<<marks[i]<<"\t\t"<<grade[i]<<"\t\t"<<"|"<<endl;
    }
    cout<<"|---------------------------------------------------------------|"<<endl;
    // cout<<"\t\t"<<"Total Marks"<<"\t\t"<<total<<"\t\t"<<100*totalmarks/total<<endl;
    

    return 0;
}