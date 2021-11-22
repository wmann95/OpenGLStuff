#pragma once
#include "Shader.h"
#include "Triangle.h"
#include "World.h"
#include "NeuralNet.h"

class Cell
{
private:
	double energy = 100.0;
	double rotation;
	double velocity = 0.003;
	double xPos = 0;
	double yPos = 0.0;
	double scale = 0.0;
	double lifeTime = 0.0;
	glm::vec3 color = glm::vec3(0,0,0);
	Triangle triangle;
	Shader* shader;
	World* world = nullptr;
	NeuralNet* network;

public:
	Cell();
	Cell(const Cell&, double m);
	~Cell();
	void Update(int deltaTime);
	void Render();
	void Initialize(World* world);
	double getLifeTime();
	bool isAlive();
	Cell* mutate(double m);
};

