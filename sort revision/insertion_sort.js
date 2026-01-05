let insertion_sort = (arr,n) =>{
    for(let i = 1;i<n;i++){
        let key = arr[i];
        let j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    console.log(arr);
}

function main(){
    let arr = [20,5,40,60,10,30];
    insertion_sort(arr,arr.length);
}

main();