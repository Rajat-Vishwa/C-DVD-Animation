#include <iostream>
#include <math.h>
#include <windows.h> 


using namespace std;

int dist(int x1, int y1, int x2, int y2){
    int dx = x2 - x1;
    int dy = y2 - y1;

    return sqrt((dx*dx) + (dy*dy));
}

int main(){
    int sclx = 21, scly = 21;
    int mx = sclx/2 , my = scly/2;

    int factor = (sclx+scly)/8;

    while(true){
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
        Sleep(150);
        system("cls");

        sclx += factor;
        scly += factor;

        if(factor >= (sclx+scly)/4 || factor <= (sclx+scly)/8) factor *= -1;
    }

    return 0;
}
