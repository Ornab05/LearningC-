#include <iostream>


using namespace std;


int main(){

double temp, convert;
string ans;

do {

cout << "Hi, I can convert your the temparature from farenheit to Celsius .\n";

cout <<"Can you please enter any farenhite temparautre .\n";

cin >> temp;

convert = (temp - 32) / 1.8;

cout << "Your current Celsius temparature is " << convert << ".\n";

cout << ".\n wish to continue (Y/N)";

cin >> ans;

} while (ans == "y" || ans == "Y") ;


return 0;








}