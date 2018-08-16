#include <iostream> // cout
#include <iomanip>  // 

int get_fib_input(int max)
{
  int input;

  do
  {
    std::cout << "Enter the Fibonacci number to calculate.\n";
    std::cout << "The number must be between 2 and " << max << ".";
    std::cout << " Enter 1 to quit: ";
    std::cin >> input;
  } while (input < 1 || input > max);

  return input;
}

void fibonacci(int max)
{
  std::cout << "           Fibonacci        Fibonacci" << std::endl;
  std::cout << " N           number          quotient" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << " 0             0                  N/A" << std::endl;
  std::cout << " 1             1                  N/A" << std::endl;

  int count = max;
  int fib1 = 0, fib2 = 1;
  for (int i = 2; i <= count; i++)
  {
    double next = (fib1 + fib2);
    double fibQuot = (next / fib2);

     std::cout << std::setw(2) << std::noshowpoint << i; 
     std::cout << std::setw(14) << std::noshowpoint << next;
     std::cout << std::setw(21) << std::setprecision(17) << std::showpoint << fibQuot << std::endl;

    fib1 = fib2;
    fib2 = next;
  }
}
