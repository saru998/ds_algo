const input = require('./input_from_terminal')

const example = async () => {

    console.log("enter first input")
    const temp = await input()
    console.log(temp)

    console.log("enter second input")
    const temp2 = await input()
    console.log(temp2)

    process.exit(0)
}
example()