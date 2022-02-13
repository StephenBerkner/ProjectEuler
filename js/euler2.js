total = 0;
current = 1;
previous = 0;

while (current < 4000000) {
    temp = current;
    current = current + previous;
    previous = temp;

    if ( (current % 2) == 0){
        total += current;
    }
}

console.log(total);