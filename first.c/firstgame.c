#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int secretNumber, guess, attempts = 0;
  
  // Initialize random number generator
  srand(time(NULL));
  
  // Generate a random number between 1 and 100
  secretNumber = rand() % 100 + 1;
  
  printf("Welcome to the Guessing Game!\n");
  
  while (1) {
    printf("Enter your guess (1-100): ");
    scanf("%d", &guess);
    
    attempts++;
    
    if (guess < secretNumber) {
      printf("Too low! Try again.\n");
    } else if (guess > secretNumber) {
      printf("Too high! Try again.\n");
    } else {
      printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
      break;
    }
  }
  
  return 0;
}
