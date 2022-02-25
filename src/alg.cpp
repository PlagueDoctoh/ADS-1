// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (int i = 2; i <= (value/2);i++) {
    if ((value%i) == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int n_Prime = 0;
  while(n != 0) {
    for (int i = 0;i <= n;i++) {
      n_Prime++;
      if (checkPrime(n_Prime) == true) {
        n--;
        break;
      }
    }
  }
  return nPrime;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value++;
  if (checkPrime(value) != true)
    value++;
  else
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (uint64_t i = 1;i<hbound;i++) {
    if checkPrime(i) == true
      sum+=i;
  }
  return sum;
}
