// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  for (int i = 2; i <= (value/2); i++) {
    if ((value%i) == 0 || value <= 1)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int n_Prime = 0;
  for (; ;) {
    n_Prime++;
    if (checkPrime(n_Prime) == true) {
      n--;
    }
    if (n == 0) {
      break;
    }
  }
  return n_Prime;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t c = 1;
  while (checkPrime(value+c) != true) {
    c++;
  }
  return value+c;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i) == true)
      sum+=i;
  }
  return sum;
}
