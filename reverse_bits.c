#include <unistd.h>

unsigned char reverse_bits(unsigned char b)
{
  unsigned char  rev;
  unsigned    byte_len;

  rev = 0;
  byte_len = 8;

  while (byte_len--)
  {
    rev = (rev << 1) | (b & 1);
    b >>= 1;
  }
  return (rev);
}

int main(void)
{
    unsigned char c;

    c = reverse_bits('d');
    write(1, &c, 1);
    //       char = binary
    // char     d = 01100100      // d karekterinin binary bazında terse çevirlince
    // reverse  d = 00100110 = &  // & ve karakterinin karşılığı elde edilir.
    // 'd' karakterinin binary tersi '&' ekrana yazsırılır.
    return (0);
}
