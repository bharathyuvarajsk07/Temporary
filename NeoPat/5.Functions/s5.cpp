#include <iostream>
using namespace std;
void swap(int, int);
 
int main(){
   int x, y;
   cin >> x >> y;
   cout << "Before Swapping\nx = " << x << "\ny = " << y << "\n";
   swap(x, y); 
   return 0;
}
void swap(int x, int y){
   int temp;
   temp = y;
   y = x;
   x = temp;
   cout << "After Swapping\nx = " << x << "\ny = " << y;
}
 
