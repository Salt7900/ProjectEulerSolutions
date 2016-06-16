def find_fibbs(array_of_nums):
    next_num = array_of_nums[-1] + array_of_nums[-2]
    if next_num < 4000000:
        array_of_nums.append(next_num)
        return(find_fibbs(array_of_nums))
    else:
        return(array_of_nums)


def remove_odds(array_of_nums):
    even_list = []
    for num in array_of_nums:
        if num%2 == 0:
            even_list.append(num)
    return(even_list)

starting_array = [1, 2]
fibb_numbers = find_fibbs(starting_array)
even_fibbs = remove_odds(fibb_numbers)
answer = 0
for num in even_fibbs:
    answer += num
print(answer)
