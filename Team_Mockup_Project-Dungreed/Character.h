#pragma once

class Character : public GameObject
{
protected:
	sf::Sprite body;
	Animator animator;

	std::vector<AnimationClip> animations;

	int hp;
	float speed;
	sf::Vector2f velocity;
	sf::Vector2f direction;

	std::string textureId;
	
public:
	Character(const std::string& name = "");
	virtual ~Character() = default;

	void SetTextureId(const std::string& id) { textureId = id; }

	virtual void SetPosition(const sf::Vector2f& pos) override = 0;
	virtual void SetRotation(float angle) override = 0;
	virtual void SetScale(const sf::Vector2f& scale) override = 0;

	virtual void SetOrigin(Origins preset) override = 0;
	virtual void SetOrigin(const sf::Vector2f& newOrigin) override = 0;

	virtual void Init() override = 0;
	virtual void Release() override = 0;
	virtual void Reset() override = 0;
	virtual void Update(float dt) override = 0;
	virtual void Draw(sf::RenderWindow& window) override = 0;
};