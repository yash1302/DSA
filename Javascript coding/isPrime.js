let isPrime = (num)=>{
    if(num <=1){
        console.log("false")
        return;
    }
    for(let i=2;i<num;i++){
        if(num%i === 0){
            console.log("false")
            return;
        }
    }
    console.log("true")
    return;
}

isPrime(4)