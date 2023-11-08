#include "Slot.h"

Slot::Slot(int maxInv, float cost) : m_maxInventory(maxInv), m_inventory(maxInv), m_cost(cost) {}

int Slot::GetInventory()
{
	return m_inventory;
}

/// <summary>
/// 
/// </summary>
/// <returns></returns>
bool Slot::RefillInventory()
{
	if (m_inventory < m_maxInventory)
	{
		m_inventory = m_maxInventory;
		return true;
	}
	// Otherwise this is already full!

	return false;
}

bool Slot::RemoveFromInventory()
{
	if (m_inventory > 0)
	{
		m_inventory--;
		return true;
	}
	return false;
}

float Slot::GetCost()
{
	return m_cost;
}

void Slot::SetCost(float value)
{
	m_cost = value;
}
