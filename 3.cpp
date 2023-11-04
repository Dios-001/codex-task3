#include<iostream>
inline int addNumbers(int a, int b){
    return a+b;
}
int multiplyNumbers(int x, int y, int z=1){
    return x*y*z;
}
int main(){
    int sum = addNumbers(5,7);
    int product = multiplyNumbers(3,4);
    std::cout << "Addition of numbers: " << sum << '\n';
    std::cout << "Multiplication of number " << product;

}