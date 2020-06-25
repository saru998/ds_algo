const fs = require('fs');

function* generator() { 

    const out = require('fs').readFileSync('raw_input.txt', 'utf-8').split(/\r?\n/)

    for(let a of out){
        yield a
    }
}

const input = generator()

const temp = () =>{
    
    const result = input.next()
    if(!result.done){
        return result.value
    }else{
        return null
    }
}
module.exports = temp;

