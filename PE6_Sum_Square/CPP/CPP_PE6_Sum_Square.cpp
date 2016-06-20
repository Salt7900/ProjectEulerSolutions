#include <iostream>
#include <vector>
using namespace std;

int find_squares(){
  int numbers_squared = 0;
  for (int counter=1; counter<101; counter++){
    numbers_squared += (counter*counter);
  }
  return numbers_squared;
};

int added_squares(){
  int numbers_together = 0;
  for (int counter=1; counter<101; counter++){
    numbers_together += counter;
  };
  int squared_nums = numbers_together*numbers_together;
  return squared_nums;
};

int main(){
  int final_answer = added_squares() - find_squares();
  cout << final_answer << endl;
}
