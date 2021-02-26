#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

uint16_t* arrcpy(uint32_t* src, unsigned count)
{
  unsigned size = count * sizeof(uint32_t);
  uint16_t* dest = new uint16_t[size / sizeof(uint16_t)];
  memcpy(dest, src, size);
  return dest;
}

int main()
{
  uint32_t src[] = {0, 5, 65541};
  uint32_t count = sizeof(src) / sizeof(src[0]);
  printf(" size: %lu bytes\n", sizeof(src));

  for (int idx = 0; idx != count; idx++) printf(" %d", src[idx]);
  printf(" \n");

  uint16_t* dest = arrcpy(src, count);
  count = sizeof(src) / sizeof(uint16_t);
  uint16_t* temp = dest;
  while (count--) printf(" %d", *temp++);
  printf(" \n");

  delete[] dest;
  return 0;
}
