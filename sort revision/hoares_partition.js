let hoares_partition = (arr,low,high)=>{
    let pivot = arr[low];

    let i = low-1,j = high+1;
    while(true){
        do{
            i++
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot)
        if(i>=j){
            console.log(arr,"arr")
            return j;
        }
        [arr[i],arr[j]] = [arr[j],arr[i]];
    }
}


let main = ()=>{
    let arr = [5,3,8,4,2,7,1,10]

    hoares_partition(arr,0,arr.length-1)
}

main()