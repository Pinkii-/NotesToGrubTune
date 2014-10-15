#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>

namespace Solfage {
  enum NOTES {
    DO,DOs,RE,MIb,MI,FA,FAs,SOL,SOLs,LA,SIb,SI
  };
};

namespace Absolute {
  enum NOTES {
    C,Cs,D,Eb,E,F,Fs,G,Gs,A,Bb,B
  };
};

std::vector<std::vector<int> > notas(12);  

int main () {
  float anterior = 16.35;
  float next;
  while (next <= 7500) {
    next = anterior*pow(2.f,1.f/12.f);
    anterior = next;
    std::cout << next << std::endl;
  }

  return 0;
}
