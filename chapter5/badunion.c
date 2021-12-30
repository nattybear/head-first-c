#include <stdio.h>

typedef union {
  float weight;
  int count;
} cupcake;

int main()
{
  // By mistake, the
  // programmer has set the
  // weight, not the count
  cupcake order = {2};

  // She set the weight, but
  // she's reading the count
  printf("Cupcakes quantity: %i\n", order.count);
  return 0;
}
