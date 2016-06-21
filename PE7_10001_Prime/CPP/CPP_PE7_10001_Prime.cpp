#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
using namespace std;

bool is_prime(int number_to_check){
  int divisor_counter = 0;
  for(int counter = 2; counter<number_to_check; ++counter){
    if (number_to_check%counter == 0){
      ++divisor_counter;
    };
  };
  if(divisor_counter>0){
    return false;
  }else{
    return true;
  };
};

int main(){
  clock_t t;
  int f;
  t = clock();

  std::vector<int> primes;
  int number_check = 2;
  while(primes.size()<10001){
    if (is_prime(number_check)){
      primes.push_back(number_check);
    };
    ++number_check;
  };
  cout << primes.size() << endl;
  std::cout << primes.back() << std::endl;

  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
  return 0;
};
