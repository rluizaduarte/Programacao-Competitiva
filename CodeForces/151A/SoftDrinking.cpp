#include <iostream>
using namespace std;

int main(){
    int amigos, garrafas, mlporgarrafa, limoes, pedacoporlimao, sal, mlporpessoa, salporpessoa;
    cin >> amigos >> garrafas >> mlporgarrafa >> limoes >> pedacoporlimao >> sal >> mlporpessoa >> salporpessoa; 
    
    int mltotal = garrafas * mlporgarrafa; 
    int drinks = mltotal / mlporpessoa;    
    int limoestotais = limoes * pedacoporlimao;
    int salpordrink = sal / salporpessoa;
    if(sal < salporpessoa || drinks < 1 || limoestotais < amigos){
        cout << 0 << endl;
    }else if(drinks < limoestotais && drinks < salpordrink){
        cout << drinks / amigos << endl;
    }else if(limoestotais < drinks && limoestotais < salpordrink){
        cout << limoestotais / amigos << endl;
    }else{
        cout << salpordrink / amigos << endl;
    }

    return 0;
}
