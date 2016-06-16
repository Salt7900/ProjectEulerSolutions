range_of_numbers = list(range(1,1000))
final_answer = 0

for number in range_of_numbers:
    if (number%3 == 0 or number%5 == 0):
        final_answer += number

print(final_answer)
