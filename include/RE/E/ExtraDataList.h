#pragma once

#include "RE/B/BaseExtraList.h"

namespace RE
{
	class ExtraDataList :
		public BaseExtraList
	{
	public:
		inline static constexpr auto RTTI = RTTI::ExtraDataList;
		inline static constexpr auto VTABLE = VTABLE::ExtraDataList;

		// override
		virtual ~ExtraDataList() override;  // 000

		//bool CompareList(ExtraDataList* a_other) const;
		//bool CompareListForContainer(ExtraDataList* a_other) const;
		//void CopyListForContainer(ExtraDataList* a_other);
		//void CopyListForReference(ExtraDataList* a_other);
		//void DuplicateExtraListForContainer(ExtraDataList* a_other);
		void RemoveAllCopyableExtra();
		void RemoveNonPersistentCellData();
		//void Save();
	};
	static_assert(sizeof(ExtraDataList) == 0x20);
}

namespace RE
{
    inline void ExtraDataList::RemoveAllCopyableExtra()
	{
		using func_t = decltype(&ExtraDataList::RemoveAllCopyableExtra);
		static REL::Relocation<func_t> func{ ID::ExtraDataList::RemoveAllCopyableExtra };
		func(this);
	}

	inline void ExtraDataList::RemoveNonPersistentCellData()
	{
		using func_t = decltype(&ExtraDataList::RemoveNonPersistentCellData);
		static REL::Relocation<func_t> func{ ID::ExtraDataList::RemoveNonPersistentCellData };
		func(this);
	}
}
