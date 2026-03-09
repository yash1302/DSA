let swap = (arr,low,high)=>{
    let temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
}


let partition = (arr,low,high)=>{
    let pivot = arr[high];
    let i = low -1;
    for(let j = low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return (i+1);
}

let quickSort = (arr,low,high)=>{
    if(low<high){
        let p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }

    // console.log(arr,"arr")
}

let arr = [8,4,7,9,3,10,5]
quickSort(arr,0,arr.length-1)
console.log(arr,"Result")