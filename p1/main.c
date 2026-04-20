#include <stdio.h>

int main(void) 
{
  int target = 0;
  int guess = 0;
  int count = 0;

  scanf("%d", &target);

do
{
  scanf("%d", &guess);
  count++;
  
 if (guess > target)
   printf("%d>?\n", guess);
   
else if (guess < target)
  printf("%d<?\n", guess);
  
else
  printf("%d == ?\n", guess);

printf("%d", count);
} 
  
  while (guess != target);
    
  return 0;
}
