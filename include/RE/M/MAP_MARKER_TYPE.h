#pragma once

namespace RE
{
	enum class MAP_MARKER_TYPE : std::uint8_t
	{
		None = 0,
		Camp = 1,
		Cave = 2,
		City = 3,
		ElvenRuin = 4,
		AyleidRuins = ElvenRuin,
		FortRuin = 5,
		Mine = 6,
		Landmark = 7,
		Tavern = 8,
		Stables = Tavern,
		Settlement = 9,
		DaedricShrine = 10,
		OblivionGate = 11,
		Door = 12,
	};
}
