#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/B/BSTList.h"
#include "RE/I/InventoryChanges.h"

namespace RE
{
	class InventoryChanges;
	class ItemChange;

	class __declspec(novtable) ExtraContainerChanges :
		public BSExtraData
	{
	public:
		inline static constexpr auto RTTI{ RTTI::ExtraContainerChanges };
		inline static constexpr auto VTABLE{ VTABLE::ExtraContainerChanges };
		inline static constexpr auto TYPE{ EXTRA_DATA_TYPE::ContainerChanges };

		[[nodiscard]] InventoryChanges*          GetInventoryChanges() const { return changes; }
		[[nodiscard]] BSSimpleList<ItemChange*>* GetItemChanges() const { return changes && changes->list ? changes->list : nullptr; }
		[[nodiscard]] TESObjectREFR*             GetOwner() const { return changes ? changes->owner : nullptr; }
		[[nodiscard]] float                      GetTotalWeight() const { return changes ? changes->totalWeight : 0.0f; }
		[[nodiscard]] float                      GetWornWeight() const { return changes ? changes->wornWeight : 0.0f; }

		// members
		InventoryChanges* changes;  // 018
	};

	static_assert(sizeof(ExtraContainerChanges) == 0x20);
}
