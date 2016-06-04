/*
 * sync group IDs set on the server by mission (Eden) groupID attribute
 * to all clients / players
 */

if (!isServer) exitWith {};
{ _x setGroupIdGlobal [groupId _x] } forEach allGroups;
