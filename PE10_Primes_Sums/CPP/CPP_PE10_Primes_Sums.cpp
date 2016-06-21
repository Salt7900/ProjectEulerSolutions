#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
using namespace std;

class Sieve{
public:
  Sieve(unsigned maxval=4000000);
  long long sum(unsigned val = 0) const;
  unsigned primesBelow(unsigned val) const;
  bool isPrime(unsigned val) const;
private:
  bool clr(unsigned val) { nums[val>>1] = false; }
  bool get(unsigned val) const { return nums[val>>1]; }
  unsigned adjust(unsigned val) const {return (val ==0 || val> maxnum) ? maxnum : val; }
  unsigned maxnum;
  std::vector<bool>nums;
};

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

  // int prime_sum = 0;
  // int number_check = 2;
  // std::vector<int> primes;
  // while(number_check<2000000){
  //   if (is_prime(number_check, primes)){
  //     prime_sum += number_check;
  //     primes.push_back(number_check);
  //     cout << number_check << endl;
  //   };
  //   ++number_check;
  // };
  // cout << prime_sum << endl;

  const unsigned maxprime = 2000000;
  Sieve sv(maxprime);
  std::cout << sv.sum

  t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
  return 0;
};
