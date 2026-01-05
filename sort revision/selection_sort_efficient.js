const selectionSort = (arr,n) =>{
    for(let i=0;i<n;i++){
        let min_idx = i;

        for(let j = i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr,min_idx,i);
    }

    console.log(arr);
}


const swap = (arr, x, y) => {
  let temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
  return arr;
};

function main(){
    let arr = [10,5,8,20,2,18];
    selectionSort(arr,arr.length);
}

main();
