// dirbaio's code (https://github.com/Dirbaio)
#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>

using namespace std;

const int rate = 44100;

int main() {
  int bpm;
  cin>>bpm;
  int hz, t;
  while(cin>>hz>>t) {
    int samples = rate * t * 60/bpm;
    float s = 0;
    float adv = float(hz)/rate;
    for(int i = 0; i < samples; i++) {
      s += adv;
      if(s < 0.5)
        putchar(0x00);
      else
        putchar(0xFF);
      s -= floor(s);
    }
  }
}

//echo 2600 659 3 0 1 659 4 0 4 659 4 0 4 525 3 0 1 659 5 0 3 783 7 | ./play | aplay -r 44100
