#include <iostream>

using namespace std;

int main(){


    int num1 = -123;

    int  temp = num1;
    int reversed_num = 0;
 
    //Convert to a string


    while (temp!=0){
        int remainder =  temp%10;
        reversed_num = reversed_num*10+remainder;
        temp/=10;

    }  

    if(num1 == reversed_num){
        cout<<"true";
    }else{
        cout<<"False";
    }

    cout<<reversed_num;

    return 0;
}