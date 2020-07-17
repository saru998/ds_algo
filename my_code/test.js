
const longest_distinct_character = (str) => {
    const seen = {}
    let i = 0
    let max_length = 0
    let end = 0
    let out=[]

    for (let j = 0; j < str.length; j++) {
        if (str[j] in seen) {
            i = Math.max(i, seen[str[j]] + 1)
        }
        seen[str[j]] = j

        if (j - i + 1 > max_length) {
            max_length = j - i + 1
            end = j
            out.push(str.slice(i, end + 1))
        }

    }
    console.log(out[out.length-1])
}
str = "sabcaaa"
longest_distinct_character(str)