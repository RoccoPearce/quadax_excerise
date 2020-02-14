/**
 *   @file: quadrants.cc
 *   @author: Rocco Pearce
 *   @date: 2/11/2020
  */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
int max = 6;
int randa, randb, randc, randd;
int guessa, guessb, guessc, guessd;
randa = (rand() % max) + 1;
randb = (rand() % max) + 1;
randc = (rand() % max) + 1;
randd = (rand() % max) + 1;

for (int i = 0; i < 10; i++){
cout << "Please enter your four digit guess spaced out (1-6): ";
cin >> guessa >> guessb >> guessc >> guessd;
if (guessa < 1 || guessa > 6 || guessb < 1 || guessb > 6 || guessc < 1 || guessc > 6 
|| guessd < 1 || guessd > 6 ){
  cout << "Remember each digit should be 1-6" << endl;
  continue;
}
if (guessa == randa){          // digit 1
  cout << "|+";
} else if (guessa == randb || guessa == randc || guessa == randd){
  cout << "|-";
} else {
  cout << "| ";
}
if (guessb == randb){          // digit 2
  cout << "|+";
} else if (guessb == randa || guessb == randc || guessb == randd){
  cout << "|-";
} else {
  cout << "| ";
}
if (guessc == randc){          // digit 3
  cout << "|+";
} else if (guessc == randb || guessc == randa || guessc == randd){
  cout << "|-";
} else {
  cout << "| ";
}
if (guessd == randd){          // digit 4
  cout << "|+|" << endl;
} else if (guessd == randb || guessd == randc || guessd == randa){
  cout << "|-|" << endl;
} else {
  cout << "| |" << endl;
}
if (guessa == randa && guessb == randb && guessc == randc && guessd == randd){
  cout << "Congradulations you guessed the number!";
  exit(0);
}
}
cout << "Better luck next time!";
return(0);
}