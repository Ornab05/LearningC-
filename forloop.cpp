#include <iostream>

using namespace std;

int main () {
string sen;
int num;

cout<< "Type anything here .\n";
cin >> sen;

cout << "How many times you want your sentence to repeat";


for (cin >> num; num >= 0; num--){
    cout << sen;
    cout << endl;

}


return 0;




}