let sum_array = (arr)=>{

    let sum = arr.reduce((curr,acc)=>{
        return acc += curr;
    },0)
    console.log(sum)
}

let arr = [1,2,3,4,5];
sum_array(arr);