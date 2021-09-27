#include <iostream>

using namespace std;

int main(){
    int nota;
               cin >> nota;
               if(nota==0){
                cout << "E\n";
               }
               else if(nota<=35){
                cout << "D\n";
               }
               else if(nota<=60){
                cout << "C\n";
               }
               else if(nota<=85){
                cout << "B\n";
               }
               else if(nota<=100){
                cout << "A\n";
               }
return 0;
}
