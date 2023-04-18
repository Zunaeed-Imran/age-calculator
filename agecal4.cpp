#include <iostream>
#include <ctime>

using namespace std;

int main() {
   int birth_year,birth_month, birth_date, current_year;

   time_t current_time = time(nullptr);
   tm* local_time = localtime(&current_time);
   current_year = local_time->tm_year + 1900;

    int current_month = local_time->tm_mon + 1;
    int current_date = local_time->tm_mday;


   cout << "Enter your birth year: ";
   cin >> birth_year;            
   cout << "Enter your birth Month: ";
   cin >> birth_month;            
   cout << "Enter your birth date: ";
   cin >> birth_date;            
            


   cout << current_year - birth_year <<" Year"<<endl;
   cout << current_month - birth_month <<" Month"<<endl;
   cout << current_date - birth_date <<" date"<<endl;
   return 0;
}
