require 'benchmark'

def sieve(number_to)
  possible_primes = Array.new(number_to, true)
  possible_primes[0] = false

  possible_primes.each_with_index do |number, counter|
    if number then
      yield(counter+1)
      (2*counter+1).step(number_to, counter+1) do |index|
        possible_primes[index] = false
      end
    end
  end
  return
end

Benchmark.bm do |bm|
    bm.report do
    sum = 0
    sieve(2000000) {|output| sum += output}
    p sum
  end
end
