#include <iostream>
#include <ctime>
using namespace std;

bool is_leap_year(int year){
  return  year %400 ==0 ||(year %4 ==0 && year % 100 != 0);
}

int days_in_month(int month, int year){
  switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
     return 31;
     break;
    case 4:
    case 6:
    case 9:
    case 11:
     return 30;
     break;
    case 2:
      if (is_leap_year(year)) 
        return 29;
      else
        return 28;
      break;
        default:
        break;    
  }
  return 0;
}

int main(){
  int b_y, b_m, b_d, a_y, a_m, a_d;

  time_t current_time = time(nullptr);
  tm* local_time = localtime(&current_time);

  int c_y = local_time->tm_year + 1900;
  int c_m = local_time->tm_mon + 1;
  int c_d = local_time->tm_mday;


  cout << "Enter your Birth Year: ";
  cin >> b_y;

  cout << "Enter your Birth Month: ";
  cin >> b_m;

  cout <<"Enter your Birth day: ";
  cin >> b_d;

  a_y = c_y - b_y;
  a_m = c_m - b_m;
  a_d = c_d - b_d;

  if (a_d < 0) {
    a_d = a_d + days_in_month(b_m, b_y);
    a_m -= 1;
  }

  if (a_m < 0){
    a_m += 12;
    a_y -= 1;
  }

  cout << a_y << " Year "<<a_m<< " Month "<<a_d<<" day"<<endl;

  return 0;
}