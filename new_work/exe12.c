#include <stdio.h>

float strToFloat(const char *str) {
  float result = 0.0;
  int i = 0;
  int sign = 1; 
  int hasDecimal = 0; 
  float decimalPlace = 1.0; 

  
  if (str[0] == '-') {
    sign = -1;
    i++;
  }

  
  while (str[i] != '\0') {
    if (str[i] >= '0' && str[i] <= '9') {
      if (!hasDecimal) {
	result = result * 10 + (str[i] - '0'); 
      } else {
	result = result + (str[i] - '0') * decimalPlace; 
	decimalPlace *= 0.1; 
      }
    } else if (str[i] == '.') {
      hasDecimal = 1;
    }
    i++;
  }

  
  result *= sign;

  return result;
}

int main() {
  const char *str1 = "-867.6921";
  float value1 = strToFloat(str1);
  printf("String '%s' converted to float: %.4f\n", str1, value1); 

  const char *str2 = "123.456";
  float value2 = strToFloat(str2);
  printf("String '%s' converted to float: %.4f\n", str2, value2); 

  const char *str3 = "0.001";
  float value3 = strToFloat(str3);
  printf("String '%s' converted to float: %.4f\n", str3, value3);  

  return 0;
}
