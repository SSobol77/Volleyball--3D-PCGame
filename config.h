#ifndef _CONFIG_H
#define _CONFIG_H

#define DEMO
//#define DO_PROFILE
//#define DIEASASSERT
#define D3DX_MIGRATION

#define WIN32_LEAN_AND_MEAN
#define _MFC_OVERRIDES_NEW


#ifdef D3DX_MIGRATION
#pragma comment (lib,"d3dx9.lib")
#endif


#define ENGLISH 1
#define GERMAN 0
#define FRENCH 0
#define POLISH 0


#endif /* _CONFIG_H */