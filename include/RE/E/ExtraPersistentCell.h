#pragma once

#include "EXTRA_DATA_TYPE.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectCELL;

	class __declspec(novtable) ExtraPersistentCell :
		public BSExtraData
	{
	public:
		inline static constexpr auto RTTI{ RTTI::ExtraPersistentCell };
		inline static constexpr auto VTABLE{ VTABLE::ExtraPersistentCell };
		inline static constexpr auto TYPE{ EXTRA_DATA_TYPE::PersistentCell };

		// members
		TESObjectCELL* cell;  // 018
	};
	static_assert(sizeof(ExtraPersistentCell) == 0x20);
}
