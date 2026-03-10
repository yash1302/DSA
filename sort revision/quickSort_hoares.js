let swap = (arr, low, high) => {
  let temp = arr[low];
  arr[low] = arr[high];
  arr[high] = temp;
};

let partition = (arr, low, high) => {
  //   console.log(arr, "arr");
  let pivot = arr[low];
  let i = low - 1;
  let j = high + 1;

  while (true) {
    do {
      i++;
    } while (arr[i] < pivot);
    do {
      j--;
    } while (arr[j] > pivot);
    if (i >= j) {
      return j;
    }
    swap(arr, i, j);
  }
};

let quickSort = (arr, low, high) => {
//   console.log(arr, low, high, "------------");
  if (low < high) {
    let p = partition(arr, low, high);
    // console.log(p,"p",arr)
    quickSort(arr, low, p);
    quickSort(arr, p + 1, high);
  }
};

let arr = [8, 4, 7, 9, 3, 10, 5];

quickSort(arr, 0, arr.length - 1);
console.log(arr, "Result");
