#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int b_y, b_m, b_d;

  time_t current_time = time(nullptr);
  tm* local_time = localtime(&current_time);

  int c_y = local_time->tm_year + 1900;
  int c_m = local_time->tm_mon + 1;
  int c_d = local_time->tm_mday;

  cout <<"Enter Your Birth Year: ";
  cin >> b_y;
  cout << "Enter YOur Birth Month: ";
  cin >> b_m;
  cout << "Enter Your Birth Day: ";
  cin >> b_d;

  cout << c_y - b_y << " year" << endl;

  if (b_m >= c_m) {
    cout << (c_m + 12) - (b_m +1) << " Month" << endl;
  }else {
      cout << c_m - b_m << " Month" << endl;
  }

  if(b_d >= c_d){
   cout << (c_d + 30) - (b_d -1) << " Day" << endl;
  } else{
    cout << c_d - b_d << " Day" << endl;
  }

  // cout << c_y - b_y << " year" << endl;
  // cout << c_m - b_m << " Month" << endl;
  // cout << c_d - b_d << " Day" << endl;

  return 0;
}