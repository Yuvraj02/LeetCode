#include <iostream>

using namespace std;

void display(int *arr,int size);

int main(){

    int arr[] = {1,3,2,4,2,1,4};

    int size = sizeof(arr)/sizeof(int);

    display(arr,size);

    return 0;
}

void display(int *arr,int size){

    for(int i = 0; i<size;i++){
        cout<<*(arr+i);
    }
}