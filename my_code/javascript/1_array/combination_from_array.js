
const combination = (arr,r)=>{
    
    const temp = new Array(r).fill(0)

    combination_util(arr,r,temp,0,0)
}
const combination_util = (arr,r,temp,i,j)=>{
    //printing and return
    if(i==r){
        console.log(temp);
        return
    }
    else if(j>=arr.length){
        return
    }
    
    temp[i] = arr[j]

    //fix i and iterate using j and make combination
    combination_util(arr,r,temp,i+1,j+1)
    combination_util(arr,r,temp,i,j+1)
}

const arr = [1,2,3,4,5]
r=3
combination(arr,r)


