#pragma once

namespace RE
{
	class Actor;

	class PackageTarget
	{
	public:

		std::uint64_t unk00[1];
		Actor*        target; // 08
	};
}
