#include <stdio.h>

int main(void)
{
int N=0;
scanf("%d", &N);

int lc = 0, dc = 0;
int ml = 0, md = 0;

char ch = 0;

for(int i = 0; i < N; i++)
{
if (scanf(" %c", &ch) != 1) break;

if(ch >= 'a' && ch <='z')
{
  lc += 1; 
  dc = 0;
}

else if (ch >= '0' && ch <= '9')
{
  dc += 1;
  lc = 0;
}
else
{
lc = 0;
dc = 0;
}
if (lc > ml)
{
  ml = lc;
}
if (dc > md)
{
  md = dc;
}
}
  printf("%d\n", ml);
  printf("%d\n", dc);
  
return 0;
}
