#include <iostream>

using namespace std;

int main() {
 
 int score;

 cout <<"Can you please enter your score:.\n";
 cin>> score;

 if(score > 90 && score < 100){
    cout << "You grade is A";
 }
 
  if(score > 80 && score < 90){
    cout << "You grade is B";
 }

  if(score > 65 && score < 80){
    cout << "You grade is C";
 }

  if(score > 50 && score < 65){
    cout << "You grade is D";
 }

  if(score < 50){
    cout << "You grade is F...So, try better next time";
 }
 

return 0;
};