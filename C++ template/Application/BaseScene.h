#pragma once
#include "../Core/Scene.h"

class BaseScene : public Core::Scene
{
	void OnStart() override;
	void OnUpdate() override;
	void OnImGuiRender() override;
};