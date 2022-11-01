#include <iostream>
using namespace std;

int main(){
    
    int personas; 
    cin >>personas; 
    string hard = "HARD";
    string easy = "EASY";

    int i;
    int calificar;
    for(i=0; i<personas; i++){
        cin >>calificar;
        if(calificar==1){
            cout << hard;
        }else{
            cout << easy;
        }
    }
}