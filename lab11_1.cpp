#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
int main(){
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i=0;i <=3;i++){
        cin.get();
    }
    srand(time(0));
    int x = rand()%9;
    
    cout << "You will get " << grade[x] << " in this 261102. ";
    return 0;
}    



// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
