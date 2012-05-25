////////////////////////////////////////////////////////////////////////////////
// Filename: CameraSystem.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _CameraSystem_H_
#define _CameraSystem_H_


//////////////
// INCLUDES //
//////////////
#include <d3dx10math.h>

////////////////////////////////////////////////////////////////////////////////
// Class name: CameraSystem
////////////////////////////////////////////////////////////////////////////////
class CameraSystem
{
public:
	CameraSystem();
	CameraSystem(const CameraSystem&);
	~CameraSystem();

	void SetPosition(float, float, float);
	void SetRotation(float, float, float);

	D3DXVECTOR3 GetPosition();
	D3DXVECTOR3 GetRotation();

	void Update();
	void GetViewMatrix(D3DXMATRIX&);

private:
	float m_positionX, m_positionY, m_positionZ;
	float m_rotationX, m_rotationY, m_rotationZ;
	D3DXMATRIX m_viewMatrix;
};

#endif