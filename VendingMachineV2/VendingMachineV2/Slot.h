#pragma once

class Slot
{
private:
	int m_inventory;
	int m_maxInventory;
	float m_cost;
public:

	Slot(int maxInv, float cost);

	int GetInventory();
	bool RefillInventory();
	bool RemoveFromInventory();

	float GetCost();
	void SetCost(float newCost);
};