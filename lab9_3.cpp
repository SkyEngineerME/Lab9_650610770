#include <iostream>
using namespace std;

int main(){
    int age,hei,bou;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 26){
     cout << "Enter your height: ";
     cin >> hei;
     if(hei < 100 ){
       name = "Chopper";
     }
     else if(hei < 180 && hei >= 100){
        name = "Usopp";
     }
     else{
          cout << "Enter your bounty: ";
          cin >> bou;
          if(bou > 1100000000){
          name = "Zoro";
         }
          else{
            name = "Sanji";
         }
        }
    }
    else if(age > 25 && age < 61){
         cout << "Enter your bounty: ";
         cin >> bou;
         if(bou > 500000000){
            name = "Jinbe";
         }
         else{
            name = "Franky";
         }
    }
    else if(age > 60){
         name = "Brook";
    }

  cout << "Your character = "<<name;
  return 0;
}







/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
