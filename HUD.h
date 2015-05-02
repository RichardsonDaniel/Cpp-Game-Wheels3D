#pragma once
#include "Object.h"
#include "Wheel.h"

class HUD :
	public Object
{
public:
	HUD() {}
	~HUD();

	void Initialize();
	void Update();
	void Render();
	void HandleEvents() {}
	void AttachPlayer(Wheel* user) { player = user; }
	
	std::string text;
	GLuint plane;
	int indexCount;
	Light light;
	Material material;
	float* speed;
	double* timer;
	double lapTime;
	int* gear;
	GLuint SpeedTexture;
	GLuint TimerTexture;
	GLuint GearTexture;
	GLuint hud[2];
	GLuint StopLight[4];
	GLuint DamageTexture[4];
	GLuint DamageText;
	int *leftLevel, *rightLevel, *gearStatus;
	bool showStopLight;
	int stopLightDelay;
	int lamp; 
	Wheel* player;
	GLuint sens_on, sens_off, happy_on, happy_off, shield_on, shield_off, turbo_on, turbo_off, rev_on, rev_off;
	GLuint *sens, *happy, *shield, *turbo, *rev;
};

