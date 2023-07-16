//COde
public:
    int isPrime(int N){
        // code here
        if (N < 2) {
    return false;
  }

  // Iterate through all the numbers from 2 to sqrt(number).
  for (int i = 2; i * i <= N; i++) {
    // If the number is divisible by any of the numbers from 2 to sqrt(number), it is not a prime number.
    if (N % i == 0) {
      return false;
    }
  }

  // The number is a prime number.
  return true;
}
};
