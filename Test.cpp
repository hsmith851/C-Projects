#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;

int main(){
  double number, root, ans,result1,result2,result3,result4,result5,result6,result7,result8,result9,result10,result11,result12,result13,result14,result15,result16,result17,result18,result19,result20;
  cout << "Enter a number: ";
  cin >> number;

  root = sqrt(number);
  cout << "Square root of " << number << " is " << root;

  ans = cbrt(number);
  cout << "\n Cube Root of " << number << " is: " << ans;

  result1 = cos(number);
  cout << "\n Cos of " << number << " is: " << result1;

  result2 = sin(number);
    cout << "\n Sin of " << number << " is: " << result2;

  result3 = tan(number);
    cout << "\n Tan of " << number << " is: " << result3;

   result4 = acos(number);
     cout << "\n Arc Cos of " << number << " is: " << result4;

   result5 = asin(number);
     cout << "\n Arc Sin of " << number << " is: " << result5;

   result6 = atan(number);
     cout << "\n Arc Tan of " << number << " is: " << result6;

     result7 = cosh(number);
     cout << "\n Hyperbolic Cos of " << number << " is: " << result7;


    result8 = sinh(number);
      cout << "\n Hyperbolic Sin of " << number << " is: " << result8;


   result9 = tanh(number);
    cout << "\n Hyperbolic Tan of " << number << " is: " << result9;

    result10 = acosh(number);
    cout << "\n Area Hyperbolic Cos of " << number << " is: " << result10;

    result11 = asinh(number);
    cout << "\n Area Hyperbolic Sin of " << number << " is: " << result11;

    result12 = atanh(number);
    cout << "\n Area Hyperbolic Tan of " << number << " is: " << result12;

    result13 = exp(number);
        cout << "\n Exp of " << number << " is: " << result13;

    result14 = log(number); // @suppress("Invalid arguments")
    cout << "\n Log of " << number << " is: " << result14;

    result15 = log10(number); // @suppress("Function cannot be resolved")
    cout << "\n Log10 of " << number << " is: " << result15;

    result16 = exp2(number); // @suppress("Function cannot be resolved")
        cout << "\n Binary exponential function of " << number << " is: " << result16;

    result17 = expm1(number); // @suppress("Function cannot be resolved")
        cout << "\n Exponential minus one  of " << number << " is: " << result17;

    result18 = ilogb(number); // @suppress("Function cannot be resolved")
      cout << "\n Integer binary logarithm of " << number << " is: " << result18;

    result19 = log1p(number); // @suppress("Function cannot be resolved")
    cout << "\n Logarithm plus one of " << number << " is: " << result19;

    result20 = log2(number); // @suppress("Function cannot be resolved")
        cout << "\n Binary logarithm of " << number << " is: " << result20;



  return 0;
}


