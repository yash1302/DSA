let palindrome1 = (str)=>{
    let i=0,j=str.length-1;
    let flag = true;
    while(i<j && flag === true){
        // console.log(flag)
        if(str[i] === str[j]){
            i++;
            j--;
        }
        else{
            flag = false;
            break;
        }
    }
    console.log(flag,"isPalindrome");
}

let palindrome2 = (str)=>{
    let reverStr = str.split("").reverse().join("");
    console.log(reverStr);
    console.log(str === reverStr,"isPalindrome")
}

function main(){
    let str = "abba";
    palindrome2(str);
}

main()