#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>
#include <fstream>
using namespace std;

void sieve(int number_to) {
  int numberToSqRt = (int)sqrt((double)number_to);
  std::vector<int> primes;
  std::vector<bool> possible_primes;

  for(int counter = 0; counter < numberToSqRt; counter++){
    if(possible_primes[counter]){
      for(int i = counter*counter; i < possible_primes.size(); i++)
        possible_primes[i] = false;
    };
  };

  for(int counter = 0; counter < 10; counter++){
    cout << possible_primes[counter] << endl;
  }

};


int main(){
  clock_t t;
  int f;
  t = clock();

  // std::vector<int> primes_array = sieve(10);
  // for(int counter = 0; counter<primes_array.size(); counter++){
  //   if(primes_array[counter] != false){
  //     cout<<primes_array[counter]<<endl;
  //   };
  // };


  sieve(10);
  // for(int i=0; i<v.size(); i++){
  //   cout << v[i] << endl;
  // }

  // t = clock() - t;
  // printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
  // return 0;
};
