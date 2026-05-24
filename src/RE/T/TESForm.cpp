#include "RE/T/TESForm.h"

#include "RE/T/TESEnchantableForm.h"

#include "RE/RTTI.h"

namespace RE
{
	bool TESForm::IsEnchanted() const
	{
		const TESEnchantableForm* enchantableForm = oblivion_cast<const TESEnchantableForm*>(this);
		return enchantableForm && enchantableForm->formEnchanting;
	}
}
