let user = prompt("Enter the maximum number");

let ran = Math.floor(Math.random() * user) + 1;

while(true){
    let ans = prompt("Guess the Number");

    if(ans == ran){
        console.log("Bingo!!! You won");
        break;
    }
    else if(ans>ran){
        console.log("Guess Lower");
    }
    else if(ans<ran){
        console.log("Guess Higher");
    }
}
console.log("Thank You!!!!!!!");