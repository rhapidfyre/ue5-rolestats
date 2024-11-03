// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class RoleStats : ModuleRules
{
	public RoleStats(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
			}
			);


		PrivateIncludePaths.AddRange(
			new string[] {
			}
			);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"GameplayAbilities",
				"GameplayTags",
				"GameplayTasks",
				"EnhancedInput",
			}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
			}
			);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
			);
	}
}
