// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CloneStars : ModuleRules
{
	public CloneStars(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
