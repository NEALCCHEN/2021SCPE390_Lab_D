/*
        Lab1 Team Programming
        Author: Dov Kruger
        For a description of each function, see:
        https://docs.google.com/document/d/1eTLecRiJJdQkS6OWDgNIhECLfIvyYP_-EdfwistiT8U/edit?usp=sharing
*/
#include <cmath>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// scalar functions
// 1
int sum(int a, int b) {}
// 2
int prod(int a, int b) {}
// 3
int sumsq(int a, int b) {}
// 4
bool isPrime(int a) {}
// 5
int coutPrimes(int a, int b) {}
// 6
int gcd(int a, int b) {}
// 7
int hypot(int a, int b) {}
// 8
int diffsq(int a, int b) {}
// 9
int mean2(int a, int b) {}
// 10
int mean3(int a, int b) {}
// 11
int min(int a, int b) {}
// 12
int max(int a, int b) {}
// 13
bool isEven(int a) {}

// 14
double perimeter3(int x1, int y1, int x2, int y2, int x3, int y3) {}

// array functions
// 1
double mean(int x[], int length) {}

// 2
int max(int x[], int length) {}

// 3
int min(int x[], int length) {}

// 4
int prod(int x[], int length) {}

// 5
int sum(int x[], int length) {}

// 6
int demean(double x[], int length) { return 0; }

// 7
int addToEach(double x[], int length, int delta) {}

// 8
int countEvens(int x[], int length) {}

// 9
int reverse(int x[], int length) { return 0; }

// 10
int round(double x[], int length) {}

void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    cout << a[i] << " ";
    if (i == (length - 1)) {
      cout << endl;
    }
  }
}

int main() {
  cout << sum(1, 3) << ' ' << sum(1, 100)
       << '\n';  // should work no problem, right?
  cout << sum(1, 1000000)
       << '\n';  // what should this be? Don't assume it's right, check!

  cout << prod(2, 5) << '\n';  // 2*3*4*5 = 120
  cout << prod(3, 10) << '\n';
  cout << prod(3, 20) << '\n';  // just note whether you think these are right
  cout << prod(3, 30) << '\n';  // if it overflows, you don't have to fix it
  cout << prod(3, 100) << '\n';
  cout << sumsq(1, 5) << '\n';
  cout << "countPrimes(1,100): " << countPrimes(1, 100) << '\n';
  cout << "countPrimes(1,1000000): " << countPrimes(1, 1000000) << '\n';
  cout << "isPrime(1001)=" << isPrime(1001) << '\n';
  cout << "gcd(12, 18)=" << gcd(12, 18) << '\n';
  cout << "gcd(1025, 3025)=" << gcd(1025, 3025) << '\n';
  cout << "hypot(3,4)=" << hypot(3, 4) << '\n';
  cout << "hypot(4,5)=" << hypot(4, 5) << '\n';
  cout << "diffsq(3,4)=" << diffsq(3, 4) << '\n';
  cout << "mean(1,4)=" << mean2(1, 4) << '\n';
  cout << "mean(1,4,5)=" << mean3(1, 4, 5) << '\n';
  cout << "max(1,5)=" << max(1, 5) << '\n';
  cout << "min(2,5)=" << min(2, 5) << '\n';
  cout << "isEven(5)=" << isEven(5) << '\n';
  cout << "perimeter of tri=" << perimeter3(0, 0, 3, 0, 3, 3) << '\n';

  // array problems
  int arr[] = {1, 4, 3, 2};
  cout << "arr avg=" << mean(arr, 4) << '\n';            // should be 2.5
  cout << "arr max=" << max(arr, 4) << '\n';             // should be 4
  cout << "arr max=" << min(arr, 4) << '\n';             // should be 1
  cout << "arr prod=" << prod(arr, 4) << '\n';           // should be 24
  cout << "arr sum=" << sum(arr, 4) << '\n';             // should be 10
  cout << "count evens=" << countEvens(arr, 4) << '\n';  // should be 10

  int arr2[] = {5, 6, 7, 8, 9, 10, 2, 1};
  cout << "arr avg=" << mean(arr2, 8) << '\n';
  cout << "arr max=" << max(arr2, 8) << '\n';
  cout << "arr max=" << min(arr2, 8) << '\n';
  cout << "arr prod=" << prod(arr2, 8) << '\n';
  cout << "arr sum=" << sum(arr2, 8) << '\n';

  double arr3[6] = {1, 2, 3, 4, 5, 6};
  demean(arr3, sizeof(arr3) / sizeof(double));
  print(arr3, 6);

  double arr7[] = {2.5, 2.8, 3.1, 4.2, 9.6, 7.1, -7.3, -7.6};
  round(arr7, sizeof(arr7) / sizeof(double));
  print(arr7, sizeof(arr7) / sizeof(double));

  cout << "countevens=" << countEvens(arr6, 7) << '\n';
  addToEach(arr6, 7, 3);
  print(arr6, sizeof(arr6) / sizeof(double));

  int r1[] = {1, 2, 3, 4, 5, 6, 7};
  reverse(r1, 7);
  print(r1, 7);

  int r2[] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(r2, 8);
  print(r2, 8);
}
