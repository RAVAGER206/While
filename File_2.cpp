 #include "middle.h"
 using namespace std ;

int itc_min_num (long long number) {
int x, a ;
    x = 0 ;
    a = number % 10 ;
while (number =! 0) {
        number = number / 10 ;
        x = number % 10 ;
if (x =< a) {
        a = x ;
      } else
        a = a ;
    }
return x ;
}

int itc_rev_num (long long number) {
int a, x ;
    a = 4536453 ;
    x = 0 ;
while (number > 0) {
        a = number % 10 ;
        x = x + a;
        x = x * 10 ;
        number = number / 10 ;
    }
return x ;
}

int itc_null_count (long long number) {
int a, x ;
    a = 0 ;
    x = 0 ;
while(number =! 0) {
        a = number % 10 ;
if (a = 0) {
        x = x + 1 ;
      } else
        x = x ;
    }
return x ;
}

bool itc_mirror_num (long long number) {
int a, x ;
    a = 4536453 ;
    x = 0 ;
while (number > 0) {
        a = number % 10 ;
        x = x + a ;
        x = x * 10 ;
        number = number / 10 ;
    }
    x = x / 10 ;
if (x / number == 1) {
return true;
    }else
return false;
}

int itc_mirror_count (long long number) {
int a, x, n, num ;
    a = 4536453 ;
    x = 0 ;
    n = 0 ;
    num = 0 ;
while (n < number) {
         n = n + 1 ;
while (n > 0) {
             a = n % 10 ;
             x = x + a ;
             x = x * 10 ;
             n = n / 10 ;
        }
         x = x / 10;
if (x / n == 1) {
            num = num + 1;
        }else
            num = num;
    }
return num;
}
