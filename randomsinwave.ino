
#include <MicroView.h>
int delaytime = 1;
void setup() {
  uView.begin();
  uView.clear(PAGE);
}

void loop () {
  delaytime = random(0,3);
  int i;
  float rad,srad, x,y;
  int amp=20;
  int nPhase=360*random(1,3);

  for(i=0; i<nPhase;i++) {
    x=i;
    x=x*0.017453;
    y= sin(x);
    y=y*amp;  // amplitude
    y=y+24;
    x=(double)64/(double)nPhase;
    x=x*i;
    uView.pixel(x, y);
    uView.display();
    delay(delaytime);
  }


  uView.display();
  uView.clear(PAGE);
}
