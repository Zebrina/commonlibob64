#pragma once

#include "EXTRA_DATA_TYPE.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSTList.h"

namespace RE
{
	class Character;

	class __declspec(novtable) ExtraFollower :
		public BSExtraData
	{
	public:
		inline static constexpr auto RTTI{ RTTI::ExtraFollower };
		inline static constexpr auto VTABLE{ VTABLE::ExtraFollower };
		inline static constexpr auto TYPE{ EXTRA_DATA_TYPE::Follower };

		// members
		BSSimpleList<Character*>* followers;  // 018
	};
	static_assert(sizeof(ExtraFollower) == 0x20);
}
