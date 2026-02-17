let intersectionArray = (arr1,arr2,m,n)=>{
    let i=0,j=0;

    // console.log(arr1,"arr1",arr2,"arr2",m,n)
    while(i<m && j<n){

        // console.log(i,j,"ij")
        if(i>0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }

        if(arr1[i] > arr2[j]){
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            console.log(arr1[i]);
            i++;
            j++;
        }
    }
}


let main = ()=>{
    let arr1 = [1,2,2,5,5,6];
    let arr2 = [1,2,2,3,5,5,6];

    // console.log(arr1.length,arr2.length)

    intersectionArray(arr1,arr2,arr1.length,arr2.length)
}

main();