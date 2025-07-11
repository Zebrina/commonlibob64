#pragma once

#include "RE/B/BSExtraData.h"
#include "RE/M/MAP_MARKER_TYPE.h"

namespace RE
{
	class ExtraMapMarker : public BSExtraData
	{
	public:
		inline static constexpr auto TYPE{ ExtraDataType::MapMarker };

		enum Flags : std::uint16_t
		{
			kVisible = 1 << 0,
			kCanTravel = 1 << 1,
		};

		struct Data
		{
			TESFullName     fullName;  // 00
			std::uint16_t   flags;     // 18
			MAP_MARKER_TYPE type;      // 1A
		};

		virtual ~ExtraMapMarker();

		[[nodiscard]] bool            IsVisible() const { return data->flags & kVisible; }
		[[nodiscard]] bool            CanTravelTo() const { return data->flags & kCanTravel; }
		[[nodiscard]] MAP_MARKER_TYPE GetType() const { return data->type; }

		Data* data;  // 18
	};
}
