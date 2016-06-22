#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;

std::vector<int> sieve(int numberTo) {
  std::vector<int> primes;
  bool *possible_primes = new bool[numberTo + 1];
  for (int counter = 2; counter < numberTo + 1; counter ++) {
      possible_primes[counter] = true;
  };
  for (int i = 2; i * i < numberTo; i ++) {
      if (possible_primes[i]) {
          for (int j = i * i; j < numberTo; j += i) {
              possible_primes[j] = false;
          };
      };
  };
  int cnt = 0;
  for (int i = 2; i < numberTo; i ++) {
      if (possible_primes[i]) {
          primes.push_back(i);
      };
  };
  return primes;
};



int main(){
  clock_t t;
  int f;
  t = clock();

  long long int count = 0;
  std::vector<int> number = sieve(2000000);
  for(int i=0; i<number.size(); i++){
    count += number[i];
  };

  cout << count << endl;

  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
  return 0;
};
