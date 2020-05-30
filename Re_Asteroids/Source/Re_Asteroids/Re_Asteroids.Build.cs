// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Re_Asteroids : ModuleRules
{
	public Re_Asteroids(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
