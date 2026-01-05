let selectionSort = (arr,n)=>{
    let temp = [];
    for(let i=0;i<n;i++){
        let min_idx = 0;
        for(let j = 1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        temp[i] = arr[min_idx];
        arr[min_idx] = Number.MAX_VALUE;
    }

    console.log(temp)

}

function main(){
    let arr = [3,2,5,4,1];
    selectionSort(arr,arr.length);
}

main();