let swap = (arr, low, high) => {
  let temp = arr[low];
  arr[low] = arr[high];
  arr[high] = temp;
};

let sort_three_types = (arr) => {
  let low = 0,
    mid = 0,
    high = arr.length - 1;

  while (mid < high) {
    if (arr[mid] === 0) {
      swap(arr, low, mid);
      low++;
      mid++;
    } else if (arr[mid] === 1) {
      mid++;
    } else {
      swap(arr, mid, high);
      high--;
    }
  }
  console.log(arr);
};

let arr = [0, 1, 2, 1, 1, 2];

sort_three_types(arr);
