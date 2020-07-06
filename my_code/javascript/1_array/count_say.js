// 1.     1
// 2.     11
// 3.     21
// 4.     1211
// 5.     111221

const count = (n) => {
    if (n == 0) {
        return "1"
    } else {
        return get_freq_str(count(n - 1))
    }
}
const get_freq_str = (str) => {

    b = 1
    a = str[0]
    let result = ""

    // if(str.length == 1){
    //     result += b+a
    //     return result
    // }
    for (let i = 1; i < str.length; i++) {
        c = str.charAt(i)
        if (c == a) {
            b += 1
        }else{
            result += b+a
            b=1
            a=c
        }
    }
    result += b+a

    return result
}

x=5
console.log(count(x-1));

