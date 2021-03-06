/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3d11shader.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Nov 20 15:48:24 2016
 \date		Modified on Sun Nov 20 15:48:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __D3D11SHADER_H__
#define __D3D11SHADER_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <d3dcommon.h>
typedef enum D3D11_SHADER_VERSION_TYPE
{
    D3D11_SHVER_PIXEL_SHADER    = 0,
    D3D11_SHVER_VERTEX_SHADER   = 1,
    D3D11_SHVER_GEOMETRY_SHADER = 2,
    D3D11_SHVER_HULL_SHADER     = 3,
    D3D11_SHVER_DOMAIN_SHADER   = 4,
    D3D11_SHVER_COMPUTE_SHADER  = 5,
} D3D11_SHADER_VERSION_TYPE;
#define D3D11_SHVER_GET_TYPE(_Version)		(((_Version) >> 16) & 0xffff)
#define D3D11_SHVER_GET_MAJOR(_Version)		(((_Version) >> 4) & 0xf)
#define D3D11_SHVER_GET_MINOR(_Version)		(((_Version) >> 0) & 0xf)
typedef D3D_RESOURCE_RETURN_TYPE D3D11_RESOURCE_RETURN_TYPE;
typedef D3D_CBUFFER_TYPE D3D11_CBUFFER_TYPE;
typedef struct _D3D11_SIGNATURE_PARAMETER_DESC
{
    LPCSTR                      SemanticName;
    UINT                        SemanticIndex;
    UINT                        Register;
    D3D_NAME                    SystemValueType;
    D3D_REGISTER_COMPONENT_TYPE ComponentType;
    BYTE                        Mask;
    BYTE                        ReadWriteMask;
    UINT Stream;
} D3D11_SIGNATURE_PARAMETER_DESC;
typedef struct _D3D11_SHADER_BUFFER_DESC
{
    LPCSTR                  Name;
    D3D_CBUFFER_TYPE        Type;
    UINT                    Variables;
    UINT                    Size;
    UINT                    uFlags;
} D3D11_SHADER_BUFFER_DESC;
typedef struct _D3D11_SHADER_VARIABLE_DESC
{
    LPCSTR                  Name;
    UINT                    StartOffset;
    UINT                    Size;
    UINT                    uFlags;
    LPVOID                  DefaultValue;
    UINT                    StartTexture;
    UINT                    TextureSize;
    UINT                    StartSampler;
    UINT                    SamplerSize;
} D3D11_SHADER_VARIABLE_DESC;
typedef struct _D3D11_SHADER_TYPE_DESC
{
    D3D_SHADER_VARIABLE_CLASS   Class;
    D3D_SHADER_VARIABLE_TYPE    Type;
    UINT                        Rows;
    UINT                        Columns;
    UINT                        Elements;
    UINT                        Members;
    UINT                        Offset;
    LPCSTR                      Name;
} D3D11_SHADER_TYPE_DESC;
typedef D3D_TESSELLATOR_DOMAIN D3D11_TESSELLATOR_DOMAIN;
typedef D3D_TESSELLATOR_PARTITIONING D3D11_TESSELLATOR_PARTITIONING;
typedef D3D_TESSELLATOR_OUTPUT_PRIMITIVE D3D11_TESSELLATOR_OUTPUT_PRIMITIVE;
typedef struct _D3D11_SHADER_DESC
{
    UINT                    Version;
    LPCSTR                  Creator;
    UINT                    Flags;
    UINT                    ConstantBuffers;
    UINT                    BoundResources;
    UINT                    InputParameters;
    UINT                    OutputParameters;
    UINT                    InstructionCount;
    UINT                    TempRegisterCount;
    UINT                    TempArrayCount;
    UINT                    DefCount;
    UINT                    DclCount;
    UINT                    TextureNormalInstructions;
    UINT                    TextureLoadInstructions;
    UINT                    TextureCompInstructions;
    UINT                    TextureBiasInstructions;
    UINT                    TextureGradientInstructions;
    UINT                    FloatInstructionCount;
    UINT                    IntInstructionCount;
    UINT                    UintInstructionCount;
    UINT                    StaticFlowControlCount;
    UINT                    DynamicFlowControlCount;
    UINT                    MacroInstructionCount;
    UINT                    ArrayInstructionCount;
    UINT                    CutInstructionCount;
    UINT                    EmitInstructionCount;
    D3D11_PRIMITIVE_TOPOLOGY   GSOutputTopology;
    UINT                    GSMaxOutputVertexCount;
    D3D_PRIMITIVE           InputPrimitive;
    UINT                    PatchConstantParameters;
    UINT                    cGSInstanceCount;
    UINT                    cControlPoints;
    D3D_TESSELLATOR_OUTPUT_PRIMITIVE HSOutputPrimitive;
    D3D_TESSELLATOR_PARTITIONING HSPartitioning;
    D3D_TESSELLATOR_DOMAIN  TessellatorDomain;
    UINT cBarrierInstructions;
    UINT cInterlockedInstructions;
    UINT cTextureStoreInstructions;
} D3D11_SHADER_DESC;
typedef struct _D3D11_SHADER_INPUT_BIND_DESC
{
    LPCSTR                      Name;
    D3D_SHADER_INPUT_TYPE       Type;
    UINT                        BindPoint;
    UINT                        BindCount;
    UINT                        uFlags;
    D3D_RESOURCE_RETURN_TYPE    ReturnType;
    D3D_SRV_DIMENSION           Dimension;
    UINT                        NumSamples;
} D3D11_SHADER_INPUT_BIND_DESC;
typedef interface ID3D11ShaderReflectionType ID3D11ShaderReflectionType;
typedef interface ID3D11ShaderReflectionType *LPD3D11SHADERREFLECTIONTYPE;
typedef interface ID3D11ShaderReflectionVariable ID3D11ShaderReflectionVariable;
typedef interface ID3D11ShaderReflectionVariable *LPD3D11SHADERREFLECTIONVARIABLE;
typedef interface ID3D11ShaderReflectionConstantBuffer ID3D11ShaderReflectionConstantBuffer;
typedef interface ID3D11ShaderReflectionConstantBuffer *LPD3D11SHADERREFLECTIONCONSTANTBUFFER;
typedef interface ID3D11ShaderReflection ID3D11ShaderReflection;
typedef interface ID3D11ShaderReflection *LPD3D11SHADERREFLECTION;
DEFINE_GUID(IID_ID3D11ShaderReflectionType, 0x6e6ffa6a, 0x9bae, 0x4613, 0xa5, 0x1e, 0x91, 0x65, 0x2d, 0x50, 0x8c, 0x21);
#undef INTERFACE
#define INTERFACE ID3D11ShaderReflectionType
DECLARE_INTERFACE(ID3D11ShaderReflectionType)
{
    STDMETHOD(GetDesc)(THIS_ D3D11_SHADER_TYPE_DESC *pDesc);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetMemberTypeByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetMemberTypeByName)(THIS_ LPCSTR Name);
    STDMETHOD_(LPCSTR, GetMemberTypeName)(THIS_ UINT Index);
    STDMETHOD(IsEqual)(THIS_ ID3D11ShaderReflectionType* pType);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetSubType)(THIS);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetBaseClass)(THIS);
    STDMETHOD_(UINT, GetNumInterfaces)(THIS);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetInterfaceByIndex)(THIS_ UINT uIndex);
    STDMETHOD(IsOfType)(THIS_ ID3D11ShaderReflectionType* pType);
    STDMETHOD(ImplementsInterface)(THIS_ ID3D11ShaderReflectionType* pBase);
};
DEFINE_GUID(IID_ID3D11ShaderReflectionVariable, 0x51f23923, 0xf3e5, 0x4bd1, 0x91, 0xcb, 0x60, 0x61, 0x77, 0xd8, 0xdb, 0x4c);
#undef INTERFACE
#define INTERFACE ID3D11ShaderReflectionVariable
DECLARE_INTERFACE(ID3D11ShaderReflectionVariable)
{
    STDMETHOD(GetDesc)(THIS_ D3D11_SHADER_VARIABLE_DESC *pDesc);
    STDMETHOD_(ID3D11ShaderReflectionType*, GetType)(THIS);
    STDMETHOD_(ID3D11ShaderReflectionConstantBuffer*, GetBuffer)(THIS);
    STDMETHOD_(UINT, GetInterfaceSlot)(THIS_ UINT uArrayIndex);
};
DEFINE_GUID(IID_ID3D11ShaderReflectionConstantBuffer, 0xeb62d63d, 0x93dd, 0x4318, 0x8a, 0xe8, 0xc6, 0xf8, 0x3a, 0xd3, 0x71, 0xb8);
#undef INTERFACE
#define INTERFACE ID3D11ShaderReflectionConstantBuffer
DECLARE_INTERFACE(ID3D11ShaderReflectionConstantBuffer)
{
    STDMETHOD(GetDesc)(THIS_ D3D11_SHADER_BUFFER_DESC *pDesc);
    STDMETHOD_(ID3D11ShaderReflectionVariable*, GetVariableByIndex)(THIS_ UINT Index);
    STDMETHOD_(ID3D11ShaderReflectionVariable*, GetVariableByName)(THIS_ LPCSTR Name);
};
DEFINE_GUID(IID_ID3D11ShaderReflection, 0x0a233719, 0x3960, 0x4578, 0x9d, 0x7c, 0x20, 0x3b, 0x8b, 0x1d, 0x9c, 0xc1);
#undef INTERFACE
#define INTERFACE ID3D11ShaderReflection
DECLARE_INTERFACE_(ID3D11ShaderReflection, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID iid, LPVOID * ppv);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetDesc) (THIS_ D3D11_SHADER_DESC * pDesc);
	STDMETHOD_(ID3D11ShaderReflectionConstantBuffer *, GetConstantBufferByIndex) (THIS_ UINT Index);
	STDMETHOD_(ID3D11ShaderReflectionConstantBuffer *, GetConstantBufferByName) (THIS_ LPCSTR Name);
	STDMETHOD(GetResourceBindingDesc) (THIS_ UINT ResourceIndex, D3D11_SHADER_INPUT_BIND_DESC * pDesc);
	STDMETHOD(GetInputParameterDesc) (THIS_ UINT ParameterIndex, D3D11_SIGNATURE_PARAMETER_DESC * pDesc);
	STDMETHOD(GetOutputParameterDesc) (THIS_ UINT ParameterIndex, D3D11_SIGNATURE_PARAMETER_DESC * pDesc);
	STDMETHOD(GetPatchConstantParameterDesc) (THIS_ UINT ParameterIndex, D3D11_SIGNATURE_PARAMETER_DESC * pDesc);
	STDMETHOD_(ID3D11ShaderReflectionVariable *, GetVariableByName) (THIS_ LPCSTR Name);
	STDMETHOD(GetResourceBindingDescByName) (THIS_ LPCSTR Name, D3D11_SHADER_INPUT_BIND_DESC * pDesc);
	STDMETHOD_(UINT, GetMovInstructionCount) (THIS);
	STDMETHOD_(UINT, GetMovcInstructionCount) (THIS);
	STDMETHOD_(UINT, GetConversionInstructionCount) (THIS);
	STDMETHOD_(UINT, GetBitwiseInstructionCount) (THIS);
	STDMETHOD_(D3D_PRIMITIVE, GetGSInputPrimitive) (THIS);
	STDMETHOD_(BOOL, IsSampleFrequencyShader) (THIS);
	STDMETHOD_(UINT, GetNumInterfaceSlots) (THIS);
	STDMETHOD(GetMinFeatureLevel) (THIS_ enum D3D_FEATURE_LEVEL * pLevel);
	STDMETHOD_(UINT, GetThreadGroupSize) (THIS_ UINT * pSizeX, UINT * pSizeY, UINT * pSizeZ);
};
#endif
