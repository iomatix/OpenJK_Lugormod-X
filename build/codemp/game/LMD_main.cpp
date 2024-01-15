// C++14
#include <memory>
#include <unordered_map>
#include <string>

// OpenJK
#include <qcommon/qcommon.h>
#include <game/g_local.h>
#include <game/g_syscalls.c>

// LMD
#include "LMD_Abstracts_Module.h"

// Self
#include "LMD_main.h"


using namespace LMD;

/**
*
* Lugormod-X's startup module
*
* Main init method of the Lugormod-X is here
* 
**/
class LMD_Main: Module {
private:
	 bool isLMDInitialized;

public:
	LMD_Main() : isLMDInitialized(false) {

	}

	~LMD_Main() {

	}

	void ResetInitializedState() {
		isLMDInitialized = false;
	}





	bool Lmd_Startup(void) {
		G_Printf("^5Network Initialization...\n");
		//TODO Lmd_IPs_Init(); redundant ???
		NET_Init();

		G_Printf("^5Commands Initialization...\n");
		//TODO Commands_Init();
		G_Printf("^5Professions Initialization...\n");
		//TOOD Prof_Init();
		G_Printf("^5Loading default entities...\n");
		//TODO LoadMapDefaults();

		//if (((g_cmdDisable.integer) * 2 & (1 << 1)) == 0) {
		//	G_Printf("^5Registering account plugins...\n");
		//	// TODO
		//	//Accounts_CustomSkills_Register();
		//	//Accounts_Friends_Register();
		//	//Accounts_Property_Register();
		//	//Accounts_Stats_Register();
		//	//Accounts_Auths_Register();
		//	//Accounts_Inventory_Register();
		//	//Accounts_Prof_Register();

		//	// TODO
		//	//G_Printf("^5Loading authfiles...\n");
		//	//G_Printf("%u loaded.\n", Auths_Load());

		//	//G_Printf("^5Loading accounts...\n");
		//	//G_Printf("%u loaded.\n", Accounts_Load());

		//	//G_Printf("^5Loading factions...\n");
		//	//Lmd_Startup();
		//	//G_Printf("%u loaded.\n", Factions_Load());
		//}

#ifdef LMD_USEMAPDATA
	/*Lmd_LoadMapData();*/
#endif
	//G_Printf("^5Loading language filter...\n");
	//loadLingoFilter();
	//G_Printf("^5Loading location data...\n");
	//LoadLocationData();
	//G_Printf("^5Loading bans...\n");
	//Bans_Load();



		return false;
	}
};
