#6857
require 'prime'

def highest_prime(input_num)
  Prime.prime_division(input_num).flatten!
end

primes = highest_prime(600851475143)
p primes.max
