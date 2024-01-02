#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // Creating a pointer to an array that points to the last character
  int *ptr = &arr[9];

  // Looping through it and printing the last characters of an array
  for (int i=0; i < 10; i++){
    printf("%d\n", *ptr);
    ptr -= 1;
  }

  // Creating a pointer that points to first element of a string 
  char *ptr2 = &s[0];

  // Looping through the string and replacing the characters with #
  for (int i=0; i < strlen(s); i++){
    *ptr2 = '#';
    ptr2++; 
  }
  printf("%s\n", s);  
  return 0;
}