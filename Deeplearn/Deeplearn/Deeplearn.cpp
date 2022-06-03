#include "pch.h"

int main()
{
    perceptronRef percept = make_shared<perceptron>();

    float e = 0.1f;

    float x[DATA_NUMS][WEIGHT_NUMS] = {
        {1,0,0},
        {1,0,1},
        {1,0,1},
        {1,1,1}
    };

    float t[DATA_NUMS] = { 0,0,0,1 };
    float w[WEIGHT_NUMS] = { 0,0,0 };

    int epoch = 10;

    for (int i = 0; i < epoch; i++)
    {
        cout << "epoch : " << i << " ";

        for (int j = 0; j < DATA_NUMS; j++)
        {
            percept->train(w, x[j], t[j], e, WEIGHT_NUMS);
        }

        for (int j = 0; j < WEIGHT_NUMS; j++)
        {
            cout << "w" << j << ":" << w[j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < DATA_NUMS; i++)
    {
        cout << percept->forward(x[i], w, WEIGHT_NUMS) << " ";
    }

    cout << endl;

    return 0;
}
