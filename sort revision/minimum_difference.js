let minimum_difference = (arr) => {
  arr.sort((a, b) => a - b);
  let res = arr[1] - arr[0];

  for (let i = 1; i < arr.length - 1; i++) {
    res = Math.min(res, arr[i + 1] - arr[i]);
  }

  console.log(res);
};

let arr = [10,7,1,4];

minimum_difference(arr);