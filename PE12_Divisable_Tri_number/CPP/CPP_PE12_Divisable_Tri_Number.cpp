#include <iostream>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;

int count_factors(int numberTo){
  int factorCount = 0;
  for(int i=1; i<numberTo; i++){
    if(numberTo%i == 0){
      factorCount += 1;
    };
  };
  return factorCount;
};

void main(){
  int factorCount = 0;
  int counter = 1;
  while (factorCount<500) {
    factorCount = count_factors(counter);
    counter++;
  };
  cout << factorCount << endl;
  cout << counter << endl;
}
