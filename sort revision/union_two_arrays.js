let union = (a, b, m, n) => {
  let i = 0,
    j = 0;

  while (i < m && j < n) {
    if (i > 0 && a[i] == a[i - 1]) {
      i++;
      continue;
    }
    if (j > 0 && b[j] == b[j - 1]) {
      j++;
      continue;
    }

    if (a[i] < b[j]) {
      console.log(a[i]);
      i++;
    } else if (b[j] < a[i]) {
      console.log(b[j]);
      j++;
    } else {
      console.log(a[i]);
      i++;
      j++;
    }
  }

  while (i < m) {
    if (i == 0 || a[i] != a[i - 1]) {
      console.log(a[i]);
    }
    i++;
  }
  while (j < n) {
    if (j == 0 || b[j] != b[j - 1]) {
      console.log(b[j]);
    }
    j++;
  }
};

let main = () => {
  let a = [2, 3, 4, 4, 6, 8];
  let b = [3, 4, 5, 5, 6, 6];

  union(a, b, a.length, b.length);
};

main();
