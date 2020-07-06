const permutation = (str, len, curr_index, out) => {
    if (curr_index == len) {
        return out.push(str.join(""))
    }
    else {
        for (let i = curr_index; i < str.length; i++) {

            const temp = str[i]
            str[i] = str[curr_index]
            str[curr_index] = temp

            permutation(str, len, curr_index + 1, out)

            const temp2 = str[i]
            str[i] = str[curr_index]
            str[curr_index] = temp2
        }
    }
    return out
}

str = "ABC"
arr = str.split("")
console.log(permutation(arr, arr.length, 0, out = []))