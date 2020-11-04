def insertion_sort(list):
    for index, currentval in enumerate(list):
        position = index
        while position > 0 and list[position - 1] > currentval:
            list[position] = list[position - 1]
            position -= 1
        list[position] = currentval
    return list


if __name__ == "__main__":
    list = [6, 5, 3, 1, 8, 7, 2, 4]
    print(list)
    list_sorted = insertion_sort(list)
    print(list_sorted)
