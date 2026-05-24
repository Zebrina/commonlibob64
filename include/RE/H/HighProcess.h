#pragma once

#include "RE/B/BaseProcess.h"

namespace RE
{
	class HighProcess : public BaseProcess
	{
	public:
		inline static constexpr auto RTTI = RTTI::HighProcess;
		inline static constexpr auto VTABLE = VTABLE::HighProcess;

		virtual ~HighProcess();

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
		virtual std::uint32_t Unk0D();                          // 0D -- return flags & 0x1FF;
		virtual std::uint32_t Unk0E();                          // 0E -- return (flags >> 9) & 0xF;
		virtual std::uint32_t Unk0F();                          // 0F -- return (flags >> 13) & 0x3FFF;
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

		[[nodiscard]] TESPackage* GetCurrentPackage() const { return currentPackage; }

		std::uint64_t unk110[10];
		std::uint64_t unk160;          // 160
		std::uint8_t  unk168;          // 168
		std::uint8_t  unk169;          // 169
		std::uint8_t  unk16A;          // 16A
		std::uint8_t  unk16B;          // 16B
		std::uint8_t  unk16C;          // 16C
		TESPackage*   currentPackage;  // 170
		std::uint64_t unk178[1];
		std::uint32_t unk180;  // 180
		std::uint8_t  unk184;  // 184
		std::uint64_t unk188[2];
		void*         unk198;  // 198
		std::uint64_t unk1A0[3];
		std::uint8_t  unk1B8;  // 1B8
		std::uint8_t  unk1B9;  // 1B9
		std::uint64_t unk1C0;  // 1C0
		std::uint64_t unk1C8;  // 1C8
		std::uint64_t unk1D0;  // 1D0
		std::uint64_t unk1D8[1];
		std::uint64_t unk1E0;  // 1D0
		std::uint64_t unk1E8[2];
		std::uint64_t unk1F8;  // 1F8
		std::uint64_t unk200[8];
		std::uint64_t unk240;  // 240
		std::uint64_t unk248[3];
		std::uint64_t unk260;  // 260
		std::uint64_t unk268[1];
		std::uint8_t  unk270;  // 270


		// Not aligned yet zzzzz
		std::uint32_t unk2D4;  // 2D4
		std::uint32_t unk348;  // 348
		float         unk370;  // 370
		float         unk3C8;  // 3C8
		std::uint8_t  unk3CC;  // 3CC
		std::uint32_t unk3D8;  // 3D8
		std::uint64_t unk420;  // 420
	};

	static_assert(offsetof(HighProcess, unk160) == 0x160);
	static_assert(offsetof(HighProcess, unk16C) == 0x16C);
	static_assert(offsetof(HighProcess, currentPackage) == 0x170);
	static_assert(offsetof(HighProcess, unk184) == 0x184);
	static_assert(offsetof(HighProcess, unk198) == 0x198);
	static_assert(offsetof(HighProcess, unk1B8) == 0x1B8);
	static_assert(offsetof(HighProcess, unk1C0) == 0x1C0);
	static_assert(offsetof(HighProcess, unk1E0) == 0x1E0);
	static_assert(offsetof(HighProcess, unk1F8) == 0x1F8);
	static_assert(offsetof(HighProcess, unk240) <= 0x240);
	static_assert(offsetof(HighProcess, unk260) == 0x260);
	static_assert(offsetof(HighProcess, unk270) == 0x270);
}
