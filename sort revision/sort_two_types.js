let swap = (arr, low, high) => {
  let temp = arr[low];
  arr[low] = arr[high];
  arr[high] = temp;
};

let sort_two_types = (arr) => {
  let i = -1;
  let j = arr.length;

  console.log()

  while (true) {
    do {
      i++;
    } while (arr[i] < 0);
    do {
      j--;
    } while (arr[j] > 0);
    if (i >= j) {
      console.log(arr);
      return;
    }
    swap(arr, i, j);
  }
};

let arr = [-12, 18, -10, 5];

sort_two_types(arr);
