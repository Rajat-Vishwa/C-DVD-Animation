#include <iostream>
#include <math.h>
using namespace std;

int dist(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;

    return sqrtf((dx*dx) + (dy*dy));
}

int main(){
    int sclx = 71, scly = 71;
    int mx = sclx/2 , my = scly/2;
    
    for(int i=0; i<scly; i++){
        for(int j=0; j<sclx; j++){
            if(i <= scly/2){
                if(j <= sclx/2){
                    if(dist(j,i,round(sclx/4),round(scly/2)) == sclx/4){
                        cout << "# ";
                    }
                    else cout << ". ";
                }
                else{
                    if(dist(j,i,round(sclx * 3/4),round(scly/2)) == sclx/4){
                        cout << "# ";
                    }
                    else cout << ". ";
                }
            }
            else{
                if(j <= sclx/2){
                    float m = scly/sclx;
                    if(j == round((i - scly/2)/m)) cout << "# ";
                    else cout << ". ";
                }
                else{
                    float m = scly/sclx;
                    if(sclx-j == round((i - scly/2)/m)) cout << "# ";
                    else cout << ". ";
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
