#pragma once

#ifndef DLL_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#endif // DLL_EXPORT

extern int g_MenuHandle;
extern int g_PluginHandle;

extern HMODULE g_LocalDllHandle;

enum
{
	PLUGIN_MENU_LOADSIG,
	PLUGIN_MENU_LOADDIF,
	PLUGIN_MENU_LOADMAP,
	PLUGIN_MENU_LOADPEID,
	PLUGIN_MENU_EXPORTDIF,
	PLUGIN_MENU_EXPORTMAP,

	PLUGIN_MENU_FINDCRYPTO,
	PLUGIN_MENU_AESFINDER,

	PLUGIN_MENU_MAKESIG,
	PLUGIN_MENU_BATCHSIG,
	PLUGIN_MENU_CONVERTSIG,
	PLUGIN_MENU_SETTINGS,

	PLUGIN_MENU_ABOUT,
};

#ifdef __cplusplus
extern "C"
{
#endif

	DLL_EXPORT bool pluginit(PLUG_INITSTRUCT *InitStruct);
	DLL_EXPORT bool plugstop();
	DLL_EXPORT void plugsetup(PLUG_SETUPSTRUCT *SetupStruct);

#ifdef __cplusplus
}
#endif