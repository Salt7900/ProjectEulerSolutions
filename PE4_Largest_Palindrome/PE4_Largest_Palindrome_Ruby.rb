def is_palindrome?(number)
  if ((number.length == 2 && number[0] == number[1]) || number.length == 1)
    return true
  elsif (number[0] == number[-1])
    number.delete_at(0)
    number.delete_at(-1)
    is_palindrome?(number)
  else
    return false
  end
end

array_one = [*101..999]
array_two = [*101..999]

all_products = []
array_one.each do |num1|
  array_two.each do |num2|
    all_products << num1*num2
  end
end

all_products.keep_if { |num| (is_palindrome?(num.to_s.split(''))) }
p all_products.max
