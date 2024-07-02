#include <iostream>
#include <string>
#include <limits.h>
#include <stdio.h>
#include <math.h>
#include "myfunctions.h"

using namespace std;

int main() {
    std::vector<std::vector<double>> inputVectorSet = vectorSetGen(10, 4);
    std::vector<std::vector<double>> outputVectorSet = inputVectorSet;

    outputVectorSet[0] = normalize(inputVectorSet[0]);

    for(int a = 1; a <= 4; a++)
    {
        std::vector<double> g = inputVectorSet[a];
        for(int m = 0; m < a; m++)
        {
            g = removeProjection(g, outputVectorSet[m]);
        }
        outputVectorSet[a] = normalize(g);
    }

    for(int col = 0; col <= 4; col++)
    {
        for(int row = 0; row <= 12; row++)
        {
            cout << outputVectorSet[col][row] << " ";
        }
        cout << endl;
    }

    return 0;
}