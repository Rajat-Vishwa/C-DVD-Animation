#include <iostream>
#include <windows.h> 
using namespace std;

const int sclx = 15, scly=10;

int main(){
    int posx=0, posy=0;
    int signx = -1, signy = -1;
    while(true){
        for(int i=0;i<scly;i++){
            for(int j=0; j<sclx; j++){  
                if(j==posx && i==posy) cout << "O ";         
                else cout << ". ";       
            }
            cout << '\n';
        }
        Sleep(100); 
        system("cls"); 
        if(posx == sclx-1 || posx == 0){
            signx *= -1;
        } 
        posx += signx; 

        if(posy == scly-1 || posy == 0){
            signy *= -1;
        } 
        posy += signy;
    }
    return 0;
}
