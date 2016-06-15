array_one = [*101..999]
array_two = [*101..999]

all_products = []
array_one.each do |num1|
  array_two.each do |num2|
    all_products << num1*num2
  end
end

all_products.keep_if { |number| number.to_s == number.to_s.reverse }
p all_products.max
