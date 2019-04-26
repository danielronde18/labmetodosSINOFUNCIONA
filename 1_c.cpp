#include<iostream>
#include<cmath>

int main(void)
{
  std::cout.precision(16); // fija la precision en 16 cifras significativas
  std::cout.setf(std::ios::scientific); // hace que la impresión sea con notacion cientifica  
    
  std::prinf("%10.5le",var_imprimir);
    
 return 0;   
}

