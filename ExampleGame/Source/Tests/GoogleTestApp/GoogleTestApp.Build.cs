namespace UnrealBuildTool.Rules {
    public class GoogleTestApp : ModuleRules
    {
        public GoogleTestApp(ReadOnlyTargetRules Target) : base(Target)     
        {
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "GoogleTest"
                }
            );
            PrivatePCHHeaderFile = "Private/GoogleTestApp.h";

/*
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googletest");
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googletest/include");
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googletest/src");
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googlemock");
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googlemock/include");
            PublicIncludePaths.Add("ThirdParty/GoogleTest/googletest-release-1.10.0/googlemock/src");
*/
        }
    }
}