
class CfgPatches
{
	class fodhouse
	{
		units[] = {"land_fodhouse"};
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgMods
{
	class fodhouse
	{

		type = "mod";

	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class House;
	class land_fodhouse: House
	{
		scope = 1;
		carveNavmesh = 1;
		model = "fodhouse\models\fodhouse.p3d";



	};

		class land_fodhousedoor: HouseNoDestruct
	{
		scope = 1;
		model = "fodhouse\models\fodhousedoors.p3d";

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

	};







};