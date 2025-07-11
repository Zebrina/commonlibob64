#pragma once

#include "RE/B/BSExtraData.h"

#include "RE/B/BSTList.h"

namespace RE
{
	class Character;

	class ExtraFollower : public BSExtraData
	{
	public:
		inline static constexpr auto EXTRADATATYPE = ExtraDataType::Follower;

		virtual ~ExtraFollower();

		BSSimpleList<Character*>* followers;  // 18
	};
}
