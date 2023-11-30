#include <stdio.h>
int main()
{
  
  int value = 10;
  printf("\nGia tri cua `value` = %d", value);
  printf("\nDia tri cua `value` = %d", &value);
  printf("\n-------------------\n");
  int *p = &value;
  printf("\nGia tri cua con tro `p` = %d", p);
  printf("\nDia tri cua con tro `p` = %d", &p);
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
  printf("\n-------------------\n");
  printf("\nGia tri cua `value` = %d", value);
  
  *p = 100;
  printf("\nGia tri cua `value` = %d", value);
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
  printf("\n-------------------\n");

  value = 1000;
  printf("\nGia tri cua `value` = %d", value);
  printf("\nGia tri cua bien ma con tro `p` dang tro toi = %d", *p);
  return 0; 
}
