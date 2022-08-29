#pragma once
#include "WickedEngine.h"

class EditorComponent;

class ArmatureWindow : public wi::gui::Window
{
public:
	void Create(EditorComponent* editor);

	EditorComponent* editor = nullptr;
	wi::ecs::Entity entity = wi::ecs::INVALID_ENTITY;
	void SetEntity(wi::ecs::Entity entity);
	void RefreshBoneList();

	wi::gui::Button resetPoseButton;
	wi::gui::TreeList boneList;

	void ResizeLayout() override;
};

