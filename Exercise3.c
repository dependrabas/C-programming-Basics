#include <stdio.h>

int isArmstrong(int num);
int isPrime(int num);
int factorial(int num);
int isPalindrome(int num);

int main() {
   int Num;
   printf("Enter any Number: ");
   scanf("%d", &Num);
   
   if (isArmstrong(Num)) {
      printf("%d is an Armstrong number.\n", Num);
   } else {
      printf("%d is not an Armstrong number.\n", Num);
   }

   if (isPrime(Num)) {
      printf("%d is a prime number.\n", Num);
   } else {
      printf("%d is not a prime number.\n", Num);
   }

   printf("Factorial of %d is %d\n", Num, factorial(Num));

   if (isPalindrome(Num)) {
      printf("%d is a palindrome.\n", Num);
   } else {
      printf("%d is not a palindrome.\n", Num);
   }

   return 0;
}

int isArmstrong(int Num) {
   int originalNum = Num, remainder, result = 0, n = 0;

   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }

   originalNum = Num;

   while (originalNum != 0) {
      remainder = originalNum % 10;
      result += pow (remainder, n);
      originalNum /= 10;
   }

   if (result == Num) {
      return 1;
   } else {
      return 0;
   }
}

int isPrime(int Num) {
   int i;

   for (i = 2; i <= sqrt(Num); ++i) {
      if (Num % i == 0) {
         return 0;
      }
   }

   return 1;
}

int factorial(int Num) {
   int i, fact = 1;

   for (i = 1; i <= Num; ++i) {
      fact *= i;
   }

   return fact;
}

int isPalindrome(int Num) {
   int reversedNum = 0, originalNum = Num;

   while (originalNum > 0) {
      reversedNum = reversedNum * 10 + originalNum % 10;
      originalNum /= 10;
   }

   if (Num == reversedNum) {
      return 1;
   } else {
      return 0;
   }
}
