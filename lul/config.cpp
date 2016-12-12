class CfgPatches
{
    class test_cube
    {
        units[] = {"test_cube"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgVehicles
{
    class Static;
    class test_cube : Static
    {
        scope = 2;
        model = "\test_cube\test_cube.p3d"
        displayName = "red Cube"
        vehicleClass = "small_items";
    };
};