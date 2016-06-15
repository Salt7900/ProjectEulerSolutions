array_of_multiples = []
array_of_nums = [*1..999]
array_of_nums.each do |num|
  if (num%3==0 || num%5==0)
    array_of_multiples << num
  end
end

p array_of_multiples.inject(:+)
