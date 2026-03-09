let swap = (arr,ele1,ele2)=>{
    console.log(ele1,"ele1",ele2,"ele2");
    let temp = arr[ele1]
    arr[ele1] = arr[ele2]
    arr[ele2] = temp;
    // console.log(arr,"arrrrr");
    return arr;
}

let lamuto = (arr,low,high)=>{
    let pivot = arr[high];

    let i = low - 1;

    console.log(high,"high")
    for(let j = low;j<=high-1;j++){
        
        if(arr[j]<pivot){
            console.log(i,"before ++")
            i++;
            // console.log(j,"jjj");
            swap(arr,i,j)
        }

    }
    // console.log(i,"i is swapped")
    swap(arr,i+1,high);
    console.log(arr,"final")
}


let main = ()=>{
    let arr = [10,80,30,90,40,50,70];
    lamuto(arr,0,arr.length-1);

}

main()