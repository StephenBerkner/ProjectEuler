num_to_find = 600851475143;

function largest_prime_factor(n) {
    let largest_prime_factor = 2;
    let divisor = 2;

    while (n >= 2 ) {
        if ( ( n % divisor) == 0 ) {
            largest_prime_factor = divisor;
            n = n / divisor;
        } else {
            divisor++;
        }
    }
    return divisor;
}

console.log(largest_prime_factor(num_to_find));