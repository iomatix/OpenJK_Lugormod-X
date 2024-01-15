#include "LMD_Abstracts_Module.h"

namespace LMD {
    Module::Module() : isModuleInitialized(false) {
    }

    Module::~Module() {
    }

    bool Module::IsModuleInitialized() const {
        return isModuleInitialized;
    }

    void Module::ResetModuleState() {
        isModuleInitialized = false;
    }
}
