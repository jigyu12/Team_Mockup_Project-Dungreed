#pragma once

class UiEditor;
class TileMap;

class SceneMapEdit :
	public Scene
{
protected:
	UiEditor* uiEditor;

	TileMap* tileMap;

	sf::Vector2f centerpos;

	float speed;

public:
	SceneMapEdit();
	~SceneMapEdit() = default;

	void Init() override;
	void Enter() override;
	void Exit() override;

	void Update(float dt) override;
	void Draw(sf::RenderWindow& window) override;

	void Save();
	void Load();
};
