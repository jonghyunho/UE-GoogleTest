namespace UnrealBuildTool.Rules {
    public class GoogleTestApp : ModuleRules
    {
        public GoogleTestApp(ReadOnlyTargetRules Target) : base(Target)     
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "GoogleTest",
                    "ExampleGameCore"
                }
            );
            PrivatePCHHeaderFile = "Private/GoogleTestApp.h";
        }
    }
}