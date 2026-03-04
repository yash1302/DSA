let reverseString = (string)=>{
    let result = "";
    for(let i= string.length-1; i>=0;i--){
        result = result + string[i];
    }
    console.log(result);
}

function main(){
    let string = "yash";
    reverseString(string);
}

main()