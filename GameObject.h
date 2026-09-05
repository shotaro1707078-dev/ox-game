#pragma once

class  GameObject
{
public:

	// コンストラクタ
	GameObject();

	// デストラクタ
	virtual ~GameObject();

	// 座標を設定する
	void SetPosition(float x, float y);

	// 座標を取得する
	void GetX(float& x) const;
	void GetY(float& y) const;	


protected:

	// 座標
	
	// 横
	float x;	
	// 縦
	float y;

	// 縦横のサイズ

	// 横
	float width;
	// 縦
	float height;

};


