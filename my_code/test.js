arr = [1, 2, -3, 0, 4, -5, 2, -1]

const print_sum_0 = (arr) => {

    let curr_sum = arr[0]
    let i = 0
    let j = 0
    while (j < arr.length) {
        if (curr_sum > 0) {
            while (curr_sum > 0) {
                curr_sum -= arr[j]
                i += 1
            }
        } else if (curr_sum == 0) {
            console.log(arr.slice(i, j))
        } else {
            curr_sum += arr[j]
        }
        j += 1
    }
}

print_sum_0(arr)