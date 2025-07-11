#pragma once

#include "RE/T/TESObjectREFR.h"

namespace RE
{
	class BaseProcess;
	class bhkCharacterController;

	class MobileObject :
		public TESObjectREFR
	{
	public:
		inline static constexpr auto RTTI = RTTI::MobileObject;
		inline static constexpr auto VTABLE = VTABLE::MobileObject;

		// override (TESForm)
		virtual ~MobileObject() override;                                                                    // 04
		virtual std::uint16_t GetSaveSize(std::uint32_t a_changeFlags) override;                             // 13
		virtual void          SaveGame(std::uint32_t a_changeFlags) override;                                // 14
		virtual void          LoadGame(std::uint32_t a_flags, std::uint32_t a_currentFlags) override;        // 15
		virtual void          InitLoadGame(std::uint32_t a_flags, std::uint32_t a_oldFlags) override;        // 16
		virtual void          FinishInitLoadGame(std::uint32_t a_flags, std::uint32_t a_oldFlags) override;  // 17
		virtual void          Revert(std::uint32_t a_flags) override;                                        // 18
		virtual void          SetDelete(bool a_set) override;                                                // 23
		virtual bool          DetachHavok() override;                                                        // 57
		virtual void          InitHavok() override;                                                          // 58
		virtual NiAVObject*   Load3D() override;                                                             // 59
		virtual NiPoint3*     GetBoundMin() override;                                                        // 5C
		virtual NiPoint3*     GetBoundMax() override;                                                        // 5D
		virtual void          MoveHavok(bool a_forceRecurse) override;                                       // 64
		virtual void          SetParentCell(TESObjectCELL* a_cell) override;                                 // 6B
		virtual void          OnModelAttached() override;                                                    // 6F

		// add
		//virtual void                    SendPositionPairingHandler();                                             // 77
		virtual bool                    MoveToHigh();                                                             // 77
		virtual bool                    MoveToLow();                                                              // 78
		virtual bool                    MoveToMiddleLow();                                                        // 79
		virtual bool                    MoveToMiddleHigh();                                                       // 7A
		virtual bhkCharacterController* Move(float a_deltaTime, NiPoint3& a_deltaMove, std::uint32_t a_moveDir);  // 7B
		virtual bhkCharacterController* Jump();                                                                   // 7C
		virtual void                    SetAvoidanceDisabled(bool a_value);                                       // 7D
		virtual void                    Process(float a_delta);                                                   // 7E
		virtual bool                    ChangeProcessLevel();                                                     // 7F
		virtual bool                    DetachCharController();                                                   // 80
		virtual void                    SetPosition(const NiPoint3& a_pos);                                       // 81
		virtual void                    GetLinearVelocity(NiPoint3& a_vel);                                       // 82
		virtual void                    EvaluateDetection(float a_number);                                        // 83
		virtual float                   GetDetectionTimer();                                                      // 84
		virtual void                    ReduceDetectionTimer();                                                   // 85
		virtual float                   GetHeading();                                                             // 86
		virtual void                    SetHeading(TESObjectREFR* a_targetReference);                             // 87
		virtual void                    SetHeading(float a_angle);                                                // 88
		virtual void                    SetSize(float a_radius);                                                  // 89
		virtual bool                    GetRunsInLow();                                                           // 8A
		virtual float                   GetAcrobatics();                                                          // 8B
		virtual bool                    IsDying();                                                                // 8C
		virtual bool                    IsTransient();                                                            // 8D
		virtual void                    SetDisplayGeometry(bool a_value);                                         // 8E

		// members
		BaseProcess* currentProcess;          // 148
		float        lastCollisionCheckTime;  // 150
	};
	static_assert(sizeof(MobileObject) == 0x158);
}
