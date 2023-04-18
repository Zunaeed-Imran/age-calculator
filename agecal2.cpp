#include <iostream>
#include <ctime>

using namespace std;

int main() {
   int birth_year, current_year, age;

   time_t current_time = time(nullptr);
   tm* local_time = localtime(&current_time);
   current_year = local_time->tm_year + 1900;

   cout << "Enter your birth year: ";
   cin >> birth_year;

   age = current_year - birth_year;

   cout << "Your age is: " << age << " years" << std::endl;
   return 0;
}
