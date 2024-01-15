#pragma once

/* This namespace contains classes and functions related to modules within the Lugormod-X
* 
*/ 
namespace LMD {
    /*
     * Abstract for the LMD's module classes
     */
    class Module {
    protected:
        bool isModuleInitialized;

    public:
        Module();
        virtual ~Module();
        bool IsModuleInitialized() const;
        virtual void InitializeModule() = 0;
        virtual void ResetModuleState();
    };

}