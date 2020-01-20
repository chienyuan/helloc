#include <iostream>

int main() {
    std::cout << "Hello, World!!" << std::endl;
    int w = 5;
    // i  j  s 
    //      w-i
    // 0  1  4          * 
    // 1  3  3         *** 
    // 2  5  2        ***** 
    // 3  7  1       ******* 
    // 4  9  0      *********
    for( int i = 0 ; i < w ; i++ ){
      for(int s=1;s< w-i; s++ )
        std::cout << " ";
      for( int j = 0 ; j < (i*2) + 1 ; j++) {
        std::cout << "*";
      }
      std::cout << std::endl;
    }
    return 0;
}
