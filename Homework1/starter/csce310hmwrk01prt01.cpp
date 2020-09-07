#include "csce310hmwrk01prt01.h"
#include <iostream>
#include <string>

using namespace std;

bool isAnagram( string word01 , string word02 ){

    std::string test(word02);
    for(int i =0; i<word01.size(); i++){
        for(int j =0;j<test.size();j++ ){
            if(word01[i]==test[j]){
                test.erase(test.begin()+j);
                break;
            }
            if(j==test.size()-1){
                return false;
            }
        }
    }


  return true;
}

