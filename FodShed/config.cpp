
class CfgPatches
{
	class FodShed
	{
		units[] = {};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class FodShed
	{

		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FodShed/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;
	class Fence;
	class Inventory_Base;


	class FodShed: HouseNoDestruct
	{
		scope = 1;
		model = "FodShed\models\FodShed.p3d";



	};

	class FodShedDoor : 	 Inventory_Base
	{
		scope = 2;
		canBeDigged = 0;
		heavyItem = 1;
		weight = 800;
		itemBehaviour = 2;
		physLayer = "item_large";
		model = "FodShed\models\FodShedDoor.p3d";  // door model


		attachments[] = {"Att_CombinationLock"};
		class GUIInventoryAttachmentsProps
		{
			class CodeLock
			{
				name = "CodeLock";
				description = "";
				attachmentSlots[] = {"Att_CombinationLock"};
				icon = "cat_bb_attachments";
				view_index = 3;
			};
		};

		class Doors
		{
			class Door1
			{
				displayName = "Maze door In";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5;
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};

		};
		class AnimationSources
		{
			class CodeLock
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};

	};





};