//
// Created by burak on 29.02.2024.
//

#include <iostream>
using namespace std;

int main() {
    float carPrice = 200000;
    float totalEarningPercentage = 0.25;
    float totalEarning = carPrice * totalEarningPercentage;
    float costPercentage = 0.40;
    float cost = totalEarning * costPercentage;
    float outOfCost = totalEarning - cost;
    float commissionPercentage = 0.30;
    float commission = outOfCost * commissionPercentage;
    float profit = outOfCost - commission;

    cout<< carPrice << "TL'ye satılan bir arabadan;" << endl <<
                       "\t Elde edilen toplam kar: " << totalEarning << endl <<
                       "\t Maliyete ayrılan miktar: " << cost << endl <<
                       "\t Çalışanların komisyon miktarı: " << commission << endl <<
                       "\t Galerinin net karı: " << profit;

    return 0;
}
