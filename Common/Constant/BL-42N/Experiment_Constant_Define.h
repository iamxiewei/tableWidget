// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__45F2B407_8B55_4754_993C_99B4D01C0724__INCLUDED_)
#define AFX_STDAFX_H__45F2B407_8B55_4754_993C_99B4D01C0724__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

///////////////////////////////////////////////////////////////////////////////
///1.----------------------  ʵ��ģ�鳣��. ------------------------------------
///////////////////////////////////////////////////////////////////////////////
const	short	NO_MODEL						= 0;	/// Not set model.

///1.1 --------------------  ������ʵ��. ------------------------------------
const	short	MODEL_AMPLITUDE					= 1;	/// �̼�ǿ���뷴Ӧ�Ĺ�ϵ	
const	short	MODEL_FREQUENCY					= 2;	/// �̼�Ƶ���뷴Ӧ�Ĺ�ϵ
const	short	MODEL_AP						= 3;	/// �񾭸ɶ�����λ������
const	short	MODEL_AP_SPEED					= 4;	/// �񾭸��˷ܴ����ٶȲⶨ
const	short	MODEL_AP_REFRACTORY				= 5;	/// �񾭸��˷ܲ�Ӧ�ڲⶨ
const	short	MODEL_AP_THRESHOLD				= 6;	/// ��ǿ���붯����λ��ϵ
const	short	MODEL_FIBER_CLASSIFY			= 7;	/// ����ά����
const	short	MODEL_AP_STRAIN					= 8;	/// �����˷�-����ʱ���ϵ
const	short	MODEL_CM_REFRACTORY				= 9;	/// �ļ���Ӧ�ڲⶨ
const	short	MODEL_PAIN						= 10;	/// ʹ��ʵ��
const	short	MODEL_HIPPOCAMPI_POWER			= 11;	/// ����ŵ�
const	short	MODEL_HIPPOCAMPI_PIECE_POWER	= 12;	/// ������Ƭͻ�����λ�۲�
const	short	MODEL_SM_CONTRACTION			= 13;	/// ����������ʵ�飬Skeletal musclar contraction
const	short	MODEL_AP_MP_STRAIN				= 14;	/// �񾭸ɶ�����λ�����������

///1.2 --------------------  ѭ��ʵ��. ----------------------------------------
const	short	MODEL_HEART_POUR				= 20;	/// ���Ĺ���
const	short	MODEL_COMPENSATION				= 21;	/// ��ǰ����-������Ъ
const	short	MODEL_WHOLE_LEAD_ECG			= 22;	/// ȫ�����ĵ�ͼ
const	short	MODEL_CM_AP						= 23;	/// �ļ�ϸ��������λ
const	short	MODEL_CM_AP_ECG					= 24;	/// �ļ�ϸ��������λ���ĵ�ͼ
const	short	MODEL_DEPRESSOR_NERVE			= 25;	/// ��ѹ�񾭷ŵ�
const	short	MODEL_BP_REGULATION				= 26;	/// ����Ѫѹ����
const	short	MODEL_LVP_BP					= 27;	/// ������ѹ�붯��Ѫѹ
const	short	MODEL_CM_INFRACTION				= 28;	/// �����ļ�������ҩ������
const	short	MODEL_IMPEDANCE					= 29;	/// �迹�ⶨ
const	short	MODEL_HEMODYNAMICS				= 30;	/// Ѫ������ѧ

///1.3 --------------------  ����ʵ��. ----------------------------------------
const	short	MODEL_MIDRIFF_NERVE				= 40;	/// ���񾭷ŵ�
const	short	MODEL_RESPIRATORY_REGULATION	= 41;	/// �����˶�����
const	short	MODEL_RESPIRATORY_PARAM			= 42;	/// ������ز����Ĳɼ��봦��
const	short	MODEL_PULMONARY_FUNC			= 43;	/// ��ͨ�����ܲⶨ

///1.4 --------------------  ����ʵ��. ----------------------------------------
const	short	MODEL_SM_POTENTIAL				= 50;	/// ������ƽ������
const	short	MODEL_SM_FEATURE				= 51;	/// ������ƽ��������������
const	short	MODEL_SM_ACTIVITY				= 52;	/// ������ƽ�����
const	short	MODEL_PA2						= 53;	/// �����������׿������Ĳⶨ

///1.5 --------------------  �о�����ʵ��. ------------------------------------
const	short	 MODEL_MUSCULAR_SPINDLE			= 60;	/// ����ŵ�
const	short	 MODEL_COCHLEAR					= 61;	/// ����΢����ЧӦ
const	short	 MODEL_VEP						= 62;	/// �Ӿ��շ���λ
const	short	 MODEL_BAEP						= 63;	/// �Ը������շ���λ

///1.6 --------------------  ������ʵ��. ------------------------------------						 
const	short	MODEL_EVOKED_POTENTIAL			= 70;	/// ����Ƥ���շ���λ
const	short	MODEL_NEURON_DISCHARGE			= 71;	/// ������Ԫ��λ�ŵ�
const	short	MODEL_EEG						= 72;	/// �Ե�ͼ
const	short	MODEL_SLEEP_EEG					= 73;	/// �Ե�˯�߷���

///1.7 --------------------  ����ʵ��. ----------------------------------------
const	short	MODEL_URINE						= 75;	/// Ӱ�������ɵ�����

