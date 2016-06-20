#include <iostream>
using namespace std;

int main(){
  int number = 5000;

  while((number%11!=0) && (number%12!=0) && (number%13!=0) && (number%14!=0) && (number%15!=0) && (number%16!=0) && (number%17!=0) && (number%18!=0) && (number%19!=0) && (number%20!=0)){
    ++number;
  };

  cout << number;
}
