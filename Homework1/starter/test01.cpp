#include "csce310hmwrk01prt01.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main( int argc , char* argv[] ){
  string word01;
  string word02;
  cin >> word01;
  cin >> word02;
  try{
    if( isAnagram( word01 , word02 ) ){
      fprintf( stdout , "%s and %s are anagrams.\n" , word01.c_str() , word02.c_str() );
    }
    else{
      fprintf( stdout , "%s and %s are not anagrams.\n" , word01.c_str() , word02.c_str() );
    }
  }
  catch( exception e ){
    cerr << "An error occurred." << endl;
  }
}
