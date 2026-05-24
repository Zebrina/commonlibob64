#pragma once

#include "RE/T/TESPackage.h"

namespace RE
{
	class BaseProcess
	{
	public:
		inline static constexpr auto RTTI = RTTI::BaseProcess;
		inline static constexpr auto VTABLE = VTABLE::BaseProcess;

		virtual ~BaseProcess();  // 00

		virtual void          Unk01();                          // 01
		virtual void          Unk02();                          // 02
		virtual void          Unk03();                          // 03
		virtual void          Unk04();                          // 04
		virtual void          Unk05();                          // 05
		virtual void          Unk06();                          // 06
		virtual void          Unk07(float a_arg1);              // 07
		virtual void          Unk08();                          // 08
		virtual void          Unk09();                          // 09
		virtual float         Unk0A();                          // 0A
		virtual std::uint32_t GetFlags();                       // 0B
		virtual void          SetFlags(std::uint32_t a_flags);  // 0C
		virtual std::uint32_t Unk0D();                          // 0D
		virtual std::uint32_t Unk0E();                          // 0E
		virtual std::uint32_t Unk0F();                          // 0F
		virtual void          Set_108(std::uint32_t a_arg1);    // 10
		virtual std::uint32_t Get_108();                        // 11
		virtual std::uint64_t Get_240();                        // 12
		virtual void          Set_240(std::uint64_t a_arg1);    // 13
		virtual void          Clear_260();                      // 14
		virtual void          Unk15();                          // 15
		virtual std::uint8_t  Get_16C();                        // 16
		virtual void          Set_16C(std::uint8_t a_arg1);     // 17
		virtual void          Unk18();                          // 18
		virtual void          Unk19();                          // 19
		virtual void          Unk1A();                          // 1A
		virtual void          Unk1B();                          // 1B
		virtual void          Unk1C();                          // 1C
		virtual void          Unk1D();                          // 1D
		virtual void          Unk1E();                          // 1E
		virtual void          Unk1F();                          // 1F
		virtual void          Unk20();                          // 20
		virtual void          Unk21();                          // 21
		virtual void          Set_02C(float a_arg1);            // 22
		virtual float         Get_02C();                        // 23
		virtual void          Clear_030();                      // 24
		virtual void          Set_030(std::uint32_t a_arg1);    // 25
		virtual std::uint32_t Get_030();                        // 26
		virtual void          Clear_348();                      // 27
		virtual void          Unk28();                          // 28
		virtual float         Get_0FC();                        // 29
		virtual void          Set_0FC(float a_arg1);            // 2A
		virtual void          Clear_2D4();                      // 2B
		virtual void          Unk2C();                          // 2C
		virtual std::uint8_t  Get_270();                        // 2D
		virtual void          Set_270(std::uint8_t a_arg1);     // 2E
		virtual void          Unk2F();                          // 2F
		virtual void          Unk30();                          // 30
		virtual void          Set_029(std::uint8_t a_arg1);     // 31
		virtual std::uint8_t  Get_029();                        // 32
		virtual void          Unk33();                          // 33
		virtual std::uint8_t  Get_184();                        // 34
		virtual void*         Get_048();                        // 35
		virtual void          Unk36();                          // 36
		virtual void          Unk37();                          // 37
		virtual void          Unk38();                          // 38
		virtual void          Set_078(std::uint64_t a_arg1);    // 39
		virtual std::uint64_t Get_080();                        // 3A
		virtual void          Set_080(std::uint64_t a_arg1);    // 3B
		virtual void          Unk3C();                          // 3C
		virtual void          Unk3D();                          // 3D
		virtual void          Unk3E();                          // 3E
		virtual void          Unk3F();                          // 3F
		virtual void          Unk40();                          // 40
		virtual std::uint32_t Get_060();                        // 41
		virtual void          Set_060(std::uint32_t a_arg1);    // 42
		virtual void          Unk43();                          // 43
		virtual void          Unk44();                          // 44
		virtual void          Unk45();                          // 45
		virtual void          Unk46();                          // 46
		virtual void          Unk47();                          // 47
		virtual void          Unk48();                          // 48
		virtual void          Unk49();                          // 49
		virtual void          Unk4A();                          // 4A
		virtual std::uint64_t Get_1E0(std::uint64_t a_arg1);    // 4B
		virtual void          Unk4C();                          // 4C
		virtual std::uint64_t Get_1C0(std::uint64_t a_arg1);    // 4D
		virtual std::uint64_t Get_1C8(std::uint64_t a_arg1);    // 4E
		virtual std::uint8_t  Get_1B8();                        // 4F
		virtual std::uint8_t  Get_1B9();                        // 50
		virtual std::uint8_t  Get_0F8();                        // 51
		virtual void          Set_0F8(std::uint8_t a_arg1);     // 52
		virtual std::uint8_t  Get_02A();                        // 53
		virtual void          Set_02A(std::uint8_t a_arg1);     // 54
		virtual void          Unk55();                          // 55
		virtual void          Set_038(std::uint64_t a_arg1);    // 56
		virtual void          Unk57();                          // 57
		virtual float         Get_3C8();                        // 58
		virtual float         Mod_3C8(float a_amount);          // 59
		virtual void          Set_040(float a_arg1);            // 5A
		virtual float         Get_040();                        // 5B
		virtual void          Unk5C();                          // 5C
		virtual void          Unk5D();                          // 5D
		virtual std::uint64_t Get_160();                        // 5E
		virtual std::uint32_t Get_180_or_008();                 // 5F
		virtual std::uint64_t Get_160_or_010();                 // 60
		virtual void          Unk61();                          // 61
		virtual void          Unk62();                          // 62
		virtual void          Unk63();                          // 63
		virtual void          Unk64();                          // 64
		virtual void          Unk65();                          // 65
		virtual void          Unk66();                          // 66
		virtual void          Unk67();                          // 67
		virtual void          Unk68();                          // 68
		virtual void          Unk69();                          // 69
		virtual void          Unk6A();                          // 6A
		virtual void          Unk6B();                          // 6B
		virtual void          Unk6C();                          // 6C
		virtual std::uint64_t Get_420();                        // 6D
		virtual void          Unk6E();                          // 6E
		virtual void          Set_370(float a_arg1);            // 6F
		virtual void          Unk70();                          // 70
		virtual void          Unk71();                          // 71
		virtual std::uint8_t  Get_3CC();                        // 72
		virtual void          Set_3CC(std::uint8_t a_arg1);     // 73
		virtual void          Unk74();                          // 74
		virtual void          Unk75();                          // 75
		virtual std::uint32_t Get_3D8();                        // 76
		// 14861BAE8

