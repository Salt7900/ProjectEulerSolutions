#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
using namespace std;

bool is_prime(int number_to_check, std::vector<int> primes){
  if(number_to_check == 2){
    return true;
  }else if(number_to_check%2 != 0){
    for(int counter=0; counter<(primes.size()); counter++){
      if(number_to_check%(primes[counter]) == 0){
        return false;
      };
    };
    return true;
  }else{
    return false;
  };
};

int main(){
  clock_t t;
  int f;
  t = clock();

  int prime_sum = 0;
  int number_check = 2;
  std::vector<int> primes;
  while(number_check<2000000){
    if (is_prime(number_check, primes)){
      prime_sum += number_check;
      primes.push_back(number_check);
      cout << number_check << endl;
    };
    ++number_check;
  };
  cout << prime_sum << endl;

  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
  return 0;
};
