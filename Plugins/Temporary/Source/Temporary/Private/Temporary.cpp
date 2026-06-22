#include "Temporary.h"
#include "Modules/ModuleManager.h"

void FTemporaryModule::StartupModule()
{
    UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin StartupModule"));
}

void FTemporaryModule::ShutdownModule()
{
    UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin ShutdownModule"));
}

IMPLEMENT_MODULE(FTemporaryModule, Temporary);