def find_fib(array_of_nums)
  last_number = array_of_nums[-1] + array_of_nums[-2]
  if last_number < 4000000
    array_of_nums << last_number
    find_fib(array_of_nums)
  else
    array_of_nums.delete_if { |num| num%2 !=0 }
    return array_of_nums
  end
end

start_array = [1,2]
all_fib_nums = find_fib(start_array)
p all_fib_nums.inject(:+)
