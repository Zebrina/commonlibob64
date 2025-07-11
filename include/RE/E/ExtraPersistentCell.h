#pragma once

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectCELL;

	class ExtraPersistentCell : public BSExtraData
	{
	public:
		inline static constexpr auto TYPE{ ExtraDataType::PersistentCell };

		virtual ~ExtraPersistentCell();

		TESObjectCELL* cell;  // 18
	};
}
