#include <bits/stdc++.h>
using namespace std;

int main(){
    int nParticipants, budget, hotels, weeks;
    cin >> nParticipants >> budget >> hotels >> weeks;

    int minimumCost = 0, minimumCostCurrent, isSuitable = 0;
    int pricePerson, bedsWeek;
    for (int i = 0; i < hotels; i++){
        cin >> pricePerson;
        minimumCostCurrent = nParticipants * pricePerson;
        if(minimumCost == 0 || minimumCostCurrent < minimumCost){
            minimumCost = minimumCostCurrent;
        }

        for(int j = 0; j < weeks; j++){
            cin >> bedsWeek;
            if(bedsWeek >= nParticipants && minimumCostCurrent <=  budget){
                isSuitable = 1;
            }
        }
        if(!isSuitable){
            minimumCost = 0;
        }
    }
    if(isSuitable){
        cout << minimumCost << endl;
    }else{
        cout << "stay home" << endl;
    }

    return 0;
}