import time

t0 = time.clock()
def is_prime(number_to_check):
    if(number_to_check == 2):
        return True
    elif(number_to_check%2 != 0):
        range_of_numbers = list(range(2,number_to_check))
        for number in range_of_numbers:
            if (number_to_check%number == 0):
                return False
        return True
    else:
        return False

prime_numbers = []
number_check = 2
while (len(prime_numbers) < 10001):
    if (is_prime(number_check)):
        prime_numbers.append(number_check)
        print (len(prime_numbers))
    number_check += 1
print(prime_numbers[-1])

t1 = time.clock()
print(t1-t0, "seconds")