///1.8 --------------------  ҩ��ѧʵ��. --------------------------------------
const	short	MODEL_PPA2						= 80;	/// pA2ֵ�Ĳⶨ
const	short	MODEL_ABIRRITATION				= 81;	/// ҩ�����ʹ����
const	short	MODEL_RESCUE					= 82;	/// ���ɲ�׶���Ⱥ������ƵĽ������
const	short	MODEL_DRUG_ON_INTESTINE			= 83;	/// ҩ������峦������
const	short	MODEL_DRUG_ON_RAT_BP			= 84;	/// ������ϵͳҩ����������Ѫѹ��Ӱ��
const	short	MODEL_ARRHYTHMIA				= 85;	/// ҩ���ʵ��������ʧ��������
const	short	MODEL_DRUG_ON_RAT_URINE			= 86;	/// ҩ���������������
const	short	MODEL_DRUG_ON_UTERUS			= 87;	/// �����Ҷ�ض�С���������ӹ�������	

///1.9 --------------------  ��������ѧʵ��. ----------------------------------
const	short	MODEL_RAT_EDEMA					= 90;	/// �����ʵ���Է�ˮ��
const	short	MODEL_SHOCK						= 91;	/// ����ʧѪ���ݿ�
const	short	MODEL_LH_FAILURE				= 92;	/// ��������˥�ϲ���ˮ��
const	short	MODEL_RH_FAILURE				= 93;	/// ��������˥
const	short	MODEL_HYPERKALEMIA				= 94;	/// ���Ը߼�Ѫ֢
const	short	MODEL_RESPIRATORY_BLOCK			= 95;	/// ���ú������ܲ�ȫ

///1.10 -------------------  �޴�Ѫѹ����ʵ��. --------------------------------
const	short	MODEL_NIBP						= 100;	/// �޴�Ѫѹ����

///1.11 -------------------  ��Ĥ������ɢ. ------------------------------------
const	short	MODEL_CCAP_SPAN_WALL			= 101;	/// ��Ĥ������ɢ

///1.12 -------------------  �ٴ�ʵ��. ----------------------------------------
const	short	MODEL_HUMAN_LEAD_II				= 110;	/// �����׼II�����ĵ�ͼ
const	short	MODEL_HUMAN_WHOLE_LEAD			= 111;	/// ����ȫ�����ĵ�ͼ
const	short	MODEL_HUMAN_BP					= 112;	/// ����Ѫѹ


///////////////////////////////////////////////////////////////////////////////
///2.----------------------  ���ݽṹ. ----------------------------------------
///////////////////////////////////////////////////////////////////////////////
/// <�»���> �����2015��8��28�� 14:38:08 �̼�ǿ�Ⱥͷ�Ӧ��ϵ
struct model_amplitude{
	bool		bFlag;									/// true: program control, false: manual control.
	float		fStart;									/// The start excite amplitude, unit: mV.
	float		fStep;									/// The increment step,     unit: mV.
	int			iInterval;								/// The intervals between two pulse, unit: s.
	int			iCur_Num;								/// The current stimulate time.
	int			iStop_Num;								/// The stop time, unit: 
};
typedef struct model_amplitude MODELAMPLITUDE, *PMODELAMPLITUDE;

struct model_frequency{
	bool		bFlag;									/// true->run, false->Stop.
	bool		bFirst_Flag;							/// first start, get time
	bool		bModern_Flag;							/// true->Modern experiment, false->classical experiment.
	bool		bResidual_Flag;							/// residual flag.
	float		fFreq_Step;
	float		fFreq1, fFreq2, fFreq3;
	float		fAmplitude;                             /// �ִ�ģʽ��
	float       fAmplitude1;                            /// ����ģʽ��
	DWORD		dwCounter;								/// counter time.
	int			iNum1, iNum2, iNum3;
	int			iInterval1, iInterval2, iInterval3;
	int			iStep;									/// The excute step.
	int			iWait;
	int			iStop_Num;								/// Stop number in modern experiment
	int			iCur_Num;								/// Stimulate counter.
};
typedef struct model_frequency MODELFREQUENCY, *PMODELFREQUENCY;

/// <�»���> �����2015��8��28�� 16:31:33 �񾭸��˷ܲ�Ӧ�ڲⶨ
struct model_aprefractory {
	bool		bFirst_Flag;
	bool		bFlag;									/// TRUE: Program control, FALSE: Manual control.
	float		fStart;
	float		fStep;
	int			iInterval;
	int			ID;										/// The Channel No for drawing wave graph.
	float		fRelative_No_Respond;					/// The Relative no respondence period, model 15 use.
	float		fAbsolute_No_Respond;					/// The absolute no respondence period.
};
typedef struct model_aprefractory MODELAPREFRACTORY, *PMODELAPREFRACTORY;


/// <�»���> �����2015��8��28�� 17:00:33 �񾭸��˷ܴ����ٶȲⶨ
typedef struct model_apspeed {           
	float		fDistance;								/// The Distance between two electrodes, model 14 use.
	float		fLatent_Difference;						/// The difference between two pulse latent period.
	float		fSpeed;									/// The conduction speed, model 14 use.
} MODELAPSPEED, *PMODELAPSPEED;							/// MODEL_AP_SPEED STRUCT: 12 BYTES.
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__45F2B407_8B55_4754_993C_99B4D01C0724__INCLUDED_)
