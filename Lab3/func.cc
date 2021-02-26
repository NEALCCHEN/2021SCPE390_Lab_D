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
#include <math.h>

using namespace std;

// scalar functions
// 1
int sum(int a, int b)
{
  int add = 0;
  for (int i = a; i <= b; i++)
  {
    add += i;
  }
  return add;
}
int sum(int a, int b)
{
  //Jeremy Wong
  return a + b;
}
// 2
int prod(int a, int b)
{
  // Mitchell Reiff
  int prod = 1;
  for (int i = a; i <= b; i++)
  {
    prod = prod * i;
  }
  return prod;
}
// 3
int sumsq(int a, int b)
{
  // Weiliang Jordan Sun
  int num = 0;
  for (int i = a; i < b; i++)
  {
    num += (i * i);
  }
  int sum = num + (b * b);
  return sum;
}
// 4
bool isPrime(int a) {}
// Matthew Harshbarger
bool isPrime(int a) {
    bool isPrime = true;
    
    if (a == 0 || a == 1) {
        isPrime = false;
    }
    else    {
        for (int i = 2; i <= (a / 2); i++) {
            if (a % i == 0) {
                isPrime = false;
            }
        }
    }
    if (isPrime)
            cout << a << " is a prime number";
        else
            cout << a << " is not a prime number";
    return 0;
}

