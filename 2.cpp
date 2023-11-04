#include <iostream>
enum Days{ Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int calculateDaysRemaining(Days today){
return 6-today;
}
int main(){
   Days currentDay = Wednesday;
   int daysRemaning = calculateDaysRemaining(currentDay);
   std::cout << daysRemaning;
   return 0;
}