function insertion_sort(list)
    for index in eachindex(list)
        currentval = list[index]
        position = index
        while position > 1 && list[position-1] > currentval
            list[position] = list[position-1]
            position -= 1
        end
        list[position] = currentval
    end
    return list
end


list = [6, 5, 3, 1, 8, 7, 2, 4]
println(list)
list_sorted = insertion_sort(list)
println(list_sorted)
