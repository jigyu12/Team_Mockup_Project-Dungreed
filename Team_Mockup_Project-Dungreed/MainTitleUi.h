#pragma once
#include "GameObject.h"
class MainTitleUi :
    public GameObject
{
public:
	enum class Staus
	{
		Aniplaytime,
		AniStoptime,
	};



protected:
	Staus status;
	
	//���ηε�
	sf::Sprite mainbody;

	//����ȭ�鱸��
	sf::Sprite backCloud;
	sf::Sprite frontCloud;

	//���� ȭ���ư
	sf::Sprite eixtButton;
	sf::Sprite playButton;

	sf::Sprite mainLogo;

	Animator animator;

	float aniTimer = 0.f;
	
public:
	MainTitleUi(const std::string& name = "MainTitleUi");
	~MainTitleUi() = default;

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

	void SetStatus(Staus status);
};
