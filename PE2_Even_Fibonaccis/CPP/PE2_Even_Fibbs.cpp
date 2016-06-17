#include <iostream>
#include <vector>
using namespace std;

std::vector<int> find_fibbs(std::vector<int> number_vector){
  for (int next_number; next_number<4000000;){
    next_number = number_vector.back() + number_vector[number_vector.size() - 2];
    number_vector.push_back(next_number);
  }
  return number_vector;
}

int main(){
  std::vector<int> fibb_numbers;
  fibb_numbers.push_back(1);
  fibb_numbers.push_back(2);

  std::vector<int> all_fibbs = find_fibbs(fibb_numbers);
  std::vector<>
}
