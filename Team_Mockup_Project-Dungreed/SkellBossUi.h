#pragma once
#include "GameObject.h"

class SkellBoss;

class SkellBossUi : public GameObject
{
protected:
	sf::Sprite skellBossHp;
	
	sf::Sprite redBar;
	sf::Sprite bossHpBarBack;

	SkellBoss* skellBoss;

	bool isBgmPlaying;
public:

	SkellBossUi(const std::string& name = "SkellBossUi");
	~SkellBossUi() = default;

	void SetPosition(const sf::Vector2f& pos) override;
	void SetRotation(float angle) override;
	void SetScale(const sf::Vector2f& scale) override;

	void SetOrigin(Origins preset) override;
	void SetOrigin(const sf::Vector2f& newOrigin) override;


	void Init() override;
	void Release() override;
	void Reset() override;
	void Update(float dt) override;
	void Draw(sf::RenderWindow& window) override;
	
};

