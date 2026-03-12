let swap = (arr, low, high) => {
  let temp = arr[low];
  arr[low] = arr[high];
  arr[high] = temp;
};

// let partition = (arr, low, high) => {
//   let pivot = arr[low];
//   let i = low - 1;
//   let j = high + 1;
//   while (true) {
//     do {
//       i++;
//     } while (arr[i] < pivot);
//     do {
//       j--;
//     } while (arr[j] > pivot);
//     if (i >= j) {
//         console.log(j,"j",arr,"arr")

//       return j;
//     }
//     swap(arr, i, j);
//   }
// };

let partition = (arr,low,high)=>{
    let pivot = arr[high];
    let i = low -1;
    for(let j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return (i+1);
}

let kth_ele = (arr, low, high, k) => {
  while (low <= high) {
    let p = partition(arr, low, high);
    console.log(arr,"arrrrrrr",p,"p")
    if (p === k - 1) {
        console.log(arr[p],"kth smallest element")
      return p;
    } else if (p < k - 1) {
      low = p + 1;
    } else {
      high = p - 1;
    }
  }  
};

let arr = [10, 4, 5, 8, 11, 6, 26];

kth_ele(arr, 0, arr.length - 1, 2);
// console.log(arr,"arr ")
