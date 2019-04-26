#include<iostream>
#include<cmath>
//#include <fstream.h>

int main(void)
{
  ofstream archivo("1_a.txt");
    
  std::cout.precision(16); // fija la precision en 16 cifras significativas
  std::cout.setf(std::ios::scientific); // hace que la impresión sea con notacion cientifica  
    
 return 0;   
}

