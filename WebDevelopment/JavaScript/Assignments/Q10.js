let str = prompt("Enter a string");

let idx = prompt("Enter the index to be checked");

if(str[idx] >= 'a' && str[idx] <= 'z')
    console.log("Lowercase");
else
    console.log("Not a Lowercase");