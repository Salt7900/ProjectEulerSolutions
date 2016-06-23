def return_factor_count(number_to)
  factors = []
  possible_factors = [*1..number_to]

  possible_factors.each do |number|
    if number_to%number == 0
      factors << number
    end
  end

  factors.count
end

counter = 0
until factor_count > 500 do
  factor_count = return_factor_count(counter)
  p factor_count
  counter++
end