		std::uint32_t unk008;  // 008
		std::uint64_t unk010;  // 010
		std::uint64_t unk018[1];
		float         unk020;  // 020
		std::uint32_t flags;   // 024
		std::uint8_t  unk028;  // 028
		std::uint8_t  unk029;  // 029
		std::uint8_t  unk02A;  // 02A
		float         unk02C;  // 02C
		std::uint32_t unk030;  // 030
		std::uint64_t unk038;  // 038
		float         unk040;  // 040
		void*         unk048;  // 048
		std::uint64_t unk050[2];
		std::uint32_t unk060;  // 060
		std::uint64_t unk068[2];
		std::uint64_t unk078;  // 078
		std::uint64_t unk080;  // 080
		std::uint64_t unk088[14];
		std::uint8_t  unk0F8;
		float         unk0FC;  // 0FC
		float         unk100;  // 100
		std::uint32_t unk104[1];
		std::uint32_t unk108;  // 108
	};

	static_assert(offsetof(BaseProcess, unk008) == 0x008);
	static_assert(offsetof(BaseProcess, unk020) == 0x020);
	static_assert(offsetof(BaseProcess, flags) == 0x024);
	static_assert(offsetof(BaseProcess, unk02C) == 0x02C);
	static_assert(offsetof(BaseProcess, unk030) == 0x030);
	static_assert(offsetof(BaseProcess, unk038) == 0x038);
	static_assert(offsetof(BaseProcess, unk048) == 0x048);
	static_assert(offsetof(BaseProcess, unk060) == 0x060);
	static_assert(offsetof(BaseProcess, unk078) == 0x078);
	static_assert(offsetof(BaseProcess, unk0F8) == 0x0F8);
	static_assert(offsetof(BaseProcess, unk0FC) == 0x0FC);
	static_assert(offsetof(BaseProcess, unk108) == 0x108);
}
