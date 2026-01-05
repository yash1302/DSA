let merge_sorted_array = (arr_a,arr_b,m,n)=>{
    let i=0,j=0;

    while(i<m && j<n){
        if(arr_a[i] <= arr_b[j]){
            console.log(arr_a[i]);
            i++;
        }
        else{
            console.log(arr_b[j]);
            j++;
        }

    }
    while(i<m){
        console.log(arr_a[i]);
        i++;
    }
    while(j<n){
        console.log(arr_b[j]);
        j++;
    }
}

function main(){
    let arr_a = [10,20,50];
    let arr_b = [5,50,50];
    merge_sorted_array(arr_a,arr_b,arr_a.length,arr_b.length);
}

main();