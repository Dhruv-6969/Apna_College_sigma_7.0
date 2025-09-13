let a = 5, b = 4, c=9, max= 0;

if(a>b){
    if(a>c)
        max = a;
    else
        max = c;
}
else{
    if(b>c)
        max = b;
    else
        max = c;
}

console.log("Maximum = ", max);