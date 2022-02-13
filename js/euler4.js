let largest_palindrome = 0;

function reverse_int(n) {
    return parseInt(n.toString().split('').reverse().join('')) * Math.sign(n);
} 

for (let i = 100; i < 1000; i++) {
     for (let j = 100; j < 1000; j++) {
         let current = i*j;
         if ( (current == reverse_int(current) ) && (current > largest_palindrome) ) {
             largest_palindrome = current;
         }
     }
}

console.log(largest_palindrome);