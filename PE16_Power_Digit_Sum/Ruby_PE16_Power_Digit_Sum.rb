number = 2**1000
sum = []

number_array = number.to_s.split('')

print number_array

number_array.each do |x|
  sum << x.to_i
end

print sum.inject(:+)
