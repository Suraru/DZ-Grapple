class CfgPatches
{
	class DZGrapple
	{
		requiredAddons[]=
		{
			// ""
		};
	};
};

class CfgMods			// required in pbo's which add/modify scripts or inputs
{
	class DZGrapple
	{
		type = "mod";										// required
//		inputs = "mods\testmod\inputs\my_new_inputs.xml";	// optional, when using custom inputs
//		skeletonDefinitions = "mods\testmod\skeleton\skeletons.xml";	// optional, when using custom skeletons.anim.xml
//		dependencies[]={"Game"};							// optional, when you need to set class dependency

		class defs
		{
//			// optional: you can add custom imagesets like this
//			class imageSets
//			{
//				files[]={"mods/testmod/gui/imagesets/mod1.imageset", "mods/testmod/gui/imagesets/mod2.imageset" };
//			};
//
//			// optional: you can add custom widget styles like this
//			class widgetStyles
//			{
//				files[]={"mods/testmod/gui/looknfeel/mod1.styles", "mods/testmod/gui/looknfeel/mod2.styles"};
//			};
//			class engineScriptModule
//			{
//				value=""; // when value is empty, default entry function is used
//				files[]={"mods/testmod/scripts/1_Core"}; // you can add any number of files or directories and they will be compiled together with original game module scripts
//			};
//
//			/*
//			script module config classes are optional, define only what you want to mod
//			class gameLibScriptModule
//			{
//				value="";
//				files[]={"mods/testmod/scripts/2_GameLib"};
//			};*/
//
//			class gameScriptModule
//			{
//				value="CreateGameMod"; // when value is filled, default script module entry function name is overwritten by it
//				files[]={"mods/testmod/scripts/3_Game"};
//			};
//
			class worldScriptModule
			{
				value="";
				files[]={"mods/testmod/scripts/4_World"};
			};

//			class missionScriptModule
//			{
//				value="";
//				files[]={"mods/testmod/scripts/5_Mission"};
//			};
		};
	};
};