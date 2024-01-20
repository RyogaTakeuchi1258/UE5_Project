// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_ActionDangeon : ModuleRules
{
	public UE5_ActionDangeon(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
