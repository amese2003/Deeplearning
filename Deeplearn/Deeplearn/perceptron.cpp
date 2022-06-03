#include "pch.h"
#include "perceptron.h"

float perceptron::Dot(float* v1, float* v2, int size)
{
	float sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += v1[i] * v2[i];
	}

	return sum;
}

float perceptron::step(float v)
{
	return v > 0 ? 1 : 0;
}

float perceptron::forward(float* x, float* w, int size)
{
	float u = Dot(x, w, size);
	return step(u);
}

void perceptron::train(float* w, float* x, float t, float e, int size)
{
	float z = forward(x, w, size);
	for (int j = 0; j < size; j++)
	{
		w[j] += (t - z) * x[j] * e;
	}
}