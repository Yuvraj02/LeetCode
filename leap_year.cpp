#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char yes[] = "yes";
    char no[] = "no";

    char result[6][3];

    strcpy(result[0],yes);
    strcpy(result[1],no);

    // result[0] = *yes;
    // result[1] = *yes;
    // result[2] = *no;
    // result[3] = *no;

    cout<<result[0][0];
    cout<<result[0][1];
    cout<<result[0][2];
    

    return 0;
}