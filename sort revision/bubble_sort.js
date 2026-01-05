const bubbleSort = (arr, n) => {
  for (let i = 0; i < n - 1; i++) {
    for (let j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr,j, j + 1);
      }
    }
  }

  console.log(arr)
};

const swap = (arr, x, y) => {
  let temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
  return arr;
};

function main() {
  let arr = [3, 2, 1];
  bubbleSort(arr, arr.length);
  return 0;
}

main();
