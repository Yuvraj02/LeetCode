#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> strs = {"flower", "flight", "flow"};

    //vector<string> strs = {"car","cir"};
    string firstWord = strs[0];
    string prefix="";


    for(int i = 0; i<strs[0].size();i++){

            string letter = "";

            for(int j = 1; j<strs.size();j++){

                        if(firstWord[i] == strs[j][i]){
                                letter = firstWord[i];
                        }else{
                            letter = "";
                            break; 
                        }
            }
            if (letter == "")
            {
                break;
            }
            
            prefix += letter;

    }

    cout<<prefix;


    return 0;
}