require Math

def sieve(number_to)
  primes = Hash[(2..number_to).map { |num| [num, true]}]
  for num in 2..(Math.sqrt(number_to))
    if primes[num]
  end

end

sieve(2000000)
