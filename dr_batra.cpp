#include <iostream>

using namespace std;

int turnPigeons(string A){

    int arrangingAllToRight = 0;
    int arrangingAllToLeft = 0;

    //check to see if turn need
    char onePigeon = A[0];

    for(int i = 0; i <A.size();i++){
        int count = 0;
        if(A[0]==A[i]){
            count++;
        }
        
        if(count==A.size()){
            return 0;
        }

    }
    //Arrange to left
    for(int i =0; i<A.size();i++){
        
        if(A[i] == 'R'){
            arrangingAllToLeft++;
        }
    }
    //Arrange to right
    for(int i =0; i<A.size();i++){
        if(A[i] == 'L'){
            arrangingAllToRight++;
        }
    }

    if(arrangingAllToLeft<arrangingAllToRight){
        return arrangingAllToLeft;
        }else{
            return arrangingAllToRight;
        }
}


int main(){

    string position;

    cin>>position;

    cout<<turnPigeons(position);

    return 0;
}