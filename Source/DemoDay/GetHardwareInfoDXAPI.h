// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "The_Key.h" //add your project name
#include "PlatformFunctions.h"
#include "CoreMinimal.h"

/**
 * 
 */
class THE_KEY_API GetHardwareInfoDXAPI
{
public:
	GetHardwareInfoDXAPI();
	~GetHardwareInfoDXAPI();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get CPU Brand Name", Keywords = "CPU brand"), Category = Game) //Set your category
		static FString GetCPUBrandName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get CPU Vendor Name", Keywords = "CPU vendor"), Category = Game)
		static FString GetCPUVendorName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get GPU Brand Name", Keywords = "GPU brand"), Category = Game)
		static FString GetGPUBrandName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Number of CPU Cores", Keywords = "CPU cores"), Category = Game)
		static FString GetCPUCores();

};