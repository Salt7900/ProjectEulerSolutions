def find_squares(numbers)
  return_value = 0
  numbers.each do |num|
    return_value += num*num
  end
  return_value
end

def find_square_sums(numbers)
  total = numbers.inject(:+)
  total*total
end

p (find_square_sums([*1..100]) - find_squares([*1..100]))
