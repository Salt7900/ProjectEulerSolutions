#233168
array_of_numbers = [*1..999]
array_of_numbers.keep_if { |num| (num%3==0 || num%5==0)}

p array_of_numbers.inject(:+)
