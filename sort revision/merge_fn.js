let merge = (arr,low,mid,high)=>{

    console.log(low,mid,high)
    let n1 = mid - low + 1;
    let n2 = high - mid;

    let left = new Array(n1);
    let right = new Array(n2);

    for(let i=0;i<n1;i++){
        left[i] = arr[i];
    }

    for(let i=0;i<n2;i++){
        right[i] = arr[n1 + i];
    }


    let i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
            k++;
        }
        else{
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i<n1){
        arr[k] = left[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k] = right[j];
        j++;
        k++;
    }

    console.log(arr);
}


function main (){
    let arr = [10,20,50,5,50]
    merge(arr,0,(0 + arr.length-1)/2,arr.length)
}

main();