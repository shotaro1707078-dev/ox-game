#include "GameObject.h"


// コンストラクタ
GameObject::GameObject()
{
	
	float x = 0.0f;

	float y = 0.0f;

	float width = 0.0f;

	float height = 0.0f;


}
// 座標に関する処理を行う
void GameObject::SetPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}
// X座標を取得する
void GameObject::GetX() const
{
	return x;	
}
// Y座標を取得する
void GameObject::GetY() const
{
	return y;	
}