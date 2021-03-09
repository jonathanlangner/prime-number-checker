#include <iostream>
#include <cmath>

bool isPrime(int num) 
{
   if(num > 1)
    {
      if(num % 2 == 0 && num != 2) {return false;} 
      else if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13) {return true;}
      else if(num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0){return false;}
      for(int i = 17; i <= sqrt(num); i += 2)
      {
        if(num == i){return true;}
        else if (num % i == 0 && i != num){return false;}   
      }
      {return true;}
    }
   else {return false;}
}


int main(){

std::cout << isPrime(20);
std::cout << isPrime(37);
std::cout << isPrime(12);
std::cout << isPrime(53);
std::cout << isPrime(1);
std::cout << isPrime(0);
std::cout << isPrime(19);

return 0;

}