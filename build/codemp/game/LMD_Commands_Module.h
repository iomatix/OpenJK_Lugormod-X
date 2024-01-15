#pragma once
#include "LMD_Abstracts_Module.h"



namespace LMD {
/*
*
* Module for handling Lugormod-X commands.
*
*/
    class LMD_Commands_Module : Module {
    private:
        bool isLMDInitialized;

    public:
        LMD_Commands_Module();
        ~LMD_Commands_Module();

        void ResetModuleState() override;
        void InitializeModule() override;
        // Methods
    };
}