// 5
<<<<<<< HEAD
int countPrimes(int a, int b)
{
  == == == = int countPrimes(int a, int b)
  {
    // Quentin Jimenez
>>>>>>> 00be0a42e733a2f639a76a54580dae4b9e3a9f1f
    int primes = 0;
<<<<<<< HEAD
    for (int i = a; i < b; i++)
    {
      if (isPrime(a))
        count++;
      == == == = for (int i = a; i < b; i++)
      {
        if (isPrime(a))
          count++;
>>>>>>> 5fbfcf8026ac23dfd2b9583799d06409156e134a
      }
      return count;
    }
    // 6
    int gcd(int a, int b)
    {
      if (b == 0)
        return a;
      return gcd(b, a % b);
    }
    // 7
    int hypot(int a, int b) {}
    // 8
    int diffsq(int a, int b) {}
    // 9
    int mean2(int a, int b) {}
    // 10
    int mean3(int a, int b) {}
    // 11
    int min(int a, int b)
    {
      if (a < b)
      {
        cout << a << '\n';
      }
      else
      {
        cout << b << '\n';
      }
      return 0;
    }
    // 12
    int max(int a, int b)
    { // Matt Tricomi
      if (a > b)
        return a;

      else
        return b;
    }
    // 13
    bool isEven(int a)
    { // Dorzhi Denisov
      if (a % 2 == 0)
        return true;
      else
        return false;
    }

    
<<<<<<< HEAD
    == == == = return count;
  }
  // 6
  int gcd(int a, int b)
  {
    if (b == 0)
      return a;
    return gcd(b, a % b);
  }
  // 7
  int hypot(int a, int b) { return (sqrt(pow(a, 2) + pow(b, 2))); }
  // 8
  int diffsq(int a, int b) {}
  // 9 Joshua Kozohar
  int mean2(int a, int b)
  {
    int mean2(int a, int b)
    {
      return (a + b) / 2;
    }
  }
  // 10
  int mean3(int a, int b) {}
  // 11
  int min(int a, int b) {}
  // 12
  int max(int a, int b) {}
  // 13
  bool isEven(int a)
  { // Dorzhi Denisov
    if (a % 2 == 0)
      return true;
    else
      return false;
  }
>>>>>>> 92e85f2611f16133b845ad56808370a7c4f89ecf

  // 14
  double perimeter3(int x1, int y1, int x2, int y2, int x3, int y3)
  {
    double xy = 0;
    double zy = 0;
    double zx = 0;
    double per = 0;

    xy = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    zy = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    zx = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    per = xy + zy + zx;

    return per;
  }

  // array functions
  // 1
  double mean(int x[], int length)
  {
    double cat = 0.0;
    for (int i = 0; i < length; i++)
    {
      cat += x[i];
    }
    cat = cat / length;
    return cat;
  }
  double AAmean(int x[], int length)
  {
    double m = 0;
    double mean = 0;
    for (int i = 0; i <= length; i++)
    {
      m += x[i];
    }
    mean = m / (length + 1);
    cout << "the mean is " << mean << '\n';
    return 0;
  }
<<<<<<< HEAD
  // 2
  int max(int x[], int length){} == == == =
                                              // 2
      int max(int x[], int length)
  {
    // Mitchell Reiff
    int max = 0;
    for (int i = 0; i < length; i++)
    {
      if (max <= x[i])
      {
        max = x[i];
      }
    }
    return max;
  }
>>>>>>> 92e85f2611f16133b845ad56808370a7c4f89ecf

  // 3
  int min(int x[], int length)
  { // Dorzhi Denisov
    int output = x[0];
    for (int i = 0; i < length; i++)
    {
      if (output > x[i])
        output = x[i];
    }
    return output;
  }
  // 3
  /* Weiliang Jordan Sun
  int min(int x[], int length) {
    Weiliang Jordan Sun
    int num = 2147483647;
       for (int i = 0; i < length; i++) {
           if (num > x[i]) {
           num = x[i];
       }
  }
  return num;
}
*/

  // 4
  int prod(int x[], int length) {}

  // 4 shiddharath patel
  int prod(int a[], int length)
  {
    double product = 1;
    for (int i = 0; i < 0; i++)
    {
      product = product * a[i];
    }

    return product;
  }

<<<<<<< HEAD
  // 5
  int sum(int x[], int length)
  {
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
      sum += x[i];
    }
    return sum;
    == == == =
                 // 5
        int sum(int x[], int length)
    {
      // Quentin Jimenez
      int sum = 0;
      for (int i = 0; i < length; i++)
      {
        sum += x[i];
>>>>>>> 00be0a42e733a2f639a76a54580dae4b9e3a9f1f
      }
      int sum(int x[], int b)
      {
        //Jeremy Wong
        int total = 0;
        for (int i = 0; i < b; i++)
        {
          total += x[i];
        }
        return total;
      }
      // 6
      int demean(double x[], int length)
      {
        int asum = 0;
        int mean = 0;
        for (int i = 0; i < length; i++)
        {
          asum += x[i];
        }

        mean = asum / length;

        for (int i = 0; i < length; i++)
        {
          x[i] = x[i] - mean;
        }
        return 0;
      }

      // 7
      int addToEach(double x[], int length, int delta)
      {
        for (int i = 0; i < length; i++)
        {
          x[i] = x[i] + delta;
        }
      }

      for (int i = 0; i < length; i++)
      {
        x[i] = x[i] - mean;
      }
      return 0;
    }

    // 7
    int addToEach(double x[], int length, int delta) {}

    // 8
    int countEvens(int x[], int length)
    //Alex Gaskins
    {
      cout << "Here are how many even numbers are in the array: "
           << "\n";

      int a = 0;

      for (int i = 0; i <= length; i++)
      {
        if (x[i] % 2 == 0)
          a += 1;
      }
      cout << a << "\n";
      return 1;
    }
        
//Matthew Harshbarger        
    int countEvens(int x[], int length) {
    int evens = 0;
    for (int i = 0; i < length; i++) {
        if (x[i] % 2 == 0) {
          evens += 1;
        }
    }
    return evens;
}
    
    // 9 Joshua Kozohar
    int reverse(int x[], int length) void reverse(int x[], int length)
    {
      int a = 0;
      for (int i = 0; i < length / 2; i++)
      {
        a = x[i];
        x[i] = x[length - i - 1];
        x[length - i - 1] = a;
      }
      for (int i = 0; i < length; i++)
      {
        cout << x[i] << endl;
      };
    }

    {
      return 0;
    }

    // 10
    int round(double x[], int length) {}

    void print(int a[], int length)
    {
      for (int i = 0; i < length; i++)
      {
        cout << a[i] << " ";
        if (i == (length - 1))
        {
          cout << endl;
        }
      }
    }

<<<<<<< HEAD
    int main()
    {
      cout << sum(1, 3) << ' ' << sum(1, 100)
           << '\n'; // should work no problem, right?
      cout << sum(1, 1000000)
           << '\n'; // what should this be? Don't assume it's right, check!

      cout << prod(2, 5) << '\n'; // 2*3*4*5 = 120
      cout << prod(3, 10) << '\n';
      cout << prod(3, 20)
           << '\n';                // just note whether you think these are right
      cout << prod(3, 30) << '\n'; // if it overflows, you don't have to fix it
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
      cout << "arr avg=" << mean(arr, 4) << '\n';           // should be 2.5
      cout << "arr max=" << max(arr, 4) << '\n';            // should be 4
      cout << "arr max=" << min(arr, 4) << '\n';            // should be 1
      cout << "arr prod=" << prod(arr, 4) << '\n';          // should be 24
      cout << "arr sum=" << sum(arr, 4) << '\n';            // should be 10
      cout << "count evens=" << countEvens(arr, 4) << '\n'; // should be 10

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
    == == == = int main()
    {
      cout << sum(1, 3) << ' ' << sum(1, 100)
<<<<<<< HEAD
           << '\n'; // should work no problem, right?
      cout << sum(1, 1000000)
           << '\n';       // what should this be? Don't assume it's right, check!
      == == == = << '\n'; // should work no problem, right?
      cout << sum(1, 1000000)
           << '\n'; // what should this be? Don't assume it's right, check!
>>>>>>> 00be0a42e733a2f639a76a54580dae4b9e3a9f1f

      cout << prod(2, 5) << '\n'; // 2*3*4*5 = 120
      cout << prod(3, 10) << '\n';
      cout << prod(3, 20)
           << '\n';                // just note whether you think these are right
      cout << prod(3, 30) << '\n'; // if it overflows, you don't have to fix it
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
<<<<<<< HEAD
      int arr[] = {1, 4, 3, 2};
      cout << "arr avg=" << mean(arr, 4) << '\n';           // should be 2.5
      cout << "arr max=" << max(arr, 4) << '\n';            // should be 4
      cout << "arr max=" << min(arr, 4) << '\n';            // should be 1
      cout << "arr prod=" << prod(arr, 4) << '\n';          // should be 24
      cout << "arr sum=" << sum(arr, 4) << '\n';            // should be 10
      cout << "count evens=" << countEvens(arr, 4) << '\n'; // should be 10
      == == == = int arr[] = {1, 4, 3, 2};
      cout << "arr avg=" << mean(arr, 4) << '\n';           // should be 2.5
      cout << "arr max=" << max(arr, 4) << '\n';            // should be 4
      cout << "arr max=" << min(arr, 4) << '\n';            // should be 1
      cout << "arr prod=" << prod(arr, 4) << '\n';          // should be 24
      cout << "arr sum=" << sum(arr, 4) << '\n';            // should be 10
      cout << "count evens=" << countEvens(arr, 4) << '\n'; // should be 10
>>>>>>> 00be0a42e733a2f639a76a54580dae4b9e3a9f1f

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
>>>>>>> 92e85f2611f16133b845ad56808370a7c4f89ecf
