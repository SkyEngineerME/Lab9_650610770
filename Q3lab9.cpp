#include <iostream>
using namespace std;


char findGrade(double G){
 
 if(G > 90){
    return 'A';
 }
 else if(G <=  90 && G > 75){
    return 'B';
 }
 else if(G <= 75 && G > 60){
    return 'C';
 }
 else if(G <= 60 && G > 45){
    return 'D';
 }
 else{
    return 'F';
 }


}


int main(){


    return 0;
}