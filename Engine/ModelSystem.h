////////////////////////////////////////////////////////////////////////////////
// Filename: ModelSystem.h
////////////////////////////////////////////////////////////////////////////////
#ifndef _ModelSystem_H_
#define _ModelSystem_H_

//////////////
// INCLUDES //
//////////////
#include <d3d11.h>
#include <windows.h>
#include <xnamath.h>

////////////////////////////////////////////////////////////////////////////////
// Class name: ModelSystem
////////////////////////////////////////////////////////////////////////////////
class ModelSystem
{
private:

	struct VertexType
	{
		XMFLOAT3 position;
		XMFLOAT4 color;
	};

public:
	ModelSystem();
	ModelSystem(const ModelSystem&);
	~ModelSystem();

	bool Initialize(ID3D11Device*);
	void Shutdown();
	void Update(ID3D11DeviceContext*);

	int GetIndexCount();

private:

	bool InitializeBuffers(ID3D11Device*);
	void ShutdownBuffers();
	void RenderBuffers(ID3D11DeviceContext*);

private:
	ID3D11Buffer *m_pVertexBuffer, *m_pIndexBuffer;
	int m_iVertexCount, m_iIndexCount;
};

#endif
