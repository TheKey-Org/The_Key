// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformFunctions.generated.h"
#include "GetHardwareInfoDXAPI.h"

GetHardwareInfoDXAPI::GetHardwareInfoDXAPI()
{
}

GetHardwareInfoDXAPI::~GetHardwareInfoDXAPI()
{
}

FString GetHardwareInfoDXAPI::GetCPUBrandName()
{
	return FWindowsPlataformMisc::GetCPUBrand();
}

FString GetHardwareInfoDXAPI::GetCPUVendorName()
{
	return FWindowsPlataformMisc::GetCPUVendor();
}

FString GetHardwareInfoDXAPI::GetGPUBrandName()
{
	return FWindowsPlataformMisc::GetPrimaryGPUBrand();
}

int32 GetHardwareInfoDXAPI::GetCPUCores()
{
	return FWindowsPlataformMisc::NumberOfCores();
}