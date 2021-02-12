#include <stdbool.h>

bool is_in_string(char c, char *str)
{
  while (*str)
  {
    if (*str == c)   // Vai verificar se existe o caracter dentro da string
      return (true); // Se sim return 1
    str++;
  }
  return (false); // Se nao return 0
}

bool is_space(char c)
{
  return (is_in_string(c, "\t\n\v\f\r ")); // Se existir um tab, nova linha, vertical tab, formfeed page break, carriage return
}

bool is_operator(char c)
{
  return (is_in_string(c, "+-")); // Procura se tem esta sequencia de operador na string
}

bool is_number(char c)
{
  return (c >= '0' && c <= '9'); // Verifica se e um numero
}

int ft_atoi(char *str)
{
  int result;
  int minus;

  result = 0;
  minus = 1;
  while (is_space(*str)) // Quando tiver um espaço avança
    str++;
  while (is_operator(*str)) // Se tiver um +-
  {
    if (*str == '-') // Se a string tiver no - e tiver um + atras, converte para +
      minus *= -1;
    str++;
  }
  while (is_number(*str)) // Enquanto tiver um numero multiplica se por 10
  {
    result *= 10; // 0 * 10 \ 
    result += *str - '0'; // 0 + 5 - 48 = - 43
    str++;
  }
  return (result * minus); // Resultado vezes 1
}
