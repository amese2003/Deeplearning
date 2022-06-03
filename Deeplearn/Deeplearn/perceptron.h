#pragma once


class perceptron
{
public:
	float Dot(float* v1, float* v2, int size);
	float step(float v);
	float forward(float* x, float* w, int size);
	void train(float* w, float* x, float t, float e, int size);
};

