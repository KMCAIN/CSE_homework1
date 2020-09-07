#include "csce310hmwrk01prt02.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main( int argc , char* argv[] ){
  int permutations;
  string word;
  cin >> permutations;
  cin >> word;
  cout << "Permutations" << endl;
  printPermutations( word , permutations );
}
