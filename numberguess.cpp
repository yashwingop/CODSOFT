#include <iostream>
#include <ctime>
using namespace std;

int main(){
	
	// srand((unsigned int)time(NULL));
	
	
	int requiredno = rand()%101;
	
	int guessed_no;
	int chances;
    cout<<"Enter no. chances in the game: "<<endl;
    cin>>chances;
	cout << "Guess a number between 1 to 100: "<<endl; 
    cin>>guessed_no;
    bool ans=false;
    int dummy_chances=chances;
    for(int i=0;i<chances-1;i++){
        dummy_chances--;
        if(guessed_no==requiredno){
            ans=true;
            break;
        }
        else if(guessed_no>requiredno){
            cout<<"You have guessed lower than the random number"<<endl;
            
        }
        else{
            cout<<"You have guessed higher than the random number"<<endl;
        }
        cout<<"Number of chances left: "<<dummy_chances<<endl;
        cout<<"Guess a number between 1 to 100 again: "<<endl;
        cin>>guessed_no;
    }
    if(ans){
        cout<<"Congratulations!You have guessed the right number"<<endl;
    }
    else {
        cout<<"The random number was: "<<requiredno<<endl;
        cout<<"No chances are left\nBETTER LUCK NEXT TIME"<<endl;
    }
    cout<<"GAME OVER!"<<endl;

return 1;	
}