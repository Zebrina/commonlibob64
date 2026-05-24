#pragma once

#include "EXTRA_DATA_TYPE.h"

#include "RE/B/BSExtraData.h"
#include "RE/M/MAP_MARKER_TYPE.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class __declspec(novtable) ExtraMapMarker :
		public BSExtraData
	{
	public:
		inline static constexpr auto RTTI{ RTTI::ExtraMapMarker };
		inline static constexpr auto VTABLE{ VTABLE::ExtraMapMarker };
		inline static constexpr auto TYPE{ EXTRA_DATA_TYPE::MapMarker };

		enum Flags : std::uint16_t
		{
			kVisible = 1 << 0,
			kCanTravel = 1 << 1,
		};

		struct Data
		{
			TESFullName     fullName;  // 000
			std::uint16_t   flags;     // 018
			MAP_MARKER_TYPE type;      // 01A
		};

		[[nodiscard]] bool            IsVisible() const { return data->flags & kVisible; }
		[[nodiscard]] bool            CanTravelTo() const { return data->flags & kCanTravel; }
		[[nodiscard]] MAP_MARKER_TYPE GetMapMarkerType() const { return data->type; }

		// members
		Data* data;  // 18
	};
	static_assert(sizeof(ExtraMapMarker) == 0x20);
}
