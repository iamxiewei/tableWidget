/// <�ļ�˵��>	Common_Constant_Define.h��������Դ���������ȫ�ֳ������ṹ����ͷ�ļ�
/// <����ʱ��>	2015-5-8	</����ʱ��>
/// <����>		����		</����>
/// <˵��>		���ͨ��ͷ�ļ��д���BL-420N������ȫ����Ϣ�����������ݽṹ�ȡ�
///			��Ӳ���򽻵��ĳ������ṹ��ͨ��Hardware_Constant_Define.h�ļ����롣
///			���ǵ�����ṹ�ǳ���Ҫ����Ӱ�쵽����ϵͳ����ƺ��ȶ��ԣ�ֻ���ɻ��为���޸ġ�
///	</˵��>
/// </�ļ�˵��>
#pragma once

#include	"..\Hardware_Constant_Define.h"
#include	<time.h>

///////////////////////////////////////////////////////////////////////////////
///////////////////////////  1.��Ϣ. //////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///<1.��Ϣ>
enum	MESSAGE		{ WM_MARK=WM_APP+1, WM_SCROLL_DATA, WM_REFRESH_ALL_CHANNELS,WM_REFRESH_A_CHANNEL,\
					  WM_SET_CHANNEL_PARAMS, WM_SET_CHANNEL_DATA, WM_RESTART_DISPLAY, WM_FINISHED_SET_PARAMS, \
					  WM_MODIFY_SCREEN_TIME, WM_UPDATE_REPLAY_DATA,WM_UPDATE_REPLAY_EVENT, WM_INSERT_A_FILE_INTO_TREE,\
					  WM_MODIFY_EVENT,WM_SEND_APNEA_RESUTL, WM_SEND_DESATURATION_RESUTL, WM_SEND_SNORE_RESUTL,\
					  WM_MEASURE_START, WM_MEASURE_END,	WM_UPDATE_A_FRAME_DATA, WM_UPDATE_SYSTEM_STATUS, \
					  WM_UPDATE_DEVICE_BASIC_INFO, WM_UPDATE_DEVICE_USED_INFO, WM_UPDATE_CHANNEL_HEAD_INFO,\
					  WM_UPDATE_A_CHANNEL_INFO,	WM_UPDATE_ENVIRONMENT_INFO,	WM_UPDATE_SYSTEM_NO_INFO,\
					  WM_UPDATE_CHANNEL_STATUS_INFO, WM_UPDATE_DISPLAY, WM_RESET, WM_SYSTEM_INITIALIZE_FINISHED,\
					  WM_SEND_INDEX_BASIC_INFO, WM_UPDATE_A_STIMULATE_INFO, WM_UPDATE_A_EVENT_INFO,\
					  WM_REQUEST_ST_WAVE, WM_DISP_DATA_FRAME_START_POS, WM_SET_ALLOW_STIMULATE_FLAG,\
					  WM_EXPORT_DATA,WM_RESTORE_SPLITTER_SIZE, WM_GET_DATA_LENGTH, WM_SET_DATA_LENGTH_TO_LEFT_VIEW,\
					  WM_SYSTEM_PAUSE, WM_UPDATE_HW_LOG, WM_CHANGE_SCAN_SPEED, WM_UPDATE_A_WIN_DISP_INFO,\
					  WM_CHANGE_LABEL, WM_SET_ST_WORK_MODE, WM_CHANGE_ACTIVE_VIEW, WM_UPDATE_SENSOR_CHANGE,\
					  WM_SEND_CHA_INFO_FINISH, WM_AUTO_TO_ZERO, WM_DEV_REQUEST_UPGRADE_FILE_SECTION, \
					  WM_DEV_UPGRADE_START, WM_DEV_UPGRADE_ERROR, WM_DEV_UPGRADE_SUCCESS, WM_UPDATE_SENSOR_INFO, \
					  WM_UPDATE_RESULT_VIEW_DISPLAY, WM_DROP_PARAM_SETTING, \
				   WM_LIGHT_STI_START_STI, WM_STOP_STIMULATE, WM_UPDATE_CHILD_FRM_LAYOUT, WM_O2_AUTO_TO_ZERO, WM_EXPORT_ADD_WAVE_DATA, WM_SCREENSHOTS_COMPLETE, \
                   WM_REQUEST_CUSTOM_TRIGGER_DATA, WM_UPDATE_CUSTOM_TRIGGER_DATA, WM_UPDATE_MEASURE_SPECIAL_DATA, \
				   WM_SYNCHRONIZES_LEFT_VIEW_SCALE, WM_MEASURE_DROP, WM_MICROCIRCULATION_SYNCHRONOUS_RECORD_START, \
				   WM_MICROCIRCULATION_SYNCHRONOUS_RECORD_PAUSE, WM_MICROCIRCULATION_SYNCHRONOUS_RECORD_RESUME, \
				   WM_MICROCIRCULATION_SYNCHRONOUS_RECORD_STOP, WM_MICROCIRCULATION_SHUT_DOWN, WM_MICROCIRCULATION_START_VIDEO, WM_GET_MICROCIRCULATION_STATE, \
				   WM_UPDATE_MAGNIFYING_GLASS_DATA, WM_DATA_SAVE, WM_MEASURE_WAVE, WM_MEASURE_THRESHOLD_WAVE, WM_UPDATE_REALTIME_MEASURE_DATA, \
	               WM_DISPLAY_DATA_WND, WM_UPDATE_MEASURE_DROP_AUTO
};


///   ��Ϣ1-6��CESA_100View�ദ����Ϣ7-10��CMain_Frame������Ϣ11-13��ESA_100View����
///1. WM_REFRESH_ALL_CHANNELS:		ˢ��������ʾͨ����		wParam	= 0;			lParam = ��ʼ��ʾʱ��
///2. WM_REFRESH_A_CHANNEL:			ˢ��ָ����ʾͨ����		wParam	= ͨ����;		lParam = 0
///3. WM_SET_CHANNEL_PARAMS:		Ϊָ��ͨ���趨������	wParam	= ͨ����;		lParam = ָ��HW_Channel_Info�ṹ��ָ��
///4. WM_SET_CHANNEL_DATA:			Ϊָ��ͨ��װ�����ݣ�	wParam	= ͨ����;		lParam = ָ��FILL_CHA_DATA_INFO�ṹ��ָ��
///5. WM_RESTART_DISPLAY:			���´��ļ�ˢ����ʾ��	wParam	= �µ�ͨ����;	lParam = 64λʵ����ʼʱ��������ָ��
///6. WM_FINISHED_SET_PARAMS:		����ͨ������������ɣ�	wParam	= 0;			lParam = �ļ����������ܵ�ʱ��

///7. WM_MODIFY_SCREEN_TIME:		�޸���Ļ��ʾʱ���ȣ�	wParam	= ͨ���ţ�		lParam = �µ���Ļʱ�䣬ͨ���ſ���ΪALL_CHANNELS
///8. WM_UPDATE_REPLAY_DATA:		���·������ݣ�			wParam	= �ӿںţ�		lParam = ��һͨ����Ļ��ʼλ�õ㣨���ļ��У�
///9. WM_UPDATE_REPLAY_EVENT:		���·����¼���			wParam	= �ӿںţ�		lParam = ��һͨ����Ļ��ʼλ�õ㣨���ļ��У�
///10. WM_INSERT_A_FILE_INTO_TREE:	�����ļ����뵽Ŀ¼���У�wParam	= �������ݣ�	lParam = �ļ���
///									INSERT_DIR_AND_FILENAME(����Ŀ¼���ļ���),  INSERT_FILENAME(�������ļ���)
///11. WM_MODIFY_EVENT:				�޸��¼���				wParam	= �ź����ͣ�	lParam = �¼���

///12. WM_SEND_APNEA_RESUTL:		���ݺ�����ͨ�����������wParam	= ͨ���ţ�		lParam = ָ��ANALYSIS_SEGMENT_RESULTS�ṹ��ָ��
///13. WM_SEND_DESATURATION_RESUTL:	�����������������		wParam	= ͨ���ţ�		lParam = ָ��ANALYSIS_SEGMENT_RESULTS�ṹ��ָ��
///14. WM_SEND_SNORE_RESUTL:		���ݴ������������		wParam	= ͨ���ţ�		lParam = ָ��ANALYSIS_SEGMENT_RESULTS�ṹ��ָ��
///15. WM_MEASURE_START:			�����������ܣ�			wParam	= �������ͣ�	lParam = 0
///16. WM_MEASURE_END:				�����������ܣ�			wParam	= �������ͣ�	lParam = �������µ����в������

/// ���µ���Ϣ��BL-420N����������Ϣ����Ҫ���ڹ۲���ģʽ�и�������ע��Ĺ۲���
///	WM_UPDATE_A_FRAME_DATA:			����һ֡���ݣ�			wParam	= �߼�ͨ���ţ�	lParam = 4�ֽ����ݳ��� + float���͵�����
/// WM_UPDATE_SYSTEM_STATUS:		����ϵͳ״̬��			wParam	= ��ϵͳ״̬��	lParam = ��ͣ��־��true: ֹͣ��false: ����
/// WM_UPDATE_DEVICE_BASIC_INFO		�����豸������Ϣ��		wParam	= 0,			lParam = PDEVICE_BASIC_INFOָ��
/// WM_UPDATE_DEVICE_USED_INFO		�����豸ʹ����Ϣ��		wParam	= 0,			lParam = PDEVICE_USED_INFOָ��
/// WM_UPDATE_CHANNEL_HEAD_INFO		����ͨ��ͷ��Ϣ��		wParam	= 0,			lParam = PALL_CHANNEL_BASIC_INFOָ������
/// WM_UPDATE_A_CHANNEL_INFO		����һ��ͨ������Ϣ��	wParam	= 0,			lParam = PONE_CHANNEL_INFOָ��
/// WM_UPDATE_ENVIRONMENT_INFO		���»�����Ϣ��			wParam	= 0,			lParam = PENVIRONMENT_INFOָ��
///	WM_UPDATE_SYSTEM_NO_INFO		�����߼�ͨ�������Ϣ��	wParam	= �߼�ͨ������	lParam = PSYSTEM_NOָ�룬���������߼�ͨ����Ϣ
///	WM_UPDATE_CHANNEL_STATUS_INFO	�����߼�ͨ����״̬��Ϣ��wParam	= �߼�ͨ������	lParam = PCHANNEL_STATUS_INFOָ��
///	WM_UPDATE_DISPLAY				ˢ��������ʾ			wParam	= 0��			lParam = 0
///	WM_RESET						���ã�����������ʾ		wParam	= 0��			lParam = 0
///	WM_SYSTEM_INITIALIZE_FINISHED	ϵͳ��ʼ�����			wParam	= 0��			lParam = 0 
///	����������Ϣ��CBasic_Chart��OnCreate�з��������ڣ�ϵͳ�ȳ�ʼ�������ڣ�����Document������View��
///	WM_SEND_INDEX_BASIC_INFO		���������ļ�������Ϣ	wParam	= 0��			lParam = PBASIC_INDEX_FILE_INFOָ�� 
///	WM_UPDATE_A_STIMULATE_INFO		����һ���̼���Ϣ		wParam	= �Ѵ�������֡����ʵʱ����0�����ݣ���lParam = PSAVE_STIMULATE_INFOָ�� 
///	WM_UPDATE_A_EVENT_INFO			����һ���¼���Ϣ		wParam	= add or not��	lParam = PEVENT_INFOָ�� 
///	WM_REQUEST_ST_WAVE				Ӳ��������0.5s��������wParam	= �����ţ�		lParam = 0
///	WM_DISP_DATA_FRAME_START_POS	��ʾ����֡֡ͷλ��		wParam	= 0��			lParam = 0
///	WM_SET_ALLOW_STIMULATE_FLAG		�����Ƿ������û����̼�	wParam	= �����־��true���ɷ��̼���false�����ɷ��̼�����lParam = 0
///	WM_EXPORT_DATA					ԭʼ���ݵ���			wParam	= 0��			lParam	= PEXPORT_DATA_INFO
///	WM_RESTORE_SPLITTER_SIZE		�ָ������С			wParam	= 0��			lParam	= 0
///	WM_GET_DATA_LENGTH				���ӵõ�ʵʱ�������ݳ���wParam	= 0��			lParam	= 0
///	WM_SET_DATA_LENGTH_TO_LEFT_VIEW	������ʵʱ�������ݳ���	wParam	= 0��			lParam	= ��ǰʵʱ�������ݳ���
///	WM_SYSTEM_PAUSE					ϵͳ��ͣ����			wParam	= 0��			lParam	= ϵͳ��ͣ��ֹͣ��־
///	WM_UPDATE_HW_LOG				����Ӳ����־			wParam	= ��־���ȣ�	lParam	= ASCII����־����
///	WM_CHANGE_SCAN_SPEED			�û��޸���ɨ���ٶ�		wParam	= ͨ���ţ�		lParam	= �µ�ɨ���ٶȵ�ָ��
///	WM_CHANGE_SCAN_SPEED��ͨ���ſ���ΪALL_WIN��999����ʾ�޸�������ͨ��ɨ���ٶȣ�����Ϊ�������ʾ����ͨ����
///	WM_UPDATE_A_WIN_DISP_INFO		����ָ��ͨ����ʾ��Ϣ	wParam	= ͨ���ţ�		lParam	= PWINDOW_DISP_INFOָ��
///	WM_CHANGE_LABEL					�û��޸ı�ǩ			wParam	= ��ǩ�޸����ͣ�lParam	= PEVENT_INFOָ��
///	WM_SET_ST_WORK_MODE				���ô̼����Ĺ���ģʽ	wParam	= 0��			lParam	= PST_WORK_MODE
/// WM_CHANGE_ACTIVE_VIEW			��ǰ���ͼ�����仯�¼� wParam = true or false(�Ƿ񼤻�) lParam = CView *���������ͼָ�룩
/// WM_UPDATE_SENSOR_CHANGE			Ӳ������ͨ�������������仯�¼� wParam= �豸�ţ�	lParam	= �豸����ͨ����
/// WM_SEND_CHA_INFO_FINISH			����Ӳ������ͨ����Ϣ����¼�������ʱ���ÿ̨�豸ͨ����Ϣ���������wParam= �豸�ţ�lParam= 0
/// WM_AUTO_TO_ZERO					ָ��ͨ��Ӳ���Զ������¼�wParam	= �����ţ�		lParam	= ����ͨ����
///	WM_DEV_REQUEST_UPGRADE_FILE_SECTION			����Ӳ����������������������֡�¼� wParam	= Ӳ�����������ļ���ʼ��ַ�� 
/// lParam	= Ӳ�����������ļ�������ַ�����һ֡��Ҫ����
/// WM_DEV_UPGRADE_START			Ӳ�����������ļ���ʼ��ַ���������¼� wParam	= 0��lParam	= 0
/// WM_DEV_UPGRADE_ERROR			Ӳ���������������¼����������صĹ̼�����У�����������жϣ�wParam	= 0��	lParam	= 0
/// WM_DEV_UPGRADE_SUCCESS			Ӳ�����������ɹ��¼�	wParam	= 0��			lParam	= 0
///	
/// Ӳ�����������ͨѶ�������ݵ�˵��
/// ���������ָ�GET_ENVIRONMENT_INFO���²�ذ���FRAME_ENVIRONMENT_INFO��
/// ���������ָ�GET_DEVICE_INFO���²�ذ���FRAME_DEVICE_BASIC_INFO��
/// ���������ָ�GET_USED_INFO���²�ذ���FRAME_DEVICE_USED_INFO��
/// ���������ָ�GET_ALL_CHANNENL_INFO���²�ذ���FRAME_CHA_HEAD_INFO + N*FRAME_A_CHA_INFO + FRAME_FINISHED_CHA_INFO
/// FRAME_TRANSDUCER_CHANGE�����ڲ��������д������ı���ͣ�

#define HOT_KEY_POPUP_TEST_DLG			1001						/// �������ԶԻ����ȼ�
///</1.��Ϣ>
///////////////////////////////////////////////////////////////////////////////
///////////////////////////  2.����. //////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///<2.1 ö�ٳ���> 
enum WIN3_POS		{ PART_NO, PART_LEFT, PART_RIGHT, PART_BOTTOM, PART_WIN3, PART_COMMON_TIME };

enum WIN3_SPACE		{ MIN_TOP_MARGIN = 15, MAX_TOP_MARGIN = 20, MIN_BOTTOM_MARGIN = 2, \
	                  MAX_BOTTOM_MARGIN = 20, DEF_GRIDY=15, INTERVAL = 20, LABEL_VERTICAL_OFFSET = 10 };

enum SCALE_SPACE	{ MIN_X_SCALE_WIDTH = 25, MIN_X_SCALE_HEIGHT = 10, SCALE_LEN = 4, \
	                  MIN_Y_SCALE_WIDTH = 20, MIN_Y_SCALE_HEIGHT = 30, Y_SCALE_WIDTH = 20 };

enum INFO_SPACE		{ INFO_LEFT = 5, INFO_TOP = 5, INFO_RIGHT = 5, INFO_INTERVAL = 20, \
	                  MAX_INFO_WIDTH = 80, INFO_HIGH=16 };

enum FONT_SIZE		{ FONT_MARK = -10, FONT_EVENT = -12, FONT_SCALE = -12,	FONT_INFO = -12,\
	                  FONT_HORIZONTAL_MEASURE = -16, FONT_REAL_TIME_MONITOR = 32 };

enum TIME_FORMAT	{ TIME_FORMAT_DAY,	TIME_FORMAT_HOUR };

enum WAVE_DISP_TYPE { WAVE_DISP_CONTINUE, WAVE_DISP_MONITOR, WAVE_DISP_OSCILLO };

enum WAVE_DISP_MODE { WAVE_DISP_MODE_CE, WAVE_DISP_MODE_CC, WAVE_DISP_MODE_ME, WAVE_DISP_MODE_MC,\
	                  WAVE_DISP_MODE_OE, WAVE_DISP_MODE_OC};
///</2.1 ö�ٳ���>

///////////////////////////////////////////////////////////////////////////////
///<2.2 ��������>

//#define		ENGLISH											/// ���Գ���
//#define     _ENGLISH                                        /// Ӣ�İ���Գ���

//#define     _HUMAN_EXP                                          ///��������ʵ�鳣��

#define		STANDARD_ATMOSPHERE	 760							/// ��׼����ѹ��760mmHg��

#define		PI					 3.14159265358979315			/// Բ���ʣ�circumference ratio��
#define		NATURE_E			 ((double)2.718281828)			/// ��Ȼ����������natural logarithm��

/// ��λת��
const	double		V_TO_MV						= 1000.0;		/// ��ѹ V ת��Ϊ mV ʱ��ת������
const	double		MV_TO_UV					= 1000.0;		/// ��ѹ mV ת��Ϊ uV ʱ��ת������
const	double		G_TO_MG						= 1000.0;		/// ���� g ת��Ϊ mg ʱ��ת������
const	double		L_TO_ML						= 1000.0;		/// ���� l ת��Ϊ ml ʱ��ת������
const	double		LM_TO_MLS					= 16.666667;	/// ���� l/min ת��Ϊ ml/s ʱ��ת������
const	double		KPA_TO_MMHG					= 7.5;			/// ѹ�� KPa ת��Ϊ mmHg ʱ��ת������
const	double		MMHG_TO_CMH2O				= 1.36;			/// ѹ�� mmHg ת��Ϊ cmH2O ʱ��ת������

const	short		FILE_MAIN_VERSION			= 1;			/// ��Ƶ��ļ���ʼ���汾Ϊ1
const	short		FILE_MINOR_VERSION			= 0;			/// ��Ƶ��ļ���ʼ�ΰ汾Ϊ0

/// �ӿں�
const	int			LEFT_VIEW_NO				= 0;			/// ���Ӻ�
const	int			RIGHT_VIEW_NO				= 1;			/// ���Ӻ�

///////////////////////////  6.5 �¼���ʾ���� /////////////////////////////////
const	short		ALARM_TIP_NOT				= 0;			/// ����ʾ��
const	short		ALARM_TIP_ONE_SHORT_VOICE	= 1;			/// һ������
const	short		ALARM_TIP_TWO_SHORT_VOICE	= 2;			/// ��������
const	short		ALARM_TIP_THREE_SHORT_VOICE	= 3;			/// ��������
const	short		ALARM_TIP_ONE_LONG_VOICE	= 4;			/// һ������
const	short		ALARM_TIP_TWO_LONG_VOICE	= 5;			/// ��������
const	short		ALARM_TIP_THREE_LONG_VOICE	= 6;			/// ��������
const	short		ALARM_TIP_CONTINUOUS_VOICE	= 7;			/// ��������
const	short		ALARM_TIP_OTHER				= 8;			/// ������ʾ����������

/// ������
const	BOOL		START						= 0;			/// ��ʼ
const	BOOL		PAUSE						= 1;			/// ��ͣ

const	BOOL		UP							= 1;			/// ��������
const	BOOL		DOWN						= 0;			/// ��������

const	short		INSERT_DIR_AND_FILENAME		= 1;			/// ���������ļ����������б��в���Ŀ¼���ļ�
const	short		INSERT_FILENAME				= 0;			/// ����ԭ��Ŀ¼�Ѵ��ڣ������������ļ�

const	int			DELETE_CUR_OPENED_FILE		= 0;			/// ɾ����ǰ�򿪵��ļ�
const	int			DELETE_POINTED_NAME_FILE	= 1;			/// ɾ��ָ�����ֵ��ļ�

/// ����
const	BOOL		DESATURATION_PERCENT3		= 3;			/// ��ȡ3%�������¼�
const	BOOL		DESATURATION_PERCENT4		= 4;			/// ��ȡ4%�������¼�������Ĭ��ֵ
const	short		ONCE_GET_DATA_SIZE			= 1000;			/// ÿ��ÿͨ����������ݲ�������ֵ

const	short		INTEGRAL_TYPE_PLUS			= 1;			/// �������֣�	ֻ�ۼ�����
const	short		INTEGRAL_TYPE_MINUS			= 2;			/// �������֣�	ֻ�ۼӸ���
const	short		INTEGRAL_TYPE_ABSOLUTE		= 3;			/// ����ֵ���֣��ۼ�����ֵ�ľ���ֵ
const	short		INTEGRAL_TYPE_NORMAL		= 4;			/// �������֣�	��ԭֵ�����ۼ�

/// ���������ź����ͣ���Ҫ����ģ������ݴ��ݱ�ʶ�����ʲô�ź�
const   short       NORMAL_SINGAL               = 0;			/// ��ͨ�ź�

const	short       ECG_SIGNAL			         = 1;            /// �ĵ��ź�
const   short       BREATHE_FLOW_VELOCITY_SIGNAL = 2;            /// ���������ź�
const   short       BREATHE_FLOW_SIGNAL          = 3;            /// ���������ź�
const   short       NERVE_DISCHARGE_SIGNAL       = 4;            /// �񾭷ŵ��ź�
const   short       PRESSURE_SIGNAL              = 5;            /// ѹ���ź�
const   short       BP_SIGNAL                    = 6;            /// ����Ѫѹ�ź�
const	short		DEF_DATA_BLOCK_SIZE			 = 1024;		 /// Ĭ�����õ���ʱ�Դ��ļ���ȡ���ݵĴ����ռ��С
///</2.2 ��������>

///<2.3 Ĭ��ֵ�����Сֵ>
/// ͨ����������Ĭ�ϴ�С��0.5M �����㣨2.MBytes�����ռ䣩
/// ԭʼ�������ݵĴ����ؼ���СΪ��
///	2M * 10(Channels) * 2(View) * 4(Replya file) = 160M
/// 10��ͨ����˫�ӣ���ͬʱ��4�������ļ�(�൱��4��ԭʼ����)��
/// ��������ռ�����������ռ��һ���С���ң���������ϵͳ��Ҫ320M�����ռ�
const	long		DEF_SAMPLE_DATA_BUF_SIZE	= 500000;	/// ��ʼ����������СΪ500K Bytes	

const	short		DEF_CHANNEL_NUMBER			= 4;			/// ϵͳĬ�ϵ�ͨ����.
const	float		DEF_SAMPLE_RATE				= 1000.0f;		/// ϵͳĬ�ϵĲ�����.

const	short		DEF_FFT_LENGTH				= 1024;			/// Ĭ�ϵ�Ƶ�׷�������
const	short		MAX_FFT_LENGTH				= 2048;			/// ����Ƶ�׷�������

const	short		MIN_DATA_DISP_BUF_LEN		= 2048;			/// ��С������ʾ�������Ĵ�С
const	short		MIN_DATA_PROCESS_BUF_LEN	= 2048;			/// ��С���ݴ��������Ĵ�С

const	short		MAX_FIND_LABEL_NUMBER		= 1024;			/// �������û���ǩ��
const	short		MAX_EVENT_EXTRA_BUF_LENGTH	= 2048;			/// ����¼�����ռ��С������Label���ж���ռ�

const	short		MAX_CONNECT_DEVICE_NUMBER	= 8;			/// ������������豸��.
const	short		MAX_TOTAL_CHANNEL_NUMBER	= 256;			/// ϵͳ��������ͨ����.
const	short		MAX_SAMPLE_CHANNEL_NUMBER	= 128;			/// ϵͳ�����������ͨ����.
const	short		MAX_ANALYSIS_CHANNEL_NUMBER	= 128;			/// ϵͳ�����������ͨ����.
const	short		MAX_VIEW_NUMBER				= 2;			/// �������������Ӻ�����

const	short		MIN_DISP_DISTANCE_EVENT_FROM_TOP	= 25;	/// �¼��ڴ�������ʾ�봰�ڶ�������С���룬��λ������

const	short		MAX_DATA_DOCUMENT_NUMBER	= 4;			/// ������ͬʱ�򿪵ķ��������ĵ���

const	short		MAX_LABEL_NAME				= 64;			/// ����ǩ���ֳ���

const	short		MAX_UDP_FRAME_LENGTH		= 3200;			/// ���UDP֡���ȣ�ReceiveFrom����ʹ��
const	long		MAX_DATA_FRAME_LENGTH		= 60000;		/// Ӳ����������֡������ֽ���

const	short		MAX_FILENAME				= 256;			/// �ļ�������󳤶�
const	short		MAX_MEMO_LENGTH				= 256;			/// ��ע����󳤶�
const	short		MAX_ANALYSIS_PARAMS			= 16;			/// һ��ʵ����һ��ͨ������������������
const	short		MAX_EVENT_NAME_LENGTH		= 64;			/// �¼����ֵ���󳤶�

const	short		MAX_FFT_NUMBER				= 4096;			/// ���FFT��������ЧFFT������Ҫ����2
const	short		MIN_FFT_NUMBER				= 64;			/// ��СFFT����

const	short		MAX_REGISTER_WINDOW_NUMBER	= 16;			/// �۲���ģʽ�У����ע�ᴰ����

const	short		MAX_REGISTER_TYPE			= 16;			/// �۲���ģʽ�У�ĳ�����۲�������ע�����Ϣ����

const	short		MAX_OPEN_REPLAY_FILE_NUMBER	= 8;			/// �������ͬʱ�򿪵ķ����ļ���.

//���Ĵ�������С��short��Χ
const	short		MAX_TRIGGER_LEN				= 16384;		/// ���̼��������ȣ�4096������
const	short		MAX_TRIGGER_RECENT_NUM		= 10;			/// ������ʽ�£����ͬʱ��ʾ������

const	float		MAX_COMPRESS_RATIO			= 400;			/// ���ѹ���ȣ�ѹ��400��
const	float		MIN_COMPRESS_RATIO			= 0.1f;			/// ��Сѹ���ȣ�ѹ��0.1��������չ10��

/// �������ܶ�ֱ��ͼͳ��ϸ���ڸ��ַŵ�Ƶ�ʵĴ������ŵ�Ƶ��Ϊÿ��ŵ���������Ƿ������ܶ�ֱ��ͼ��x�ᣬҲ�ǽ�
///	ͳ�ƽ�������������е��±꣬��10Hz�ŵ������ۼ�ͳ�ƴ�����±�Ϊ10������Ԫ���У������Ҫ����һ�����ֵ������Խ��
const	short		MAX_NON_SEQUENCE_FREQ		= 1000;			/// ���ķ������ܶ�ֱ��ͼƵ��

const	short		MAX_SECOND_SAMPLE_INNER_CHA_NUMBER	= 16;	/// �����β���Ӳ���ڲ�ͨ����

///</2.3 Ĭ��ֵ�����Сֵ>

///<3. ϵͳ״̬>
///////////////////////////  3.1 ϵͳ����״̬ /////////////////////////////////
const	short		SYSTEM_STOP					= 0;			/// ϵͳֹͣ
const	short		SYSTEM_REAL_TIME_SAMPLE		= 1;			/// ϵͳʵʱ��������
const	short		SYSTEM_REPLAY				= 2;			/// ϵͳ����
const   short       SYSTEM_UNKOWN               = -1;			/// ϵͳΪֹ״̬

///////////////////////////  3.2 �ĵ�����. /////////////////////////////////////
const	short		DOCUMENT_TYPE_DATA			= 0;			/// 420�����ĵ�
const	short		DOCUMENT_TYPE_MODEL			= 1;			/// 420ʵ��ģ�������ĵ�
const	short		DOCUMENT_TYPE_REPORT		= 2;			/// 420ʵ�鱨���ĵ�
const	short		DOCUMENT_TYPE_VIDEO			= 3;			/// 420¼���ĵ�
const	short		DOCUMENT_TYPE_FLASH			= 4;			/// 420FLASH�ĵ�
const	short		DOCUMENT_TYPE_WEB			= 5;			/// 420��ҳ�ĵ�
const	short		DOCUMENT_TYPE_OTHER			= 6;			/// 420�����ĵ�

const	short		SYSTEM_SEARCH_MASTER		= 3;			/// ������������״̬��ϵͳ����ĳ�ʼ״̬

const	short		REGTYPE_CHA_DATA			= 0;			/// ע���ȡͨ��������Ϣ
const	short		REGTYPE_DEVICE_BASIC_INFO	= 1;			/// ע���ȡ�豸������Ϣ
const	short		REGTYPE_DEVICE_USED_INFO	= 2;			/// ע���ȡ�豸ʹ����Ϣ
const	short		REGTYPE_ENVIRONMENT_INFO	= 3;			/// ע���ȡ������Ϣ
const	short		REGTYPE_CHANNEL_HEAD_INFO	= 4;			/// ע���ȡ����ͨ��ͷ��Ϣ
const	short		REGTYPE_A_CHANNEL_INFO		= 5;			/// ע���ȡ�豸ͨ����Ϣ������ͨ��ͷ��Ϣ��ÿ��ͨ������ϸ��Ϣ
const	short		REGTYPE_STIMULATE_INFO		= 6;			/// ע���ȡ�̼���Ϣ
const	short		REGTYPE_DROP_INFO			= 7;			/// ע���ȡ�ǵ���Ϣ
const	short		REGTYPE_REQUEST_ST_WAVE		= 8;			/// ע������0.5s�̼�����������Ϣ

const	short		REGTYPE_REQUEST_HW_LOG		= 9;			/// ����Ӳ����־
const	short		REGTYPE_HW_UPGRADE_STATUS	= 10;			/// ע�������ȡӲ���̼�����״̬

const    short      REGTYPE_SENSOR_INFO         = 11;           /// ע���ȡ��������Ϣ�������������ͺŵ�

const    short      REGTYPE_STOP_STIMULATE      = 12;           /// ע��ֹͣ�̼�
///////////////////////////  3.2 ���ݲ�������. ////////////////////////////////
///<���ݲ�������>
const	short		MEASURE_NO							= 0;	/// �޲���
const	short		MEASURE_DURATION					= 1;	/// ������Ļָ����ȵ�ʱ��
const	short		MEASURE_DOUBLE						= 2;	/// �������
const	short		MEASURE_SECTION						= 3;	/// �������
const	short		MEASURE_HORIZONTAL_VALUE			= 4;	/// ˮƽֵ����
const	short		MEASURE_HEART_FUNCTION				= 5;	/// �Ĺ��ܲ���
const	short		MEASURE_POSTSYNAPTIC_POTENTIAL		= 6;	/// ͻ�����λ����(Postsynaptic potential)
const	short		MEASURE_BLOOD_PRESSURE				= 7;	/// Ѫѹ����(Blood pressure)
const	short		MEASURE_NIBP						= 8;	/// �޴�Ѫѹ����(Non invasive blood pressure)
const	short		MEASURE_HEMODYNAMICS				= 9;	/// Ѫ������ѧ����
const	short		MEASURE_MYOCARDIAL_AP				= 10;	/// �ļ�ϸ��������λ����(Myocardial cell action potential)
const	short		MEASURE_TIDAL_VOLUME				= 11;	/// ����������(�ι��ܲ����е��ӹ���)
const	short		MEASURE_FORCE_VITAL_CAPACITY		= 12;	/// ʱ�䣨�������λ�������(�ι��ܲ����е��ӹ���)
const	short		MEASURE_MAX_PULMONARY_VENTILATION	= 13;	/// ����ͨ�����ܲ���(�ι��ܲ����е��ӹ���)
const	short		MEASURE_AP_SPEED					= 14;	/// �񾭸ɶ�����λ�˷ܴ����ٶȵĲⶨ
const   short       MEASURE_HEART_FUNCTION_SINGLE       = 15;   /// �� �Ĺ��ܲ��� ��ֳ� ���������ķ�ʽ
const   short       MEASURE_DROP                        = 16;   /// �ǵβ�����Ŀǰ��Ҫ�ǲ��������ڼǵ�����
const   short       MEASURE_BREATH                      = 17;   /// �����ⶨ
const   short       MEASURE_LEFT_VENTRICULAR_PRESSURE   = 18;   /// ������ѹ����
const   short       MEASURE_THRESHOLD_WAVE              = 19;   /// ��ֵ�������ػ��½��أ���
const   short       MEASURE_DROP_AUTO                   = 20;   /// �ǵβ�����Ŀǰ��Ҫ�ǲ��������ڼǵ�����
const	short		MEASURE_OTHER						= 99;	/// �����������������͵����ֵ

///<��������>
const	short		STEP_FIRST					= 0;
const	short		STEP_SECOND					= 1;
const	short		STEP_THIRD					= 2;
const	short		STEP_FOURTH					= 3;
const	short		STEP_FIFTH					= 4;
const	short		STEP_SIXTH					= 5;
const	short		STEP_SEVENTH				= 6;
const	short		STEP_EIGHTH					= 7;
const	short		STEP_NINTH					= 8;

///<���״̬>
const	short		MOUSE_STATUS_MOVE			= 0;			/// ��괦���ƶ�״̬��û�а����κμ�
const	short		MOUSE_STATUS_LBUTTONDOWN	= 1;			/// ����������
const	short		MOUSE_STATUS_LBUTTONUP		= 2;			/// �ſ�������
const	short		MOUSE_STATUS_RBUTTONDOWN	= 3;			/// ��������Ҽ�
const	short		MOUSE_STATUS_RBUTTONUP		= 4;			/// �ſ�����Ҽ�
const	short		MOUSE_STATUS_LBUTTONDBLCLK	= 5;			/// ˫��������

///<��������س���>
const	short		MAX_MEASURE_HORIZONTAL_LINE	= 4;			/// ��������ʱ����ˮƽ��������
const	short		MAX_MEASURE_VERTICAL_LINE	= 8;			/// ���Ĵ�ֱ������������������ʱ��ֱ�ָ�������
///</3. ϵͳ״̬>

///<4.ʵ��ģ��>
///5.	  -----------------  �Զ���ʵ�鿪ʼģ���. --------------------------------
const	short		CUSTOM_MODEL_NO_START		= 0x2710;		/// �Զ���ʵ��ģ��Ŵ�10000��ʼ��ϵͳ�Դ�ʵ��ģ�����10000����

/// ʵ��ģ�����ز���
const	short		MODEL_NO					= 0;			/// û��ѡ��ʵ��ģ��

///4.1 --------------------  ���������ʵ��ģ��. ----------------------------
const	short		MODEL_MN01					= 0x01;			/// �̼�ǿ���뷴Ӧ�Ĺ�ϵ
const	short		MODEL_MN02					= 0x02;			/// �̼�Ƶ���뷴Ӧ�Ĺ�ϵ
const	short		MODEL_MN03					= 0x03;			/// �񾭸ɶ�����λ
const	short		MODEL_MN04					= 0x04;			/// �񾭸��˷ܴ����ٶ�
const	short		MODEL_MN05					= 0x05;			/// �񾭸��˷ܲ�Ӧ�ڵĲⶨ
const	short		MODEL_MN06					= 0x06;			/// �����˷�-ʱ���ϵ
const	short		MODEL_MN07					= 0x07;			/// ��ǿ���붯����λ�Ĺ�ϵ
const	short		MODEL_MN08					= 0x08;			/// �ļ���Ӧ�ڲⶨ
const	short		MODEL_MN09					= 0x09;			/// ����ά����
const	short		MODEL_MN10					= 0x0a;			/// ʹ��ʵ��
const	short		MODEL_MN11					= 0x0b;			/// ����ŵ�
///�̼�Ƶ���뷴Ӧ�Ĺ�ϵʵ��ģ�����ģ���
const	short		MODEL_MN021					= 0x0c;			/// �̼�Ƶ���뷴Ӧ�Ĺ�ϵ_�ִ�ģʽ
const	short		MODEL_MN022					= 0x0d;			/// �̼�Ƶ���뷴Ӧ�Ĺ�ϵ_����ģʽ

///4.2 --------------------  ѭ��ʵ��ģ��. ------------------------------------
const	short		MODEL_CY01					= 0x11;			/// ���Ĺ���
const	short		MODEL_CY02					= 0x12;			/// ��ǰ����-������Ъ
const	short		MODEL_CY03					= 0x13;			/// �ļ�ϸ��������λ
const	short		MODEL_CY04					= 0x14;			/// �ļ�ϸ��������λ���ĵ�ͼ
const	short		MODEL_CY05					= 0x15;			/// ��ѹ�񾭷ŵ�
const	short		MODEL_CY06					= 0x16;			/// ����Ѫѹ����
const	short		MODEL_CY07					= 0x17;			/// ������ѹ�Ͷ���Ѫѹ
const	short		MODEL_CY08					= 0x18;			/// �����ļ�������ҩ������
const	short		MODEL_CY09					= 0x19;			/// Ѫ������ѧ
const	short		MODEL_CY10					= 0x1a;			/// ȫ�����ĵ�
const   short       MODEL_CY11                  = 0x1b;         /// ����ʵ��

///4.3 --------------------  ����ʵ��ģ��. ------------------------------------
const	short		MODEL_RE01					= 0x21;			/// ���񾭷ŵ�
const	short		MODEL_RE02					= 0x22;			/// �����˶�����
const	short		MODEL_RE03					= 0x23;			/// ������ز����Ĳɼ��봦��
const	short		MODEL_RE04					= 0x24;			/// �ι��ܵĲⶨ

///���񾭷ŵ�ʵ��ģ�����ģ���
const	short		MODEL_RE011					= 0x25;			/// ���񾭷ŵ�_��������������
const	short		MODEL_RE012					= 0x26;			/// ���񾭷ŵ�_����������

///�����˶�����ʵ��ģ�����ģ���
const	short		MODEL_RE021					= 0x27;			/// �����˶�����_��������������
const	short		MODEL_RE022					= 0x28;			/// �����˶�����_����������


///4.4 --------------------  ����ʵ��ģ��. ------------------------------------
const	short		MODEL_DT01					= 0x31;			/// ������ƽ������
const	short		MODEL_DT02					= 0x32;			/// ������ƽ��������������
const	short		MODEL_DT03					= 0x33;			/// ������ƽ�����
const	short		MODEL_DT04					= 0x34;			/// ���������׿������Ĳⶨ

///4.5 --------------------  �й�ʵ��ģ��. ------------------------------------
const	short		MODEL_SE01					= 0x41;			/// ����΢����ЧӦ
const	short		MODEL_SE02					= 0x42;			/// �Ӿ��շ���λ
const	short		MODEL_SE03					= 0x43;			/// �Ը������շ���λ

///4.6 --------------------  ������ʵ��ģ��. --------------------------------
const	short		MODEL_CN01					= 0x51;			/// ����Ƥ���շ���λ
const	short		MODEL_CN02					= 0x52;			/// �����񾭵�Ԫ�ŵ�
const	short		MODEL_CN03					= 0x53;			/// �Ե�ͼ
const	short		MODEL_CN04					= 0x54;			/// �Ե�˯�߷���
const	short		MODEL_CN05					= 0x55;			/// ͻ�����λ�۲�

///4.7 --------------------  ����ϵͳʵ��ģ��. --------------------------------
const	short		MODEL_UR01					= 0x61;			/// Ӱ�������ɵ�����

///4.8 --------------------  ҩ��ʵ��ģ��. ------------------------------------
const	short		MODEL_PH01					= 0x71;			/// PA2�Ĳⶨ
const	short		MODEL_PH02					= 0x72;			/// ҩ�����ʹ����
const	short		MODEL_PH03					= 0x73;			/// ��ȶԺ������ƵĽ������
const	short		MODEL_PH04					= 0x74;			/// ҩ������峦������
const	short		MODEL_PH05					= 0x75;			/// ������ҩ���������Ѫѹ��Ӱ��
const	short		MODEL_PH06					= 0x76;			/// 
const	short		MODEL_PH07					= 0x77;			/// 
const	short		MODEL_PH08					= 0x78;			/// 

///��ȶԺ������ƵĽ������ʵ��ģ�����ģ��
const	short		MODEL_PH031					= 0x79;			/// ��ȶԺ������ƵĽ������_��������������
const	short		MODEL_PH032					= 0x7A;			/// ��ȶԺ������ƵĽ������_����������

///4.9 --------------------  ����ʵ��ģ��. ------------------------------------
const	short		MODEL_PA01					= 0x81;			/// ����ʵ���Է�ˮ��
const	short		MODEL_PA02					= 0x82;			/// ����ʧѪ���ݿ˼�������
const	short		MODEL_PA03					= 0x83;			/// ��������˥�ϲ���ˮ��
const	short		MODEL_PA04					= 0x84;			/// ��������˥
const	short		MODEL_PA05					= 0x85;			/// ���Ը�Ѫ��֢
const	short		MODEL_PA06					= 0x86;			/// ���ú������ܲ�ȫ
const   short       MODEL_PA07                  = 0x8B;         /// ʵ����ȱ��

///����ʧѪ���ݿ˼�������ʵ��ģ�����ģ��
const	short		MODEL_PA021					= 0x87;			/// ����ʧѪ���ݿ˼�������_��������������
const	short		MODEL_PA022					= 0x88;			/// ����ʧѪ���ݿ˼�������_����������

//���ú������ܲ�ȫ����ģ��
const	short		MODEL_PA061					= 0x89;			/// ���ú������ܲ�ȫ_��������������
const	short		MODEL_PA062					= 0x8A;			/// ���ú������ܲ�ȫ_����������

///4.10 -------------------  ����ʵ��ģ��. ------------------------------------
const	short		MODEL_OH01					= 0x91;			/// �޴�Ѫѹ�ⶨ

const	short		MODEL_OH02					= 0x92;			/// �������̼��Լ��������Ͷ�����λ��Ӱ��
const	short		MODEL_OH03					= 0x93;			/// �������̼��Լ��������Ͷ�����λ��Ӱ��
const	short		MODEL_OH04					= 0x94;			/// ����˫�̼��Լ��������Ͷ�����λ��Ӱ��

//�������̼��Լ��������Ͷ�����λ��Ӱ�����ģ��
const	short		MODEL_OH031					= 0x95;			/// �������̼��Լ��������Ͷ�����λ��Ӱ��_�ִ�ģʽ
const	short		MODEL_OH032					= 0x96;			/// �������̼��Լ��������Ͷ�����λ��Ӱ��_����ģʽ



///</4. ʵ��ģ��>

///<5. ��ʾ��ز���>
///////////////////////////  5.1 ��ʾ���� /////////////////////////////////////
/// �������Ҫ��CChart����ȡ��������ʹ�ã����ã�����ô��Ӧ�ÿ��ǵ�����Щ������ȡ���������ڸ�����
const	int			DISP_NORMAL					= 0;			/// ������ʾ��ʽ
const	int			DISP_TRIGGER				= 1;			/// �̼�������ʾ��ʽ
const	int			DISP_ANALYZE				= 2;			/// ����ģʽ

const	short		ALL_WIN						= 999;			/// ��ʾ���д���

const	short		R_WAVE_UP					= 1;			/// R������
const	short		R_WAVE_DOWN					= 2;			/// R������
const	float		R_DIRECTION_RATIO			= 0.7f;			/// R�����Ϸ��ȴ������·���x%���ж�Ϊ���γ���

///////////////////////////  5.2 ���γ��ַ��� /////////////////////////////////
const	short		FROM_RIGHT_TO_LEFT			= -1;			/// ��ʾ������ҵ���
const	short		FROM_LEFT_TO_RIGHT			= 1;			/// ��ʾ���������

///////////////////////////  5.3 ��ʾģʽ /////////////////////////////////////
const	BYTE		NORMAL_MODE					= 0;			/// ������ʾģʽ����������
const	BYTE		OSCILLO_MODE				= 1;			/// ʾ����ģʽ������ɨ��
const	BYTE		SCAN_MODE					= 2;			/// �໤�Ƿ�ʽ������ɨ��

const	BYTE		COMPARE_MODE				= 3;			/// �Ƚ���ʾ

///////////////////////////  5.4 WIN3���ڳ��� /////////////////////////////////
const	short		WIN3_PEN_LENGTH				= 8;			/// win3����ʾ��ʵĳ���
const	short		WIN3_SCALE_WIDTH			= 70;			/// win3������ߵı����
const	short		WIN3_INFO_WIDTH				= 170;			/// win3�ұ���Ϣ��ʾ���Ŀ��

///////////////////////////  5.5 Win3���ڵ�x������� //////////////////////////
const	int			CONTINUE_X_SCALE			= 0;			/// �������ݱ��
const	int			INTERVAL_X_SCALE			= 1;			/// ���ʱ����

///////////////////////////  5.6 ��ɫ /////////////////////////////////////////
const	COLORREF	COLOR_WHITE					= RGB(255,255,255);
const	COLORREF	COLOR_BLACK					= RGB(0,0,0);
const	COLORREF	COLOR_BLACKISH				= RGB(45,45,45);
const	COLORREF	COLOR_RED					= RGB(255,0,0);
const	COLORREF	COLOR_GREEN					= RGB(0,255,0);
const	COLORREF	COLOR_BLUE					= RGB(0,0,255);
const	COLORREF	COLOR_YELLOW				= RGB(255,255,0);
const	COLORREF	COLOR_PURPLE				= RGB(255,0,255);
const	COLORREF	COLOR_DARK_RED				= RGB(128,0,0);
const	COLORREF	COLOR_DARK_GREEN			= RGB(0,128,0);
const	COLORREF	COLOR_DARK_BLUE				= RGB(0,0,128);
const	COLORREF	COLOR_DARK_YELLOW			= RGB(128,128,0);
const	COLORREF	COLOR_WHITE_GRAY			= RGB(210,210,210);
const	COLORREF	COLOR_BRIGHT_GRAY			= RGB(192,192,192);		/// ����ɫ�����ƴ���
const	COLORREF	COLOR_WIN7_GRAY				= RGB(172,168,153);
const	COLORREF	COLOR_GRAY					= RGB(128,128,128);
const   COLORREF    COLOR_LIGHT_DARK_GRAY       = RGB(80, 80, 80);
const	COLORREF	COLOR_DARK_GRAY				= RGB(64,64,64);
const	COLORREF	COLOR_SILVER_GRAY			= RGB(224,223,227);
const	COLORREF	COLOR_ORANGE				= RGB(255,128,64);		/// �Ⱥ�ɫ��	����MA
const	COLORREF	COLOR_GRAY_WHITE			= RGB(240,240,240);
const	COLORREF	COLOR_MILK_WHITE			= RGB(250,250,245);

const	COLORREF	COLOR_RED_ORANGE			= RGB(255, 92, 48);		/// �Ⱥ�ɫ��	����CA
const	COLORREF	COLOR_ROSINESS				= RGB(255,192,128);		/// �һ�ɫ��	����OA
const	COLORREF	COLOR_INCARNADINE			= RGB(255,224,200);		/// ��ɫ��		����Hyponea
const	COLORREF	COLOR_CANARY_YELLOW			= RGB(255,242,128);		/// ����ɫ��	��������

const	COLORREF	COLOR_ECG_GRID				= RGB(255,224,160);
const	COLORREF	COLOR_SCALE_FONT			= RGB(24,88,184);		/// ����ɫ

const	COLORREF	COLOR_XP					= RGB(236,233,216);
const	COLORREF	COLOR_WIN7					= RGB(191,219,255);
const	COLORREF	COLOR_BRIGHT_WIN7			= RGB(220,235,255);

const	COLORREF	COLOR_GAP1					= RGB(236,233,216);
const	COLORREF	COLOR_GAP2					= COLOR_WHITE;
const	COLORREF	COLOR_GAP3					= RGB(172,168,153);
const	COLORREF	COLOR_GAP4					= COLOR_BLACK;

const	COLORREF	COLOR_TRANSPARENT_BLUE		= RGB(245,255,255);

///////////////////////////  5.7 ��̼�---������ɫ /////////////////////////////////////////
const	int	WHITE_AND_BLACK				= 1;	/// �ڰף���̼�ʱѡ��̼����ӵ���ɫ
const	int	RED_AND_BLUE				= 2;	/// ����
const	int	GREEN_AND_YELLOW			= 3;	/// �̻�
///</5. ��ʾ��ز���>
										
const	short		HEART_LEAD_I				= 0;					/// I����
const	short		HEART_LEAD_II				= 1;					/// II����
const	short		HEART_LEAD_III				= 2;					/// III����
const	short		HEART_LEAD_AVR     			= 3;					/// AVR����
const	short		HEART_LEAD_AVL				= 4;					/// AVL����
const	short		HEART_LEAD_AVF				= 5;					/// AVF����
const	short		HEART_LEAD_C1				= 6;					/// C1�ص���
const	short		HEART_LEAD_C2				= 7;					/// C2�ص���
const	short		HEART_LEAD_C3				= 8;					/// C3�ص���
const	short		HEART_LEAD_C4				= 9;					/// C4�ص���
const	short		HEART_LEAD_C5				= 10;					/// C5�ص���
const	short		HEART_LEAD_C6				= 11;					/// C6�ص���

///<6.1 ͨ���ź�����>
///<����> ���ݷ���ͨ������һ��ֵ�������������Сֵ </����>
const	short		CHANNEL_TYPE_AIRFLOW		= 1;			/// ��������
const	short		CHANNEL_TYPE_THORACIC		= 2;			/// ��ʽ����
const	short		CHANNEL_TYPE_ABDOMINAL		= 3;			/// ��ʽ����
const	short		CHANNEL_TYPE_SNORE			= 4;			/// ����
const	short		CHANNEL_TYPE_SPO2			= 5;			/// Ѫ�����Ͷ�
const	short		CHANNEL_TYPE_BODYPOS		= 6;			/// ˯��
const	short		CHANNEL_TYPE_PULSERATE		= 7;			/// ����
const	short		CHANNEL_TYPE_ERROR			= 8;			/// ���������
///</6.2 ͨ���ź�����>

///<6.3 ���ݷ�������>
///<����> ���ݷ���ͨ������һ��ֵ�������������Сֵ </����>
const	short		ANALYSIS_NO					= 0;			/// û��ѡ���κ����ݷ���
///</6.3 ���ݷ�������>

///<6.4 �ź�����>
///<����>		�����ź����ͣ������ĵ硢���硢�Ե硢Ѫѹ��������
///			��BL-420N�У��ź��������²㴫��������������Ѿ�����Ҫ����ĳ���
///</����>
const	short		MAX_SIGNAL_NUM				= 32;			/// ����ź�������

const	short		SIGNAL_AP					= 0;			/// �񾭸ɶ�����λ
const	short		SIGNAL_AP_CMC				= 1;			/// �ļ�ϸ��������λ(Action potential of cardiac muscle cells)
const	short		SIGNAL_PSP					= 2;			/// ͻ�����λ��postsynaptic potential��
const	short		SIGNAL_ECG					= 3;			/// �ĵ�
const	short		SIGNAL_EMG					= 4;			/// ����
const	short		SIGNAL_EEG					= 5;			/// �Ե�
const	short		SIGNAL_NERVE_DISCHARGE		= 6;			/// �񾭷ŵ�
const	short		SIGNAL_PRESS				= 7;			/// Ѫѹ
const	short		SIGNAL_BLOOD_PRESS			= 8;			/// Ѫѹ
const	short		SIGNAL_BREATH				= 9;			/// ����
const	short		SIGNAL_TEMPERATURE			= 10;			/// �¶�
const	short		SIGNAL_ACTIVITY				= 11;			/// ���
const	short		SIGNAL_INTENSITY			= 12;			/// �ź�ǿ��(ԭʼ����ź�)
const	short		SIGNAL_ATMOSPHERE			= 13;			/// ����ѹ��
const	short		SIGNAL_LV_PRESS				= 14;			/// ������ѹ
const	short		SIGNAL_CV_PRESS				= 15;			/// ���ľ���ѹ

const	short		NO_SIGNAL					= 32;			/// ���ź�

const	short		SIGNAL_NAME_LEN				= 32;
#ifdef	ENGLISH
	const	TCHAR	szSignal_Name[MAX_SIGNAL_NUM][SIGNAL_NAME_LEN]	= {	_T("ECG"),_T("EMG"),_T("EEG"),	_T("BP"),	\
					_T("Breath"),_T("Temp."),_T("Activity"),_T("Intensity"),_T("Atmosphere"),_T("LVP"),_T("CVP")};
#else
	const	TCHAR	szSignal_Name[MAX_SIGNAL_NUM][SIGNAL_NAME_LEN]	= {	_T("�ĵ�"),	_T("����"),_T("�Ե�"), _T("Ѫѹ"),\
					_T("����"),_T("�¶�"),	_T("���"),_T("�ź�ǿ��"),_T("����ѹ��"), _T("������ѹ"),_T("���ľ���ѹ") };
#endif
///</6.4 �ź�����>

///<6.5 �̼�����������>  
/// �̼�������ģʽ�����̿ش̼�ԭ���Ͽ��԰����߼��̼�
//const	short		BASIC_STIMULATE				= 0;			/// ���������̼�
//const	short		PROGRAM_STIMULATE			= 1;			/// �����̿ش̼�
//const	short		ADVANCE_STIMULATE			= 2;			/// �����߼��̿ش̼�
///</6.5 �̼�����������>  

///<6.6 ���ݴ�������>
const	short		PROCESS_INIT				= 0;			/// ��ʼ���ݴ���״̬
const	short		PROCESS_MID					= 1;			/// ���ݴ�����״̬
const	short		PROCESS_END					= 2;			/// �������ݴ���״̬

///<����> ���ݴ���ͨ����ԭʼ���ݽ��б任������΢�֣�����</����>
const	short		PROCESS_NO							= 0;	/// û��ѡ���κ����ݴ���
const	short		PROCESS_DIFFERENTIAL				= 1;	/// ΢�ִ���
const	short		PROCESS_INTEGRAL					= 2;	/// ���ִ���
const	short		PROCESS_FREQ_HISTOGRAM				= 3;	/// Ƶ��ֱ��ͼ����
const	short		PROCESS_AREA_HISTOGRAM				= 4;	/// ���ֱ��ͼ
const	short		PROCESS_FFT							= 5;	/// ���ٸ���Ҷ�仯
const	short		PROCESS_POWER_SPECTRUM				= 6;	/// �����׷���
const	short		PROCESS_SEQUENCE_HISTOGRAM			= 7;	/// �����ܶ�ֱ��ͼ����
const	short		PROCESS_NONSEQUENCE_HISTOGRAM		= 8;	/// �������ܶ�ֱ��ͼ����
const	short		PROCESS_DIGITAL_FILTER				= 9;	/// �����˲�
const	short		PROCESS_SMOOTH_FILTER				= 10;	/// ƽ���˲�
const   short       PROCESS_RESPIRATORY_FLOW_INTEGRAL   = 11;   /// ������������ 
const   short       PROCESS_OXYGEN_CONSUMPTION_RATE_CURVE = 12; /// ����������
const   short       PROCESS_OXYGEN_CONSUMPTION_CURVE    = 13;   /// ����������

const	short		PROCESS_HR_CURVE					= 20;	/// ��������
const	short		PROCESS_MEAN_BP_CURVE				= 21;	/// ƽ��Ѫѹ����
const	short		PROCESS_DROP_TENDENCY_CHART			= 22;	/// �ǵ�����ͼ

const	short		PROCESS_SBP_CURVE					= 23;	/// ����ѹ����
const	short		PROCESS_DBP_CURVE					= 24;	/// ����ѹ����
const	short		PROCESS_SBP_DBP_CURVE				= 25;	/// ��ѹ������
const	short		PROCESS_NIBP_HR_CURVE				= 26;	/// �޴�Ѫѹ��������

///</6.6 ���ݴ�������>

///<6.7 �����˲�����>
///<����> �����˲�����</����>
/// �˲�����.
const	unsigned char	LOW_PASS_FILTER					= 1;	/// ��ͨ�˲�
const	unsigned char	HIGH_PASS_FILTER				= 2;	/// ��ͨ����
const	unsigned char	BAND_PASS_FILTER				= 3;	/// ��ͨ�˲�
const	unsigned char	BAND_ELIMINATION_FILTER			= 4;	/// �����˲�
const	unsigned char	MULTI_BAND_PASS_FILTER			= 5;	/// ��ͨ��
const	unsigned char	MULTI_BAND_ELIMINATION_FILTER	= 6;	/// �����

/// �˲���������.
const	unsigned char	FILTER_WIN_RECTANGLE			= 1;	/// ���δ�
const	unsigned char	FILTER_WIN_TRIANGLE				= 2;	/// ���Ǵ�
const	unsigned char	FILTER_WIN_HANNING				= 3;	/// ������
const	unsigned char	FILTER_WIN_HAMMING				= 4;	/// ������
const	unsigned char	FILTER_WIN_BLACKMAN				= 5;	/// ����������
const	unsigned char	FILTER_WIN_KAISER				= 6;	/// ����

/// �˲�����Betaϵͳ. 
const	float			BETA_RECTANGLE					= 0.0f;		/// ���δ�
const	float			BETA_TRIANGLE					= 1.33f;	/// ���Ǵ�
const	float			BETA_HANNING					= 3.86f;	/// ������
const	float			BETA_HAMMING					= 4.86f;	/// ������
const	float			BETA_BLACKMAN					= 7.04f;	/// ����������
const	float			BETA_KAISER						= 7.95f;	/// ����
///</6.8 �����˲�����>

///<13�������>
///////////////////////////  7. ��������ֵ���� ////////////////////////////////
const	int			TM_ERROR_INVALID_QUEUE				= -1;	/// ����û�з���ռ䣬��Ч����
const	int			TM_ERROR_NOT_SELECT_CHANNEL			= -2;	/// û��ѡ��ͨ��

const	int			TM_OK								= 0;	/// �����ɹ����ظ�ֵ��TM��ʾ�ɶ�̩��
const	int			TM_ERROR_INSUFFICIENT_MEMORY		= 1;	/// û���㹻���ڴ�ɹ�����
const	int			TM_ERROR_INSUFFICIENT_FRAME			= 2;	/// ���ݶ����е����ݲ���һ֡
const	int			TM_ERROR_INSUFFICIENT_BUFFER		= 3;	/// ��������ݻ�����̫С��������װ�·�������
const	int			TM_ERROR_NOT_THE_DEVICE				= 4;	/// û�ж�Ӧ��ͨѶ�豸
const	int			TM_ERROR_NOT_DATA_IN_QUEUE			= 5;	/// ͨѶ������û������
const	int			TM_ERROR_SOCKET_ERROR				= 6;	/// �������

const	int			TM_ERROR_OPEN_FILE					= 10;	/// ���ļ�����
const	int			TM_ERROR_FILE_NOT_OPENED			= 11;	/// �ļ�δ�򿪴���
const	int			TM_ERROR_OPEN_FILE_NOT_EXIST		= 12;	/// ָ���ļ���Ŀ¼������
const	int			TM_ERROR_INVALID_CONFIGURATION_FILE	= 13;	/// ��Ч�ļ�
const	int			TM_ERROR_FILE_NOT_CONFIGURATION		= 14;	/// �ļ�δ����0
const	int			TM_ERROR_FAIL_CREATE_DIR			= 15;	/// �����ļ�Ŀ¼ʧ��
const	int			TM_ERROR_FAIL_CREATE_FILE			= 16;	/// �����ļ�ʧ��
const	int			TM_ERROR_FILE_DATA_INSUFFICIENT		= 17;	/// ���ļ��ж�ȡ������С��ʵ��ָ������

const	int			TM_ERROR_LOWPASS_LESS_HIGHPASS		= 20;	/// ��ͨ�˲���ֵС�ڸ�ͨ�˲���ֵ
const	int			TM_ERROR_FREQUENCY_LESS_ZERO		= 21;	/// �����Ƶ��ֵС��0

const	int			TM_ERROR_END_TIME_LESS_START		= 30;	/// ����ʱ��С����ʼʱ��

const	int			TM_ERROR_INVALID_PARAM				= 40;	/// ��Ч����
const	int			TM_ERROR_EVNET_TYPE					= 41;	/// Ҫ��������¼����ͳ���

const	int			TM_ERROR_SAVE_NUM_MORE_THAN_MAX_RECEIVER_NUM	= 51;	/// �����Ľ��հ������������Ľ��հ�����
const	int			TM_ERROR_SAVE_NUM_MORE_THAN_MAX_CHANNEL_NUM		= 52;	/// ������ͨ��������������ͨ������
///</13�������>

///<14������������>
///<����> ������������</����>
///<14.1ͨ�����ݷ�������> ANALYSIS_GENERAL_����Χ��0-100�� </ͨ�����ݷ�������>
const	short		ANALYSIS_GENERAL_MAX				= 0;	/// �������ֵ
const	short		ANALYSIS_GENERAL_MIN				= 1;	/// ������Сֵ
const	short		ANALYSIS_GENERAL_AVE				= 2;	/// ����ƽ��ֵ
const	short		ANALYSIS_GENERAL_TOTAL				= 3;	/// �����ۼӺ�
const	short		ANALYSIS_GENERAL_AREA				= 4;	/// �������(����ֵ���ۼӺ�)
const	short		ANALYSIS_GENERAL_DT_DMAX			= 5;	/// �������΢��ֵ
const	short		ANALYSIS_GENERAL_DT_DMIN			= 6;	/// ������С΢��ֵ

///<14.2ר�����ݷ�������> ANALYSIS_SPECIAL_����Χ��100-200�� </ר�����ݷ�������>
const	short		ANALYSIS_SPECIAL_APNEA				= 100;	/// ��AirFlow�ź��з���������ͣ
const	short		ANALYSIS_SPECIAL_THORACIC_APNEA		= 101;	/// ��Thoracic�ź��з���������ͣ
const	short		ANALYSIS_SPECIAL_ABDOMINAL_APNEA	= 102;	/// ��Abdominal�ź��з���������ͣ
const	short		ANALYSIS_SPECIAL_SNORE				= 103;	/// ��������
const	short		ANALYSIS_SPECIAL_DESATURATION		= 104;	/// �����������Ͷ�(4%�����½�)
const	short		ANALYSIS_SPECIAL_SLEEP_POSE			= 105;	/// ����˯�����Ƴ���ʱ��
const	short		ANALYSIS_SPECIAL_HEART_RATE			= 106;	/// ����ƽ������
const	short		ANALYSIS_SPECIAL_HRV				= 107;	/// �������ʱ���
const	short		ANALYSIS_SPECIAL_HYPNOGRAM			= 108;	/// �����Ե�˯�߽ṹ

const	long		ANALYSIS_DURATION_PER_ONCE			= 1200;	/// ÿ�����ݷ����ĳ���ʱ�䣬��λ��s
																/// ���ڴ����Ĳ����ʸߣ���˼���ÿ�η����¼�
const	long		ANALYSIS_SNORE_DURATION_PER_ONCE	= 300;	/// ÿ�δ���������ʱ�䣬��λ��s��

///<14.2.1 �����¼������������> �����¼���Ҫ����������ͣ�ͺ�����ͨ�� </�����¼������������>
const	short		STATUS_NORMAL						= 1;	/// ����״̬
const	short		STATUS_APNEA						= 2;	/// ������ͣ״̬
const	short		STATUS_HYPOPNEA						= 3;	/// ������ͨ��״̬

///<14.2.2 ���������м�״̬> ������Ҫ����������δ����״̬ </���������м�״̬>
const	short		STATUS_NO_SNORE						= 1;	/// δ����
const	short		STATUS_SNORE						= 2;	/// ����

///<14.3 �¼�����> ESA-100ϵͳ�е������¼� </�¼�����>
///<14.3.1 �����¼�����> �������Ͷ��¼� </�����¼�����>
const	short		EVENT_NOT_SELECT					= 0;	/// δѡ���κ��¼�

const	short		EVENT_APNEA							= 1;	/// ������ͣ�¼�
const	short		EVENT_HYPOPNEA						= 2;	/// ������ͨ���¼�
const	short		EVENT_RERA							= 3;	/// ����Ŭ�����΢����(Respiratory effort related arousal)

const	short		APNEA_OA							= 1;	/// ���¼��������ͺ�����ͣ
const	short		APNEA_CA							= 2;	/// ���¼��������ͺ�����ͣ
const	short		APNEA_MA							= 3;	/// ���¼�������ͺ�����ͣ

///<14.3.2 �����¼�����> �������Ͷ��¼� </�����¼�����>
const	short		EVENT_DESATURATION					= 10;	/// �����¼�

///<14.3.3 �����¼�����> �����¼� </�����¼�����>
const	short		EVENT_SNORE							= 20;	/// �����¼�

///<14.3.4 ɾ���¼�����> ɾ���¼� </ɾ���¼�����>
const	short		EVENT_DELETE						= 99;	/// ����һ�������¼����ͣ���ʾɾ����ǰ�¼�

///<14.5�����ݷ�����صĳ���> ���ݷ��������ռ䳣�� </�����ݷ�����صĳ���>
///		֮��������1500�����������ݶδ����ռ䣬�ǰ���ÿ����1�κ����¼����㣬
///	1500���ӿ��Դ�������24Сʱ�ķ������ݶΡ�����������¼����������ݣ����������������
const	int			MAX_ANALYSIS_SEGMENT_NUM			= 6000;	/// ��������������
const	int			MAX_ANALYSIS_POINT_NUM				= 1500;	/// ��������������

const	int			ANALYSIS_START						= 300;	/// ��ԭʼ���ݵ�ANALYSIS_START�봦��ʼ����				

///</14������������>
///</2.2 ����>

const	int			DISP_SEGMENT_INTERVAL				= 20;	/// ��ʾ��֮��Ŀռ���

///<��������> ��ǩ�༭���� </��������>
const	short		LABEL_ACTION_NO						= 0;	/// δ�ı��ǩ
const	short		LABEL_ACTION_ADD					= 1;	/// ���һ����ǩ
const	short		LABEL_ACTION_EDIT					= 2;	/// �༭һ����ǩ
const	short		LABEL_ACTION_DELETE					= 3;	/// ɾ��һ����ǩ
const	short		LABEL_ACTION_CHANGE_POS				= 4;	/// �޸�һ����ǩ��λ��

const	short		LABEL_SIGN_DASH_LINE				= 0;	/// ���ֱ�ǩǰ�����������Ϊ��ֱ����
const	short		LABEL_SIGN_ARROW					= 1;	/// ��������ΪС��ͷ

const	short		LABEL_DISP_HORIZON					= 0;	/// ���ֱ�ǩˮƽ��ʾ
const	short		LABEL_DISP_VERTICAL					= 1;	/// ������ǩ��ֱ��ʾ

const	short		PC_MONITOR_LISTEN					= 0;    /// ���Լ����ӿ�
const   short       BL420N_MONITOR_LISTEN               = 1;    /// BL-420N�����ӿ�

const   short       REPORT_WEB                          = 0;    /// ��ҳ����
const   short       REPORT_OFFICE                       = 1;    /// office����

///////////////////////////////////////////////////////////////////////////////
///////////////////////////  3.�ṹ. //////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
/// <3.�ṹ>
/// <�ṹ1>
/// <����>	ϵͳ��� </����>
///	<����>		BL-420N�����ͬһͨ�����������ֱ�ţ��ýṹ�Ѹ��ֱ�Ž��������
///			�����ڸ��ֱ��֮�����ת����Ҳ���ڱ�ŵ���ʾ��
///				����ͨ���Ŷ�Ӧ��Ӳ���ϵ�ͨ���ӿڣ��û�����ֱ�ۿ���������ÿ������
///			ͨ�������ѱ�Ϊ8���ڲ�ͨ����ÿ���ڲ�ͨ�����Զ������������Ϊ��Ψһȷ��
///			�ڲ�ͨ�����������ڲ�ͨ����ţ��ϲ�������͵�������Ӳ��ͨ����ص�����
///			�����ڲ�ͨ����Ψһȷ�����ڲ�ͨ��������ͨ���Ķ�Ӧ��ϵ��Ԥ�ȹ̻��ģ��ڲ�
///			ͨ�������²�Ӳ����䲢ͨ��ͨ����Ϣ�ϴ����ϲ����
/// </����>
struct	System_No    {
	short	shDevice_No;					/// �豸�ţ�����ͬ��Ӳ��ͨ���ӿڣ��û��鿴
	short	shInner_Cha_No;					/// �豸�ڲ�ͨ���ţ���0��ʼ���룬ÿ������ͨ����Ӧ8���ڲ�ͨ���ţ�Ψһ
	short	shPhysical_Cha_No;				/// ����ͨ���ţ�ĳ̨����������ͨ���̶�
	short	shECG_Cha_No;					/// �ĵ�ͨ���ţ��ĵ�ͨ���Ѿ����̶�����Ϊ�ڲ�ͨ����
	short	shSample_Cha_No;				/// ����ͨ���ţ�˳������ĵ�ǰ���Բ���������ͨ����
	short	shLogic_Sample_Cha_No;			/// �߼�����ͨ���ţ��û�ѡ��Ĳ���ͨ����
	short	shWin_Disp_No;					/// Win2������ʾͨ���ţ���Win2������ʾλ��Ϊ��������
	short	shWin_Save_No;					/// Win2���ڴ���ͨ���ţ���Win2���ڴ���λ��Ϊ��������
};											/// 16�ֽ�
typedef	struct	System_No	SYSTEM_NO, *PSYSTEM_NO;
/// </�ṹ1>


/// <�ṹ3>
/// <����>	ͨ����ǰ״̬��Ϣ </����>
///	<����>		ͨ��״̬��Ϣ����ʵʱ��������״̬�£�������ʾÿ��ͨ����״̬
///			����ڴ�Ӳ���õ��Ĺ̻�ͨ����Ϣ��ͨ��״̬��Ϣ�ǿɱ�ģ����û����ڡ�
///			���磬�û����������淶Χ��	����ṹֻ�����û����ڵĵ�ǰ״̬��ÿ
///			һ��ͨ����״̬�仯�����¼����־�������ļ��С�
///				ͨ��״̬��Ϣ���߼�����ͨ����Ӧ����������ʱ�����߼�ͨ����Ϣ��
///			ͬʱ����ͨ��״̬��Ϣ��
///				�ڷ���״̬�£���Щ���ļ�����������������ʾ��¼ʱ��ͨ��״̬��Ϣ��
/// </����>
struct	Channel_Status_Info    {
	short	shSample_Rate_No;				/// ��ǰ�����ʼ���
	float	fSample_Rate;					/// ��ǰ�����ʣ���λ��Hz
	short	shRange_No;						/// ��ǰ���漶��
	float	fMin_Range;						/// ��ǰ�����ֵ������ĵ�λ��Ҫ�鿴�̶�ͨ����Ϣ
	float	fMax_Range;						/// ��ǰ�����ֵ������ĵ�λ��Ҫ�鿴�̶�ͨ����Ϣ
	float	fAmplifier_Range;				/// �Ŵ������̣��������÷Ŵ�������ʵ�Ŵ���
	float	fMin_Disp_Value;				/// ��С����Ļ��ʾʵ��ֵ��ԭ����ֵ�������ֵ��ͬ��2016��9��14���޸�
	float	fMax_Disp_Value;				/// ������Ļ��ʾʵ��ֵ��ԭ����ֵ�������ֵ��ͬ��2016��9��14���޸�
	short	shHighPass_No;					/// ��ǰ��ͨ�˲�����
	float	fHighPass;						/// ��ǰ��ͨ�˲�ֵ����λ��Hz
	short	shLowPass_No;					/// ��ǰͨ�˲�����
	float	fLowPass;						/// ��ǰ��ͨ�˲�ֵ����λ��Hz
	short	sh50Hz_Notch;					/// 50Hz�˲����أ�ON/OFF
	float	fSpeed;							/// ɨ���ٶȣ���λ��s/grid
	short	shMaintain;						/// ��������
};											/// ÿ��ͨ���ĵ�ǰ��Ϣ����48�ֽ�
typedef	struct	Channel_Status_Info	CHANNEL_STATUS_INFO, *PCHANNEL_STATUS_INFO;

struct	Channel_Status_Info_Old    {
	short	shSample_Rate_No;				/// ��ǰ�����ʼ���
	float	fSample_Rate;					/// ��ǰ�����ʣ���λ��Hz
	short	shRange_No;						/// ��ǰ���漶��
	float	fMin_Range;						/// ��ǰ�����ֵ������ĵ�λ��Ҫ�鿴�̶�ͨ����Ϣ
	float	fMax_Range;						/// ��ǰ�����ֵ������ĵ�λ��Ҫ�鿴�̶�ͨ����Ϣ
	float	fAmplifier_Range;				/// �Ŵ������̣��������÷Ŵ�������ʵ�Ŵ���
	short	shHighPass_No;					/// ��ǰ��ͨ�˲�����
	float	fHighPass;						/// ��ǰ��ͨ�˲�ֵ����λ��Hz
	short	shLowPass_No;					/// ��ǰͨ�˲�����
	float	fLowPass;						/// ��ǰ��ͨ�˲�ֵ����λ��Hz
	short	sh50Hz_Notch;					/// 50Hz�˲����أ�ON/OFF
	float	fSpeed;							/// ɨ���ٶȣ���λ��s/grid
	short	shMaintain;						/// ��������
};											/// ÿ��ͨ���ĵ�ǰ��Ϣ����48�ֽ�
typedef	struct	Channel_Status_Info_Old	CHANNEL_STATUS_INFO_OLD, *PCHANNEL_STATUS_INFO_OLD;
/// Channel_Status_Info_Old����Channel_Status_Info�ٴ�����fMin_Disp_Value��fMax_Disp_Value
///	������ʾ��صı���������������ݽṹ��Ŀ�Ľ���Ϊ�˴���ǰ�������������ļ�
/// </�ṹ3>

/// <�ṹ4>
/// <����> ����ͨ������ʱ���õ����ݽṹ </����>
///	<����>	   ����ͨ������ʱ��Ҫͬʱ���������,����������
///	</����>
struct	Fill_Cha_Data_Info    {		
	BOOL	bFill_Flag;						/// ���������ǣ�true: ��ͷ��ʼ���룬false������һ����ʾ���ݻ���λ������
	int		iNumber;						/// ����Ĳ�������
	short*	pData;							/// ����ָ��
};				
typedef	struct	Fill_Cha_Data_Info  FILL_CHA_DATA_INFO, *PFILL_CHA_DATA_INFO;
/// </�ṹ4>

/// <�ṹ5>
/// <����>	���������� </����>
///	<����>		���ڱ���������ǵı�Ǻ�λ����Ϣ
///	</����>
struct	Measure_Cursor	{
	///1.------------------  ���������������. ------------------------------
	bool		bMark_Flag;							/// true: ���Mark��ǵĹ�����
	bool		bDraw_Cursor_Flag;					/// true: ����ƶ�ʱ��ʾ�������.
	int			iCursor_Pos;						/// ���λ��
	int			iCursor_Time;						/// ��괦����ʼλ�õĲ������ֵ
	short		shCursor_Value;						/// ��괦��ԭʼ����ֵ
	short		shMax_Value;						/// ��ͨ��������������ֵ������ʹ��
	short		shMin_Value;						/// ��ͨ�������������Сֵ������ʹ��
};													/// 16�ֽ�,Measure�ṹÿ�����ڶ�Ӧһ��
typedef	struct	Measure_Cursor  MEASURE_CURSOR,	*PMESURE_CURSOR;
/// </�ṹ5>

/// <�ṹ6>
/// <����>	�������Ʋ��� </����>
///	<����>		���ڿ��Ƹ��ֲ�������
///	</����>
struct	Measure_Control	{
	///1.------------------  ���������̵��������. --------------------------
	bool		bCursor_Measure_Flag;				/// ������й�����
	bool		bOld_Cursor_Measure_Flag;			/// �ڽ����������������������ʱ��������־
	bool		bMulti_Position_Flag;				/// ��λ�ò������
	bool		bHorizontal_Measure_Flag;			/// ˮƽ������־��ֻ����ˮƽ�ߣ������ƴ�ֱ��
	bool		bDraw_Vertical_Line_Flag[MAX_MEASURE_VERTICAL_LINE];	/// �Ƿ���ƴ�ֱ������
	short		shMeasure_Vertical_Line[MAX_MEASURE_VERTICAL_LINE];		/// ÿ����ֱ�����ߵ���Ļλ��
	bool		bDraw_Horizontal_Line_Flag[MAX_MEASURE_HORIZONTAL_LINE];/// �Ƿ����ˮƽ������
	short		shMeasure_Horizontal_Line[MAX_MEASURE_HORIZONTAL_LINE];	/// ÿ��ˮƽ�����ߵ���Ļλ��
	short		shWin_No;							/// ��ǰ����ѡ���ͨ����
	short		shMeasure_Type;						/// �������ͣ�Ŀǰ����ʱ����������������ˮƽ��
	short		shStep;								/// �������裬0��ѡ����㣬n��ѡ��ĩ��
	short		shTotal_Step;						/// ���β����ܵĲ������裬����ʱ��������������Ϊ2�����Ĺ��ܲ���Ϊ5��
};													/// 36�ֽڣ�Measure_Control�ṹ���д��ڶ�Ӧһ��
typedef	struct	Measure_Control  MEASURE_CONTROL,	*PMEASURE_CONTROL;

const	short	DATA_TYPE_SAMPLE		= 0;		/// ����ԭʼ����
const	short	DATA_TYPE_ANALYSIS		= 1;		/// ��������
struct	General_Measure_Parameter	{
	///1.------------------  ��ͨ����������. ----------------------------------
	short		shSignalType;
	bool		bECG_Flag;							/// �ĵ������־��true->ʹ�������ĵ�ⶨ�㷨��false->ʹ����ͨ�����㷨
	bool		bDirect_Get_HR_Flag;				/// ֱ�ӻ�ȡ���ʱ�־������ȫ�����ĵ���ԣ�������I����ֱ�Ӽ���֮������������
	short		shMeasure_Type;						/// �������ͣ�����ʵʱ���������������
	short		shData_Type;						/// �������������ͣ�ԭʼ�������ݻ��������
	short		shCha_No;							/// ����ͨ���ţ��൱����ʾ����ͨ���ţ����Զ�ԭʼ���ݺͷ������ݽ��в���
	short		shData_No;							/// �������ͨ���Ƿ���ͨ������ô����ͨ����Ӧ��ԭʼ����ͨ�����߼�����ͨ����
	float		fSample_Rate;						/// ������
	float       fHighest_Sample_Rate;               /// ��������
	float       fScreenMeasureTime;                 /// ��Ļ������ʾ��ʱ���ֵ
	DWORD		dwStart;							/// ����������ļ��е�λ��
	long		lNumber;							/// �������ݵĲ����㳤��
	short		shMeasure_Horizontal_Line[MAX_MEASURE_HORIZONTAL_LINE];	/// ˮƽѡ���λ�ã�����㿪ʼ�Ĳ�������Ŀ��
	float		shMeasure_Vertical_Line[MAX_MEASURE_VERTICAL_LINE];		/// ��ֱѡ���λ�ã�ʵ��ֵ
	float		*pData;								/// ָ������

	///2.------------------  ��ͨ����������. ----------------------------------
	/// ����ֻ��Ҫ����ͨ�����ݾͿ���ɵĲ���������Ҫ���±���
	/// ��Щ������Ҫ���ͨ��ͬʱ�����ɣ������񾭸��˷ܴ����ٶ���Ҫ2��ͨ�������ݣ�Ѫ������ѧ��Ҫ3��ͨ��������
	short		shValid_Cha_Num;					/// ��Чͨ����
	float		fDistance;							/// ֻ���ڴ��������ٶȲⶨ���缫֮��ľ��룬��λ��cm
	short		shLogic_Cha_No[MAX_SAMPLE_CHANNEL_NUMBER];			/// ˳���ŵ�ԭʼ���ݶ�Ӧ���߼�ͨ����
	short		shSignal_Type[MAX_SAMPLE_CHANNEL_NUMBER];			/// �ź����ͣ���Щ������Ҫ֪��ͨ�����ͣ����磺Ѫ������ѧ
	long		lCha_Number[MAX_SAMPLE_CHANNEL_NUMBER];				/// �������ݵĲ����㳤��
	float		*pCha_Data[MAX_SAMPLE_CHANNEL_NUMBER];				/// ������ͨ��ԭʼ���ݣ�˳����ã�����1ͨ����������ʹ����
	float		fCha_Sample_Rate[MAX_SAMPLE_CHANNEL_NUMBER];        /// ������ͨ�������ʣ�˳����ã�����1ͨ����������ʹ����
	short		shMaintain;							/// �����֣����ݶ���
};													/// 570�ֽڣ�Measure_Control�ṹ���д��ڶ�Ӧһ��
typedef	struct	General_Measure_Parameter  GENERAL_MEASURE_PARAMETER,	*PGENERAL_MEASURE_PARAMETER;
/// </�ṹ6>

/// <�ṹ7>
/// <����>	����ͨ��ԭʼ���� </����>
///	<����>		��������ʾ���ڴ�����ͨ��ԭʼ���ݣ��ȿ����ڴ�������ݣ�Ҳ���Դ��������
///	</����>
struct	One_Channel_Display_Info {
	BOOL	bAllocated_Flag;						/// �ڴ�����־
	long	lFile_Start_Pos;						/// ��ʼ��λ�ã��Բ�������Ϊ�����׼
	long	lSize;									/// ��ǰ���ݻ�������С��Ĭ��Ϊ100K
	long	lValid_Data_Num;						/// �ӻ�������ʼ��ʼ����Ч���ݳ��ȣ�������
	long	lScreen_Start_Offset;					/// ��Ļ��ʼλ������ڻ���������ƫ����
	long	lScreen_Num;							/// ��ǰ��Ļ����
	float	*fData;									/// ���ݴ�����������Ĭ�ϴ�С100K
};													/// 28�ֽڻ�����1��ͨ�������ݻ�����
typedef	struct	One_Channel_Display_Info  ONE_CHANNEL_DISPLAY_INFO,	*PONE_CHANNEL_DISPLAY_INFO;
/// </�ṹ7>

/// <�ṹ8>
/// <����>	����1��ͨ���ķ������� </����>
///	<����>		���������Ϣ��������ͨ���ţ�������ʾͨ���ţ����������ȣ���һ������ͨ���Ͷ�Ӧһ��������
///	</����>
const	short	DISP_MODE_HISTOGRAM	= 1;			/// ֱ��ͼ��ʽ��ʾ
const	short	DISP_MODE_LINE		= 2;			/// ����ͼ��ʽ��ʾ
const   short   DISP_UNIT_HZ        = 1;            /// ��ʾ��λ:Hz
const   short   DISP_UNIT_MIN       = 2;            /// ��ʾ��λ:��/��
const	short	DEF_ANALYSIS_LENGTH	= 512;			/// Ĭ�Ϸ�������

struct	Analysis_Params {
	bool	bFirst_Flag;							/// �÷���ͨ���ŵ�һ��ִ�з����ı�־������ʼ��
	bool	bValid_Flag;							/// �÷���ͨ�����Ƿ���Ч
	short	shAnalysis_Type;						/// �������ͣ�������֡�΢�ֵ�
	short	shSub_Type;								/// ���������ͣ�������ַ����е��������֣��������֣�����ֵ���ֵ�
	short	shMaintain;								/// Ԥ���ֽ�
	short	shLogic_Sample_Cha_No;					/// �������߼�����ͨ��������Դ
	short	shWin_Save_No;							/// ����ͨ���ţ����ݲ�
	short	shWin_Disp_No;							/// ��ʾͨ����
	short	shAnalysis_No;							/// ����ͨ���ţ�����˳��ֵ��Ŀǰδʹ��
	long 	iLength;								/// ������������
	short	shDisp_Mode;							/// �������ݵ���ʾ��ʽ��ֱ��ͼ��������ͼ
	float	fDuration;								/// ��������ʱ�䣬��λ��s
	float	fMultiply;								/// �����ķŴ���
	float	fSample_Rate;							/// ����ͨ���Ĳ�����
	float   fImpedance;                             /// �����迹ֵ
	float   fDistance;                              /// ���������
	float   fStartO2Value;                          /// ������ʼ��
	float   fAnimalWeight;                          /// ��������
	float   fBottleCapacity;                        /// ʵ��ƿ�ݻ�
};													/// 32�ֽ�
typedef	struct	Analysis_Params  ANALYSIS_PARAMS,	*PANALYSIS_PARAMS;
/// </�ṹ8>

/// <�ṹ10>
/// <����>	�����ļ��Ļ�����Ϣ </����>
///	<����>		�����ļ�������5�����ֹ��ɣ�������Ϣ��ʵ�黷����Ϣ���豸��Ϣ��
///			�����ļ������Լ�¼���ļ��������ļ��Ļ�����Ϣ������Ҫ��������Ϣ��
///				ʵ���ϣ������Դ���ʵ������Ϣ��ʵ����Ա��Ϣ��ʵ��������Ϣ���������ȣ�
///			������Щ��Ϣ����Ҫ���û����룬����û�û���������¼���Ǵ�����Ϣ��
///			������Ϣ���������鷳����Щ��Ϣ���Դ������ļ���ʼ��Ϣ�У����û����롣
///	</����>
const	short	FILE_LABLE_LEN	= 16;
const	short	MAX_TITLE_LEN	= 128;
const	short	BASIC_INDEX_FILL_DATA_LEN = 6;

struct	Basic_Index_File_Info {
	TCHAR		szFile_Lable[FILE_LABLE_LEN];	/// �ļ���ǩ����BL-420N��
	short		shMajor_Version;				/// �ļ��������汾��
	short		shMinor_Version;				/// �ļ����ʹΰ汾��
	short		shTotal_Video_File_Number;		/// ����ʵ�������¼���ļ���
	short		shTotal_Data_File_Number;		/// ����ʵ������������ļ���
	__time64_t	lExperimental_Start_Time;		/// ����ʵ����ʼʱ��
	__time64_t	lExperimental_End_Time;			/// ����ʵ�����ʱ��
	long		lEnd_SD_Position;				/// ���ļ��������ݵĽ���������λ��
	LONGLONG	lTotal_SD_Number;				/// �ļ����ܲ�������
	bool		bFile_Normal_Closed_Flag;		/// �ļ��Ƿ������رգ�Ĭ��ΪNo
	bool		bData_Cut_Flag;					/// ���ݼ�����ǣ�true:������Ϊ���ݼ����õ���false:ԭʼ����
	short		shDevice_Cluster_Number;		/// ����ʵ��ʹ�õļ����豸��
	TCHAR		szExperimental_Title[MAX_TITLE_LEN];	/// ʵ�����
	short       shMax_Connect_Device_Number;    /// ����豸������
	BYTE		byMaintain[BASIC_INDEX_FILL_DATA_LEN];	/// Ԥ�����ֽ�����
};												/// 336�ֽ�
typedef	struct	Basic_Index_File_Info  BASIC_INDEX_FILE_INFO,	*PBASIC_INDEX_FILE_INFO;
/// </�ṹ10>

/// <�ṹ11>
/// <����>	�������Ϣ </����>
///	<����>		ʵ�黷����Ϣ���������֣������������Ϣ��ʵ�����������Ϣ
///	</����>
const	short	MAX_OS_NAME_LEN			= 32;
const	short	MAX_CPU_NAME_LEN		= 64;
const	short	MAX_COMPUTER_NAME_LEN	= 64;
const	short	MAX_COMPUTER_MODEL_LEN	= 64;
const	short	MAX_MANUFACTURE_LEN		= 64;

struct	Computer_Info {
	short		shOS_Bits;						/// ����ϵͳλ�������磺32λ��64λ��
	short		shOS_Version;					/// ����ϵͳ�汾�ţ����磺10
	long		lMemory_Size;					/// �ڴ��С����λ��M Bytes
	long		lDisk_Size;						/// Ӳ�̴�С����λ��M Bytes
	long		lAvailable_Disk_Size;			/// ����Ӳ�̴�С����λ��M Bytes
	TCHAR		szOS_Name[MAX_OS_NAME_LEN];		/// ����ϵͳ���֣����磺��Windows��
	TCHAR		szCPU_Name[MAX_CPU_NAME_LEN];	/// CPU���֣����磺��Intel(R) Core(TM) i3-3240��
	TCHAR		szComputer_Name[MAX_COMPUTER_NAME_LEN];		/// ��������֣����硰admin_PC��
	TCHAR		szComputer_MODEL[MAX_COMPUTER_MODEL_LEN];	/// ������ͺţ����硰Lenovo Windows7 PC��
	TCHAR		szComputer_Manufacture[MAX_MANUFACTURE_LEN];/// ��������������֣����硰Lenovo��
};												/// 592�ֽ�
typedef	struct	Computer_Info  COMPUTER_INFO,	*PCOMPUTER_INFO;
/// </�ṹ11>


///<�ṹ13>
/// <����>	�ļ�������Ϣ </����>
///	<����>		�������ʵ���ɶ�������ļ����ɣ����ߴ���¼���ļ���������ļ��������ݽṹ
///			�ļ������ĸ���Ϊ shTotal_Data_File_Number + shTotal_Vedio_File_Number - 1 
///	</����>
const	short	MAX_INDEX_FILE_NAME_LEN	= 64;
struct	File_Index {
	__time64_t		lFile_Start_Time;			/// ���ļ��������ݵ���ʼʱ��
	__time64_t		lFile_End_Time;				/// ���ļ��������ݵĽ���ʱ��
	LONGLONG		lStart_SD_Position;			/// ���ļ��������ݵ���ʼ������λ��
	LONGLONG		lEnd_SD_Position;			/// ���ļ��������ݵĽ���������λ��
	TCHAR			szName[MAX_INDEX_FILE_NAME_LEN];	/// �����ļ������֣�����·��
};									/// 160�ֽ�
typedef	struct	File_Index  FILE_INDEX,	*PFILE_INDEX;
/// </�ṹ13>

///<�ṹ14>
/// <����>	ʵ�鵥λ��Ϣ </����>
///	<����>		ʵ�鵥λ��Ϣ����ʵ�鱨����ʾ�����������ļ��� 
///	</����>
const	short	MAX_UNIT_NAME		= 64;
const	short	MAX_PERSON_NAME		= 32;
const	short	MAX_UNIT_ADDRESS	= 128;
const	short	MAX_UNIT_TELEPHONE	= 16;
const	short	EXPERIMENT_UNIT_FILL_DATA_LEN	= 16;

struct	Experiment_Unit {
	TCHAR		szUnit_Name[MAX_UNIT_NAME];			/// ������λ����
	TCHAR		szMaster_Name[MAX_PERSON_NAME];		/// ������λ����������
	TCHAR		szUnit_Address[MAX_UNIT_ADDRESS];	/// ������λ����
	TCHAR		szUnit_Telephone[MAX_UNIT_TELEPHONE];		/// ������λ�绰
	TCHAR		szMaintain[EXPERIMENT_UNIT_FILL_DATA_LEN];	/// ����
};													/// 512�ֽ�
typedef	struct	Experiment_Unit  EXPERIMENT_UNIT,	*PEXPERIMENT_UNIT;
/// </�ṹ14>

///<�ṹ15>
/// <����>	ʵ����Ա��Ϣ </����>
///	<����>		ʵ����Ա��Ϣ����ʵ�鱨����ʾ�����������ļ��� 
///	</����>
const	short	MAX_PERSON_NUMBER	= 8;			/// һ��ʵ�����е����ʵ������

struct	Experiment_Person {
	short		shGroup_No;							/// ʵ�����
	short		shPerson_Number;					/// ʵ�����ڵ�����
	long		lPerson_No[MAX_PERSON_NUMBER];		/// ʵ����Ա���
	TCHAR		szName1[MAX_PERSON_NUMBER][MAX_PERSON_NAME];	/// ʵ����Ա����
};													/// 548�ֽ�
typedef	struct	Experiment_Person  EXPERIMENT_PERSON,	*PEXPERIMENT_PERSON;
/// </�ṹ15>

/// <�ṹ16>
/// <����>	�����ļ��Ļ�����Ϣ </����>
///	<����>		�����ļ�����Ҫ������ǰ�ĳ̿ط�ʽ��ÿ���߼�����ͨ������Ϣ�Լ��̼�����Ϣ��
///	</����>
const	short	BASIC_CONFIG_FILL_DATA_LEN	= 10;
const	short	BASIC_CONFIG_FILE_INFO_SIZE	= 30;

struct	Basic_Config_File_Info {
	short		shMajor_Version;				/// �����ļ����汾��
	short		shMinor_Version;				/// �����ļ��ΰ汾��
	short		shModel_No;						/// ʵ����Ŀ�ţ�Ĭ��Ϊ0����ʵ��ģ��
	short		shWork_Mode;					/// ������ʽ�������������̼��������̿ط�ʽ
	short		shDevice_Number;				/// ��ǰ�����豸����Ĭ��Ϊ1
	short		shTotal_Logical_Cha_Num;		/// �����߼�����ͨ����
	short		shTotal_Analysis_Cha_Num;		/// ���з���ͨ����
	float		fDistance;						/// �����񾭸ɶ�����λ�����缫֮��ľ��룬��λ��cm
	short       shExpContent_Version;           /// ʵ�����ݰ汾 0��������˼���⣬1������˼����
	BYTE		byMaintain[BASIC_CONFIG_FILL_DATA_LEN];	/// Ԥ�����ֽ����� 
};												/// 30�ֽ�
typedef	struct	Basic_Config_File_Info  BASIC_CONFIG_FILE_INFO,	*PBASIC_CONFIG_FILE_INFO;
/// </�ṹ16>

/// <�ṹ17>
/// <����>	�����ļ��ĳ̿���Ϣ </����>
///	<����>		�̿���Ϣ���Ƴ����ģʽ�����繤������ͣ��
///	</����>
const	long	MAX_WORK_DURATION				= 99999999; /// ������ʱ�䣨3�꣩����λ��s

const	short	MAX_PROGRAM_CONTROL_NAME_LEN	= 128;		/// ������������ֳ���
const	short	MAX_EVENT_NAME_LEN				= 128;		/// ����¼�����

const	short	PROGRAM_CONTROL_TYPE_PROTOCOL	= 1;		/// Э�����
const	short	PROGRAM_CONTROL_TYPE_INTERVAL	= 0;		/// �ȼ������

const	short	WORK_STATUS_SAMPLE				= 1;		/// ����״̬
const	short	WORK_STATUS_PAUSE				= 0;		/// ��ͣ״̬

const	short	EVENT_TIP_NOT					= 0;		/// ����ʾ��
const	short	EVENT_TIP_ONE_SHORT_VOICE		= 1;		/// һ������
const	short	EVENT_TIP_TWO_SHORT_VOICE		= 2;		/// ��������
const	short	EVENT_TIP_THREE_SHORT_VOICE		= 3;		/// ��������
const	short	EVENT_TIP_ONE_LONG_VOICE		= 4;		/// һ������
const	short	EVENT_TIP_TWO_LONG_VOICE		= 5;		/// ��������
const	short	EVENT_TIP_THREE_LONG_VOICE		= 6;		/// ��������
const	short	EVENT_TIP_CONTINUOUS_VOICE		= 7;		/// ��������
const	short	EVENT_TIP_OTHER					= 8;		/// ������ʾ����������

const	short	ACTION_NOT						= 0;		/// �޶���
const	short	ACTION_START_STIMULATE			= 1;		/// �����̼�
const	short	ACTION_STOP_STIMULATE			= 2;		/// ֹͣ�̼�
const	short	ACTION_SWITCH_CHANNEL1			= 3;		/// ����ͨ��1������Ӳ��֧��8·����������ò�����������ͨ��1
const	short	ACTION_SWITCH_CHANNEL2			= 4;		/// ����ͨ��2
const	short	ACTION_SWITCH_CHANNEL3			= 5;		/// ����ͨ��3
const	short	ACTION_SWITCH_CHANNEL4			= 6;		/// ����ͨ��4
const	short	ACTION_SWITCH_CHANNEL5			= 7;		/// ����ͨ��5
const	short	ACTION_SWITCH_CHANNEL6			= 8;		/// ����ͨ��6
const	short	ACTION_SWITCH_CHANNEL7			= 9;		/// ����ͨ��7
const	short	ACTION_SWITCH_CHANNEL8			= 10;		/// ����ͨ��8

const	short	ACTION_READ_INPUT_CHANNEL1		= 11;		/// ��ȡ����ͨ��1������Ӳ��֧��8·�������룬�ò�����ȡ����ͨ��1
const	short	ACTION_READ_INPUT_CHANNEL2		= 12;		/// ��ȡ����ͨ��2
const	short	ACTION_READ_INPUT_CHANNEL3		= 13;		/// ��ȡ����ͨ��3
const	short	ACTION_READ_INPUT_CHANNEL4		= 14;		/// ��ȡ����ͨ��4
const	short	ACTION_READ_INPUT_CHANNEL5		= 15;		/// ��ȡ����ͨ��5
const	short	ACTION_READ_INPUT_CHANNEL6		= 16;		/// ��ȡ����ͨ��6
const	short	ACTION_READ_INPUT_CHANNEL7		= 17;		/// ��ȡ����ͨ��7
const	short	ACTION_READ_INPUT_CHANNEL8		= 18;		/// ��ȡ����ͨ��8

const	short	ACTION_OTHER					= 99;		/// �������������粥������

struct	Stage_Control {
	short		shWork_Status;					/// ����״̬����������ͣ
	short		shTip;							/// �׶�ת����ʾ��һ��������������һ������
	short		shAction;						/// �׶�ת�������������̼������Ƶȣ�Ĭ��û�ж���
	short		shAction_Params;				/// �׶�ת�������̲���
	float		fAction_Params;					/// �׶�ת������������
	DWORD		dwDuration;						/// ��״̬����ʱ�䣬��λ��ms
	BOOL		bAdd_Label_Flag;				/// �Ƿ���״̬�л�ʱ��ע�¼�����־������¼�����Ϊ"No"����Ϊtrue
	DWORD		dwMaintain;						/// ���ݶ��룬����4�ֽ�
	TCHAR		szMemo[MAX_EVENT_NAME_LEN];		/// �ÿ��ƽ׶ε�ע����Ϣ�����Կ���һ���¼����֣�����������
};												/// 280�ֽ�
typedef	struct	Stage_Control  STAGE_CONTTROL, *PSTAGE_CONTTROL;

struct	Program_Control_Info {
	short			shWork_Mode;				/// ����ģʽ���������������̼������ͳ������ģʽ
	short			shTotal_Work_Stage;			/// �����׶��������ȼ����ʽʱΪֹͣ������Э�鷽ʽʱΪЭ��׶���
	short			shCur_Work_Stage;			/// ��ǰ�����׶�����
	short			shTrigger_Length;			/// �̼�������ʽ�µĴ̼��������ȣ�ֻ�ڴ̼���������ʱ��Ч
	DWORD			dwCur_Start;				/// ��ǰ�����׶ε���ʼʱ�̣���λ��ms
	DWORD			dwCur_End;					/// ��ǰ�����׶εĽ���ʱ�̣���λ��ms
	PSTAGE_CONTTROL	pControl;					/// ��������ָ��
};												/// 20�ֽ�
typedef	struct	Program_Control_Info  PROGRAM_CONTROL_INFO,	*PPROGRAM_CONTROL_INFO;

/// 2016/12/28���Extend_Program_Control_Info
/// �߼���Program_Control_Info �� Extend_Program_Control_Info�������ݽṹ���Ժϲ���
/// ��δ���̿ع���ǰProgram_Control_Info���ݽṹ�����������������ļ��У��Ժ������
///	�ù���ʱ��������������Ϣ�����㣬������ٸ���Program_Control_Info�������ǰ����
/// �����ݶ������ٱ���ȡ��Ӱ��޴�Ϊ�˼���Ӱ�죬������Extend_Program_Control_Info
///	���ݽṹ������չ��Ϣ��ţ������Ͳ���Ӱ�쵽ԭ���������ļ���ȡ�ˡ�
struct	 Extend_Program_Control_Info {
	bool			bFirst_Flag;				/// ��һ�ν���̿�
	bool			bSample_Status_Flag;		/// �ȼ��ģʽ�£���ǰ�Ƿ��ڲ���״̬����������ͣ����
	short			shMaintain;					/// ���ݶ��룬����2�ֽ�
	short			shControl_Mode;				/// ����ģʽ��Э����ơ��ȼ��������
	short			shProtocol_No;				/// �̿�Э���ţ��������ʹ��Э����ƣ���ֵΪ-1
	DWORD			dwSample_Duration;			/// �ȼ��ģʽ����������ʱ�䣬��λ��ms
	DWORD			dwStop_Duration;			/// �ȼ��ģʽ�������������ֹͣʱ�䣬��λ��ms
	__time64_t		lStart_Time;				/// �̿���ʼʱ��
	TCHAR			szProtocol_Name[MAX_PROGRAM_CONTROL_NAME_LEN];	/// ��ǰ�̿�Э������
	TCHAR			szFile_Name[MAX_PROGRAM_CONTROL_NAME_LEN];		/// �̿ش����ļ�����
};												/// 536�ֽ�
typedef	struct	Extend_Program_Control_Info  EXTEND_PROGRAM_CONTROL_INFO,	*PEXTEND_PROGRAM_CONTROL_INFO;
/// </�ṹ17>

/// <�ṹ18>
/// <����>	�����ļ���ͨ����Ϣ </����>
///	<����>		ͨ����Ϣ����������ͨ���ܵ���Ϣ��ÿһ��ͨ���Ļ�����Ϣ
///			ÿһ��ͨ���Ļ�����Ϣ������ͨ������Ϣ��ͨ��״̬��Ϣ��ͨ��������Ϣ��ͨ����ʾ��Ϣ
///	</����>
const	short	MAX_SIGNAL_NAME_LEN			= 32;
const	short	WIN_DISP_INFO_FILL_DATA_LEN	= 36;

struct	Window_Disp_Info {						/// ����ṹ��Ҫ���ڴ���ͨ����ʾ��Ϣ
	bool		bDisp_Base_Line_Flag;			/// �Ƿ���ʾ����
	bool		bDisp_Grid_Flag;				/// �Ƿ���ʾ����
	bool		bBaseline_Priority_Flag;		/// true��Y��������Ȼ��ƣ�Ĭ�ϣ���false��Y�᷶Χ���Ȼ���
	bool		bFixed_Grid_Size_Flag;			/// true���̶���߸��С��false���ɱ��߸��С(Ĭ�ϣ�
	bool		bAlarm_Flag;					/// �澯��־���أ�true���򿪸澯�������ĵ�澯��false�����澯
	bool		bMaintain1_Flag;				/// Ԥ����־��Ĭ����Ϊfalse
	bool		bMaintain2_Flag;				/// Ԥ����־��Ĭ����Ϊfalse
	bool		bMaintain3_Flag;				/// Ԥ����־��Ĭ����Ϊfalse
	short		shDisp_Mode;					/// ��ʾģʽ��ʾ�������������ĵ�໤
	short		shDisp_Direction;				/// ��ʾ���򣬴����Һʹ��ҵ���
	short		shGrid_Type;					/// ��������
	short		shMaintain;						/// Ԥ����־��Ĭ����Ϊfalse
	COLORREF	colFore_Color;					/// ǰ��ɫ
	COLORREF	colBack_Color;					/// ����ɫ
	COLORREF	colGrid_Color;					/// ����ɫ
	TCHAR		szSignal_Name[MAX_SIGNAL_NAME_LEN];		/// �ź���ʾ����
	BYTE		byMaintain[WIN_DISP_INFO_FILL_DATA_LEN];/// Ԥ�����ֽ�����
};												/// 128�ֽ�
typedef	struct	Window_Disp_Info  WINDOW_DISP_INFO, *PWINDOW_DISP_INFO;
/// </�ṹ18>


/// <�ṹ19>
/// <����>	�����ļ��Ĵ̼���Ϣ </����>
///	<����>		�̼�����ʼ������Ϣ�����������̼���Ϣ�ͳ̿ش̼���Ϣ
///	</����>
const	short	MAX_STIMULATE_NUM_IN_A_SCREEN	= 10000;	/// ��ǰ����ʾ�����̼�����

const	short	STIMULATE_TYPE_SINGLE			= 0;	/// ���̼�
const	short	STIMULATE_TYPE_DOUBLE			= 1;	/// ˫�̼�
const	short	STIMULATE_TYPE_CLUSTER			= 2;	/// ���̼�
const	short	STIMULATE_TYPE_CSINGLE			= 3;	/// �������̼�
const	short	STIMULATE_TYPE_CDOUBLE			= 4;	/// ����˫�̼�
const	short	STIMULATE_TYPE_CSERIES			= 5;	/// �������̼�

struct	Save_Stimulate_Info {
	long		lSeries_No;						/// �����̼���ţ��ӵ�һ���̼���ʼ�������룬ֱ�����һ��
	short		bDisp_Flag;						/// �Ƿ���ʾ�̼���־������short����Ϊ�����ݴ�������
	short		bDisp_Value_Flag;				/// �Ƿ���ʾֵ�����ڴ��̼������Ĵ̼���������ʾֵ
	short		shMode;							/// �̼�ģʽ�����磺�ֵ�ѹ��ϸ��ѹ��������
	short		shType;							/// �̼����ͣ����磺���̼���˫�̼���
	short		shCluster_Num;					/// ���̼�����
	short		shShape;						/// �̼�����״
	float		fT1;							/// �̼���ʱ����λ: ms
	float		fWidth;							/// �̼�������λ��ms
	float		fInterval;						/// �̼����������Ҫ����˫�̼��ʹ��̼�����λ: ms
	float		fFrequency;						/// �̼�Ƶ�ʣ���λ��Hz
	float		fAmplitude1;					/// �̼�����1����λ: mV/mA������ģʽ��
	float		fAmplitude2;					/// �̼�����2����λ: mV/mA������ģʽ��
	DWORD		dwPos;							/// �¼������������ļ�(data)�еľ���λ�ã����߼�����ͨ��1Ϊ׼
};												/// 44�ֽ�
typedef	struct	Save_Stimulate_Info  SAVE_STIMULATE_INFO, *PSAVE_STIMULATE_INFO;

struct Stimulate_Disp {
	short			iNum;						/// ��ǰ����ʾ�Ĵ̼�����
	short			iDriver_Num;				/// ʵʱ״̬�²����¼���ÿ�������¼��ƶ���λ��
	long			x[MAX_STIMULATE_NUM_IN_A_SCREEN];			/// ��ǵ�x��ʾ����
	SAVE_STIMULATE_INFO		sti[MAX_STIMULATE_NUM_IN_A_SCREEN];	/// ������ǰ�¼�
};												/// 12292�ֽ�.
typedef	struct	Stimulate_Disp		STIMULATE_DISP,	*PSTIMULATE_DISP;
/// </�ṹ19>

/// <�ṹ20>
/// <����>	�����ļ��е�ʵ����ػ�����Ϣ </����>
///	<����>		����ʵ����Ϣ����ʵ�鱨����ʾ���������Ϣ��һ�������࣬����ʵ��ģ��
///			��ʵ�����ƣ�֮���Ա���������Ϊ�˲��ƻ�ԭ�������ݽṹ�������������ļ����
///	</����>
const	short	EXPERIMENT_PURPOSE_LEN		= 256;
const	short	EXPERIMENT_ANIMAL_LEN		= 128;
const	short	EXPERIMENT_EQUIPMENT_LEN	= 128;
const	short	EXPERIMENT_DRUG_LEN			= 128;
const	short	EXPERIMENT_PRINCIPLE_LEN	= 256;
const	short	EXPERIMENT_METHOD_STEP_LEN	= 1024;
const	short	EXPERIMENT_ATTENTION_LEN	= 256;
const	short	EXPERIMENT_QUESTION_LEN     = 256;

struct	Basic_Experiment_Info {
	short		shModel_No;								/// ʵ����Ŀ�ţ�Ĭ��Ϊ0����ʵ��ģ��
	TCHAR		szName[MAX_TITLE_LEN];					/// ʵ������
	TCHAR		szPurpose[EXPERIMENT_PURPOSE_LEN];		/// ʵ��Ŀ��
	TCHAR		szPrinciple[EXPERIMENT_PRINCIPLE_LEN];	/// ʵ��ԭ��
	TCHAR		szAnimal[EXPERIMENT_ANIMAL_LEN];		/// ʵ�����
	TCHAR		szEquipment[EXPERIMENT_EQUIPMENT_LEN];	/// ʵ������
	TCHAR		szDrug[EXPERIMENT_DRUG_LEN];			/// ��ǰʵ��ҩƷ
	TCHAR		szMethod_Step[EXPERIMENT_METHOD_STEP_LEN];	/// ʵ�鷽������
	TCHAR		szAttention[EXPERIMENT_ATTENTION_LEN];	/// ʵ��ע������
};														/// 4610�ֽ�
typedef	struct	Basic_Experiment_Info  BASIC_EXPERIMENT_INFO,	*PBASIC_EXPERIMENT_INFO;

struct	Basic_Experiment_Info_New {
	short		shModel_No;								    /// ʵ����Ŀ�ţ�Ĭ��Ϊ0����ʵ��ģ��
	TCHAR		szName[MAX_TITLE_LEN];					    /// ʵ������
	TCHAR		szPurpose[EXPERIMENT_PURPOSE_LEN];		    /// ʵ��Ŀ��
	TCHAR		szPrinciple[EXPERIMENT_PRINCIPLE_LEN];	    /// ʵ��ԭ��
	TCHAR		szAnimal[EXPERIMENT_ANIMAL_LEN];		    /// ʵ�����
	TCHAR		szEquipment[EXPERIMENT_EQUIPMENT_LEN];	    /// ʵ������
	TCHAR		szDrug[EXPERIMENT_DRUG_LEN];			    /// ��ǰʵ��ҩƷ
	TCHAR		szMethod_Step[EXPERIMENT_METHOD_STEP_LEN];	/// ʵ�鷽������
	TCHAR		szAttention[EXPERIMENT_ATTENTION_LEN];	    /// ʵ��ע������
	TCHAR       szQuestions[EXPERIMENT_QUESTION_LEN];       /// ʵ��˼����
};														 
typedef	struct	Basic_Experiment_Info_New  BASIC_EXPERIMENT_INFO_NEW, * PBASIC_EXPERIMENT_INFO_NEW;

/// <�ṹ20>

/// <�ṹ21>
/// <����>	�¼��ļ����¼���Ϣ </����>
///	<����>		�¼��ļ�����ʵ������еĸ����¼���Ϣ������Ӳ���������ڣ���������ͣ
///			�û���ӵı�ǵȡ�
///	</����>
const	short	MAX_EVENT_NUM_IN_A_SCREEN		= 128;	/// ��ǰ����ʾ������¼�����
const	short	MAX_EVENT_NUM_MODIFICATION		= 128;	/// ����û��޸��¼�����

const	short	EVENT_TYPE_CREATE_FILE			= 1;	/// �����ļ�
const	short	EVENT_TYPE_RECREATE_FILE		= 2;	/// �ؽ��ļ�
const	short	EVENT_TYPE_NEXT_WORK_STAGE		= 3;	/// ��һ�����׶ο�ʼ
const	short	EVENT_TYPE_START_SAMPLE			= 4;	/// ��ʼ����
const	short	EVENT_TYPE_STOP_SAMPLE			= 5;	/// ��ͣ����
const	short	EVENT_TYPE_STOP_EXPERIMENT		= 6;	/// ֹͣʵ��
const	short	EVENT_TYPE_LABEL				= 7;	/// ��ǩ
const	short	EVENT_TYPE_CHANGE_GAIN			= 8;	/// �޸�Ӳ������
const	short	EVENT_TYPE_CHANGE_DISP_RANGE	= 9;	/// �������޸�Ӳ�����޸ĵ���ʾ��Χ
const	short	EVENT_TYPE_CHANGE_LOWPASS		= 10;	/// �޸�Ӳ����ͨ�˲�
const	short	EVENT_TYPE_CHANGE_HIGHPASS		= 11;	/// �޸�Ӳ����ͨ�˲�
const	short	EVENT_TYPE_CHANGE_SAMPLE_RATE	= 12;	/// �޸�Ӳ��������
const	short	EVENT_TYPE_CHANGE_50HZ			= 13;	/// �޸�50Hz�˲�
const	short	EVENT_TYPE_DROP	                = 14;	/// �ǵ��¼�
const	short	EVENT_TYPE_IMPEDANCE			= 15;	/// �迹�¼�
const	short	EVENT_TYPE_OTHER				= 16;	/// �����¼�


const	short	EVENT_START						= 1;	/// �¼����͵���ʼֵ
const	short	EVENT_END						= 16;	/// �¼����͵Ľ���ֵ

/// ��������¼�Ҫôû�в�����Ҫôֻ��һ��������������ͣʵ�飬����������
///	1.�޸����棬���������ֵ�͵�ֵ, ��ʱ��ʹ��fParam������ֵ��pParam������ֵ
///				��ʹ��pParam������ֵʱ���䲻������һ��ָ�룬ָ���ֵ��Ϊ��ֵ
/// 2.��ǩ��	��ǩ�Ĵ�С��䣬���Ϊ128����Event_Info�ṹ������Ŵ�����ǩ��ֵ
///				����ȡ��ǩ��Ϣʱ�����ȶ�Event_Info�ṹ���ڸ���shExtra_Save_Len��ȡ
///				����ı�ǩ���ݣ�����ǩ�⣬���е��¼����޶�������ݴ�����
/// Event_Info���ڴ���һ���¼�����.
struct  Event_Info {							/// ��Ӧwave�ļ����¼���Ϣ
	short			shCha_No;					/// ��Ӹñ�־���߼�ͨ����
	short			shType;						/// �¼����ͣ����ݣ���ͨ��־��ʱ�꣬�޸Ĳ����ʵ�
	short			shExtra_Save_Len;			/// ���¼�ͷ����Ķ�������Ĳ�������
	short			shY;						/// �¼���־��y��ʾ���꣬�����û���ӵ����ֱ��ͨ����һ��y����
	float			fParam1;					/// ��һ������
	float			fParam2;					/// �ڶ�������
	DWORD			dwPos;						/// �¼������������ļ�(data)�еľ���λ�ã����߼�����ͨ��1Ϊ׼
	__time64_t		lTime;						/// �¼���ʱ��
	BYTE*			pParam;						/// ָ����������ָ��
};												/// 32�ֽ�
typedef	struct	Event_Info	EVENT_INFO,	*PEVENT_INFO;

/// Event_Disp���ڴ����������¼�����ʾ����.
struct Event_Disp {
	int				iNum;								/// ��ǰ����ʾ���¼�����
	int				iDriver_Num;						/// ʵʱ״̬�²����¼���ÿ�������¼��ƶ���λ��
	bool			bDelete_Flag[MAX_EVENT_NUM_IN_A_SCREEN];	/// ɾ����־
	long			x[MAX_EVENT_NUM_IN_A_SCREEN];		/// ��ǵ�x��ʾ����
	short			y[MAX_EVENT_NUM_IN_A_SCREEN];		/// ��ǵ�y��ʾ����
	EVENT_INFO		Event[MAX_EVENT_NUM_IN_A_SCREEN];	/// ������¼���Ϣ
};														/// 4488�ֽ�.
typedef	struct	Event_Disp		EVENT_DISP,	*PEVENT_DISP;

/// Event_Modification���ڴ����������û��޸ĵ��м��¼�����.
struct Event_Modification {
	int				iNum;								/// ���޸ı�Ǹ���
	bool            bRecordPos[MAX_EVENT_NUM_MODIFICATION];///�Ƿ������ݼ�¼λ�ã����ڱ�ǩ����
	short			shType[MAX_EVENT_NUM_MODIFICATION];	/// ��ǵ��޸����ͣ���������ӣ��༭��ɾ����λ���ƶ�
	EVENT_INFO		Event[MAX_EVENT_NUM_MODIFICATION];	/// ������¼���Ϣ
};														/// 3844�ֽ�.
typedef	struct	Event_Modification	EVENT_MODIFICATION,	*PEVENT_MODIFICATION;

/// Modify_A_Event���ڴ����޸�һ���¼�����ʱ����
struct Modify_A_Event {
	int				x;									/// ����xλ��
	int				y;									/// ����yλ��
	int				iSelected_Event_Disp_No;			/// ��ǰ��ѡ���ǩ����ʾ�ţ����δѡ����Ϊ-1
	BOOL			bSelected_A_Event_Flag;				/// ��ǰѡ��һ��ʵ���ǩ�ı��
	EVENT_INFO		Event;								/// ��ѡ���ǩ�ľ����¼���Ϣ
};														/// 44�ֽ�
typedef	struct	Modify_A_Event	MODIFY_A_EVENT,	*PMODIFY_A_EVENT;

/// Event_Modification���ڴ����������û��޸ĵ��м��¼�����.
struct Label_Disp_Info {
	bool			bShow_Flag;							/// �Ƿ���ʾ��ǩ��Ĭ����ʾ
	bool			bShow_Time_Flag;					/// �Ƿ���ʾ��ǩ��ʱ�䣬Ĭ�ϲ���ʾ
	short			shDisp_Direction;					/// ��ǩ����ʾ���򣺴�ֱ��ˮƽ��Ĭ��Ϊˮƽ
	short			shDisp_Sign;						/// ��ǩ��ǰ�����ţ���ֱ���߻��ͷ��Ĭ��Ϊ��ֱ����
	short			shMaintain;							/// ����
};														/// 8�ֽ�.
typedef	struct	Label_Disp_Info	LABEL_DISP_INFO, *PLABEL_DISP_INFO;
/// </�ṹ21>

/// <�ṹ22>
/// <����>	������Ϣ </����>
///	<����>		BL-420N�д��ڸ���ר�ò�������˲���������Ϊ���ӣ�Ϊ��ͳһ�����Ĵ�����
///			���в������ݶ�������ͳһ�Ĳ���ͷ + ��ͬ�Ĳ���������ķ�ʽ���в���
///				ԭ���ϲ���������Բ�������ֻ��������ͷ�����ǵ��û������޸Ĳ��������
///			�����޴�Ѫѹ������SP��
///	</����>

/// </�ṹ22>

/// <�ṹ23>
/// <����>	ͨ��ʵ����� </����>
///	<����>		BL-420N��ͨ�ò����ǿ�ʼʵ��Ļ��������������Ǵ�Start�Ի���
///			Signal�Ի����Ǵ�ʵ��ģ������ʵ�鶼��Ҫ����ͨ�ò�����
///	</����>
struct	General_Experiment_Parameter {
	short		shModel_No;						/// ģ���ţ��������ģ������-1
	short		shWork_Mode;					/// ����ģʽ���������̼�������̿�
	short		shDevice_Cluster_Number;		/// ��ǰ�豸������
	short		shTrigger_Frame_Length;			/// �̼�����������ʽ�µĴ���֡����
	short		shTotal_Logical_Cha_Num;		/// �����߼�����ͨ������
	short		shTotal_Analysis_Cha_Num;		/// ���з���ͨ��������Ĭ��Ϊ0
	short		shLable_Group_No;				/// ʵ������ţ�Ĭ��Ϊ0
	short		shMaintain;						/// Ԥ���ֽ�
	TCHAR		szExperimental_Title[MAX_TITLE_LEN];	/// ʵ�����
};														/// 272�ֽ�
typedef	struct	General_Experiment_Parameter GENERAL_EXPERIMENT_PARAMETER, *PGENERAL_EXPERIMENT_PARAMETER;
/// </�ṹ23>

/// <�ṹ24>
/// <����>	�������ݽṹ </����>
///	<����>		BL-420N���ɸ��ָ����Ĳ������ݽṹ��������ڴˡ�
///	</����>
///////////////////////////////////////////////////////////////////////////////
/// 
///	ע�⣺�������ݲ����Ĳ��������ṹ��Ҫ���������������ʽ
///
///	Save_Measure_Data_Head�����в������ݵĴ���ͷ�����еĲ���������֯������£�
///	1.	struct	Save_Result_XXX {						/// ����һ��ĳ�����ݲ������������ṹ
///		SAVE_MEASURE_DATA_HEAD	head;					/// ͨ�ò�������ͷ
///		RESULT_XXX				result;					/// ĳ�����͵Ĳ�����������ṹ
///		};												/// ?? �ֽ�
///
///	2.	struct	All_Result_XXX {						/// ĳ�ֲ��������в�����������ṹ
///	BOOL		bDisp_Flag;								/// ��ʾ��־
///	long		lTotal_Num;								/// �ܹ�����Ч�����������
///	SAVE_RESULT_XXX	results[MAX_MEASURE_XXX_NUMBER];	/// ���ĳ�����ݲ������н���Ľṹ����
///	};													/// ??? �ֽ�
///////////////////////////////////////////////////////////////////////////////
///	Save_Measure_Data_Head Ϊ����ÿ���������ݵ�ͷ��Ϣ��������������ʱ��
///	�����ȴ���һ������ͷ�ṹ��Ȼ����ͷ�ṹ�����ٸ��ϱ��β����Ľ��
struct	Save_Measure_Data_Head {
	short		shCha_No;								/// ���β������߼�����ͨ����
	short		shFile_No;								/// �������ļ���
	short		shModel_Method;							/// ����������������Ҫ
	short		shResult_Length;						/// ��������Ĵ�������
	long		lData_Num;								/// �����Ĳ����������൱�ڲ�������ʱ��
	DWORD		dwStart;								/// �Բ�����Ϊ��λ���ļ��еĴ���λ��
	__time64_t	time;									/// ����ʱ�̵ľ���ʱ��
};														/// 24 �ֽ�
typedef	struct  Save_Measure_Data_Head SAVE_MEASURE_DATA_HEAD, *PSAVE_MEASURE_DATA_HEAD;

///24.1 -------------------  ����1���������. ---------------------------------
const	short	MAX_MEASURE_SECTION_NUMBER	= 200;		/// ������������
struct	Result_Section {
	float		fMax;									/// ���ֵ
	float		fMin;									/// ��Сֵ
	float		fAverage;								/// ƽ��ֵ
	float		fArea;									/// ���
	float		fFrequency;								/// Ƶ�ʣ���λ��Hz
	float		fDuration;								/// ����ʱ�䣬��λ��s
	float		fMax_Slope;								/// �����������
	float		fMin_Slope;								/// ����½�����
	float		fGradient;								/// б��
	BOOL        bDispMeasureLine;                       /// ��ǰ�����Ƿ���ʾ������ֹ�� TRUE:��ʾ FALSE:����ʾ
};														/// 36 �ֽ�
typedef	struct  Result_Section RESULT_SECTION, *PRESULT_SECTION;

struct	Save_Result_Section {							/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_SECTION			result;						/// ����������
};														/// 56 �ֽ�
typedef	struct  Save_Result_Section SAVE_RESULT_SECTION, *PSAVE_RESULT_SECTION;

struct	All_Result_Section {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_SECTION	results[MAX_MEASURE_SECTION_NUMBER];
};														/// 11208 �ֽ�
typedef	struct  All_Result_Section ALL_RESULT_SECTION, *PALL_RESULT_SECTION;


///24.I.1 -------------------  ����I1��ˮƽ����. ---------------------------------
const	short	MAX_MEASURE_HORIZONTAL_NUMBER = 200;		/// ���ˮƽ������
struct	Result_Horizontal {
	float		fStartAmplitude;						/// ˮƽ�������ֵ
	float		fEndAmplitude;							/// ˮƽ�����յ�ֵ
	float       fDeltaAmplitude;                        /// ˮƽ���������յ�֮��Ĳ�ֵ 
	BOOL        bDispMeasureLine;                       /// ��ǰ�����Ƿ���ʾ������ֹ�� TRUE:��ʾ FALSE:����ʾ
};														/// 
typedef	struct  Result_Horizontal RESULT_HORIZONTAL, * PRESULT_HORIZONTAL;

struct	Save_Result_Horizontal {					    /// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_HORIZONTAL		result;						/// ����������
};														/// 
typedef	struct  Save_Result_Horizontal SAVE_RESULT_HORIZONTAL, * PSAVE_RESULT_HORIZONTAL;

struct	All_Result_Horizontal {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_HORIZONTAL	results[MAX_MEASURE_HORIZONTAL_NUMBER];
};														/// 11208 �ֽ�
typedef	struct  All_Result_Horizontal ALL_RESULT_HORIZONTAL, * PALL_RESULT_HORIZONTAL;

///24.2 -------------------  ����2��Ѫ������ѧ����. ---------------------------
const	short	MAX_MEASURE_HEMODYNAMICS_NUMBER	= 100;	/// ���Ѫ������ѧ������
struct Result_Hemodynamics{
	float		fLow_Pressure;							/// ����Vpmʱ�޶���ѹ���͵㣬��λ��mmHg
	float		fHigh_Pressure;							/// ����Vpmʱ�޶���ѹ���ߵ㣬ֻ������֮�ڵ�ѹ����������
	float		fHeart_Rate;							/// ���ʣ�Unit: ��/��.
	float		fSP;									/// ��������ѹ����λ��mmHg
	float		fDP;									/// ��������ѹ����λ��mmHg
	float		fAP;									/// ����ƽ��ѹ����λ��mmHg
	float		fLVSP;									/// ����������ѹ����λ��mmHg
	float		fLVDP;									/// ����������ѹ����λ��mmHg
	float		fLVAP;									/// ������ƽ��ѹ����λ��mmHg
	float		fLVEDP;									/// ��������ĩ����ѹ����λ��mmHg
	float		fDP_dtmax;								/// ��������ѹ����������ʣ���λ��mmHg/s
	float		fadp_dtmax;								/// ��������ѹ����½����ʣ���λ��mmHg/s
	float		ft_dp_dtmax;							/// �����ҿ�ʼ������dp/dtmax�ļ��ʱ�䣬��λ��mmHg
	float		fVpm;									/// �������ļ������ɷ�ʵ����������ٶ�.
	float		fVmax;									/// �������ļ������ɷ��㸺��ʱ�������ٶ�.
	float		fVce_DP40;								/// �������ڷ�չѹ��Ϊ40mmHgʱ�ļ������ɷ������ٶ�.
	float		fTime;									/// ����ʱ����.
	float		T;										/// ʱ��T.
	};													/// 72�ֽ�.
typedef	struct  Result_Hemodynamics RESULT_HEMODYNAMICS, *PRESULT_HEMODYNAMICS;

struct	Save_Result_Hemodynamics {						/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_HEMODYNAMICS		result;						/// ����������
};														/// 96 �ֽ�
typedef	struct  Save_Result_Hemodynamics SAVE_RESULT_HEMODYNAMICS, *PSAVE_RESULT_HEMODYNAMICS;

struct	All_Result_Hemodynamics {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_HEMODYNAMICS	results[MAX_MEASURE_HEMODYNAMICS_NUMBER];
};														/// 9608 �ֽ�
typedef	struct  All_Result_Hemodynamics ALL_RESULT_HEMODYNAMICS, *PALL_RESULT_HEMODYNAMICS;

///24.3 -------------------  ����3���ļ�ϸ��������λ����. ---------------------
const	short	MAX_MEASURE_MYOCARDIAL_AP_NUMBER = 100;	/// ����ļ�ϸ��������λ������
struct Result_Myocardial_AP {
	float		fAPD10;									/// 01: ����10%�Ķ�����λʱ��,	Unit: ms.
	float		fAPD20;									/// 02: ����20%�Ķ�����λʱ��,	Unit: ms.
	float		fAPD50;									/// 03: ����50%�Ķ�����λʱ��,	Unit: ms.
	float		fAPD90;									/// 04: ����90%�Ķ�����λʱ��,	Unit: ms.
	float		fAPA;									/// 05: ���=fRP+fOS,			Unit: mV.
	float		fOver_Short;							/// 06: ����,	   ��maxֵ,		Unit:mV.
	float		fRest_Potential;						/// 07: ��Ϣ��λ,  ��minֵ,		Unit:mV.
	float		fMDP;									/// 08: �����������λ  ��minֵ,Unit:mV.
	float		fVMax;									/// 09: 0������������,��������λ�����׶ε����б��, Unit:V/s.
	float		fVMaxV;									/// 10: 0����󸴼�����,��������λ�½��׶ε����б��, Unit:V/s.
	float		fAveV;									/// 11: ƽ��������б��,  Unit:V/s.
	float		fPolarization;							/// ������λ����λ��mV.
};														/// 48�ֽ�.
typedef	struct  Result_Myocardial_AP RESULT_MYOCARDIAL_AP, *PRESULT_MYOCARDIAL_AP;

struct	Save_Result_Myocardial_AP {						/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_MYOCARDIAL_AP	result;						/// �ļ�ϸ��������λ���
};														/// 72�ֽ�
typedef	struct  Save_Result_Myocardial_AP SAVE_RESULT_MYOCARDIAL_AP, *PSAVE_RESULT_MYOCARDIAL_AP;

struct	All_Result_Myocardial_AP {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_MYOCARDIAL_AP	results[MAX_MEASURE_MYOCARDIAL_AP_NUMBER];
};														/// 7208�ֽ�
typedef	struct  All_Result_Myocardial_AP ALL_RESULT_MYOCARDIAL_AP, *PALL_RESULT_MYOCARDIAL_AP;

///24.4 -------------------  ����4���Ĺ��ܲ�������. ---------------------------
const	short	MAX_MEASURE_HEART_FUNCTION_NUMBER	= 100;

struct	Wave_Point {
	float		fValue;									/// ֵ�� Unit: mV
	long		lPos;									/// ��ֵ��ʾ��λ��
};														/// 8�ֽ�
typedef	struct  Wave_Point W_POINT, *PW_POINT;

struct Mid_Result_Heart_Function {						/// �м���
	short		shHR_Num;								/// RR���ڵĲ�������
	float		potential;								/// ����д��Excel�ķ���ֵ
	float		time;									/// ����д��Excel��ʱ��ֵ
	W_POINT		Q, Qstart;								/// Q����Q����㣬Q���൱��R�������
	W_POINT		S, Send;								/// S����S���յ㣬S���൱��R�����յ�
	W_POINT		Pstart, Ptop, Pend;						/// P������㡢������յ�
	W_POINT		Rtop;									/// R���Ķ���
	W_POINT		Tstart, Ttop, Tend;						/// T������㡢������յ�
};														/// 98�ֽ�.
typedef	struct  Mid_Result_Heart_Function MID_RESULT_HEART_FUNCTION, *PMID_RESULT_HEART_FUNCTION;

struct Result_Heart_Function {
	///1.------------------  ����. --------------------------------------------
	long		shHert_Rate;							/// ���ʣ���λ��cpm
														/// RR���ڵ��ڣ�60/���ʣ�����õ��ĵ�λΪs

	///2.------------------  ���γ���ʱ��. ------------------------------------
	long		shPWave_Duration;						/// P������ʱ�䣬����ʾ����λ��ms
	long		shTWave_Duration;						/// T������ʱ�䣬����ʾ����λ��ms

	long		shPR_Interval;							/// PR���ڣ���λ��ms
														/// PR�� = PR���� - P������ʱ�䣬������ʾ����λ��ms
	long		shQT_Interval;							/// QT���ڣ���λ��ms
	long		shQTC_Interval;							/// QTC���� = QT����/sqrt(RR���ڣ�������ʱ������sΪ��λ����λ��ms

	long		shQRS_Segment;							/// QRSʱ�ޣ���λ��ms
	long		shST_Segment;							/// STʱ�Σ���λ��ms

	///3.------------------  ����. --------------------------------------------
	float		fPWave_Potential;						/// P�����ȣ�������ĵ���߶��ԣ���λ:mV
	float		fRWave_Potential;						/// R�����ȣ�������ĵ���߶��ԣ���λ:mV
	float		fTWave_Potential;						/// T�����ȣ�������ĵ���߶��ԣ���λ:mV
	float		fSWave_Potential;						/// S�����ȣ�������ĵ���߶��ԣ�����ʾ����λ:mV
	float		fQWave_Potential;						/// Q�����ȣ�������ĵ���߶��ԣ�����ʾ����λ:mV
	float		fST_Potential;							/// ST������������ĵ���߶��ԣ���λ:mV

	///2021-1-28 ����STƫ��
	float       fST_Offset;                             /// STƫ��

	///4.------------------  ����. --------------------------------------------
	long		shPWave_Electric_Axis;					/// P�����ᣬ��λ����
	long		shQRS_Electric_Axis;					/// QRS���ᣬ��λ����
	long		shTWave_Electric_Axis;					/// T�����ᣬ��λ����
};														/// 98�ֽ�.

typedef	struct  Result_Heart_Function RESULT_HEART_FUNCTION, *PRESULT_HEART_FUNCTION;

struct	Save_Result_Heart_Function {					/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_HEART_FUNCTION	result;						/// �ļ�ϸ��������λ���
};														/// 122�ֽ�
typedef	struct  Save_Result_Heart_Function SAVE_RESULT_HEART_FUNCTION, *PSAVE_RESULT_HEART_FUNCTION;

struct	All_Result_Heart_Function {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_HEART_FUNCTION	results[MAX_MEASURE_HEART_FUNCTION_NUMBER];
};														/// 12208 �ֽ�
typedef	struct  All_Result_Heart_Function ALL_RESULT_HEART_FUNCTION, *PALL_RESULT_HEART_FUNCTION;

///24.5 -------------------  ����4���ι��ܲ���. -------------------------------
const	short	MAX_MEASURE_PULMONARY_VENTILATION_NUMBER	= 100;

/// ����������ݽṹ̫��Ҫ���Ϊ5��
struct Result_Pulmonary_Ventilation {
	//1. ����״������
	int			iCur_Measure;							/// ��ǰ�Ĳ�����Ŀ��
	BOOL		bBase_input_Flag;						/// ����״�����������־.
	int			ID;										/// ���
	char		name[32];								/// ����
	short		age;									/// ����
	BOOL		sex;									/// �Ա�TRUEΪ���ԣ�FALSEΪŮ��
	short		height;									/// ��ߣ���λ��cm
	short		weight;									/// ���أ���λ��kg
	long		time;									/// ��¼ʱ�䣬
	short		temperature;							/// �¶ȣ���λ��C
	short		press;									/// ѹ������λ��KPa
	double		BTPS;
	double		BSA;									/// ����������Body surface area������λ��M*M
	// BSA = 0.0061*height+0.0128*weight-0.1592.

	//2. VC ��Ŀ����									/// �λ���������Ŀ
	BOOL		bVC_Measured_Flag;						/// VC ��Ŀ�Ѿ����Եı�־����˵�������Ŀ�µ������Ѿ���Ч.
	int			iVC_Counter;							/// VC ��������
	double		VC;										/// �λ���(Vital capacity)��				��λ����
	double		VCP;									/// Ԥ�Ʒλ�����							��λ����
	double		VC_VCP;									/// VC/VCP��								��λ��%
	double		IRV;									/// ��������(Inspiratory reserve volume��	��λ����
	double		ERV;									/// ��������(Expiratory reserve volume)��	��λ����
	double		TV;										/// ������(Tidal volume)��					��λ����
	double		TVM;									/// ÿ�־�Ϣͨ������TVM=TV*RR;
	double		IC;										/// ������(Inspiratory capacity))��IC=TV+IRV��λ����
	double		RV;										/// ������(Residual volume)��				��λ����
	double		FRC;									/// ���ܲ�����(Functional residual capacity)��FRC=RV+ERV
	double		TLC;									/// ������(Total lung capacity)��TLC=IRV+TV+ERV+RV
	double		VE;										/// ÿ���Ӻ�����
	double		EC;										/// ������
	
	//3. FEVC ��Ŀ����									/// ���ڷλ���������Ŀ
	BOOL		bFEVC_Measured_Flag;					/// FEVC ��Ŀ�Ѿ����Եı�־����˵�������Ŀ�µ������Ѿ���Ч.
	int			iFEVC_Counter;							/// FEVC ��������
	double		FEVC;									/// ���ڷλ���(Vital capacity)��			��λ����
	double		FIRV;									/// ����������								��λ����
	double		FERV;									/// ���������								��λ����

	//4. FVC ��Ŀ����									/// ʱ�䣨�������λ���������Ŀ
	BOOL		bFVC_Measured_Flag;						/// FVC ��Ŀ�Ѿ����Եı�־����˵�������Ŀ�µ������Ѿ���Ч.
	int			iFVC_Counter;							/// FVC ��������
	double		FVC;									/// �����λ�����							��λ����
	double		FEV05;									/// 0.5���������������						��λ����
	double		FEV1;									/// 1���������������						��λ����
	double		FEV2;									/// 2���������������						��λ����
	double		FEV3;									/// 3���������������						��λ����
	double		FEV05R;									/// 0.5���ʣ�FEV05R	= FEV05/FVC,			��λ��%
	double		FEV1R;									/// 1���ʣ�	FEV1R	= FEV1/FVC,				��λ��%
	double		FEV2R;									/// 2���ʣ�	FEV2R	= FEV2/FVC,				��λ��%
	double		FEV3R;									/// 3���ʣ�	FEV3R	= FEV3/FVC,				��λ��%
	double		MEFR;									/// �����������ʣ�						��λ��L/s
	double		MMEF;									/// �������м�������						��λ��L/s
	double		EXTIME;									/// ����ʱ�䣬								��λ��s

	//5. MVV ��Ŀ����									/// ���ͨ����������Ŀ
	BOOL		bMVV_Measured_Flag;						/// MVV ��Ŀ�Ѿ����Եı�־����˵�������Ŀ�µ������Ѿ���Ч.
	int			iMVV_Counter;							/// MVV ��������
	double		MVV;									/// ʵ�����ͨ������						��λ����
	double		MVVP;									/// Ԥ�����ͨ������						��λ����
	// MVVP = [86.5-(0.522*age)]*BSA	(����)
	// MVVP = [71.3-(0.47*age)]*BSA		(Ů��)
	double		MVV_MVVP;								/// MVV/MVVP��								��λ��%	��λ��%
	double		RR;										/// �����ʣ�								��λ����/��
	double		VSP;									/// ͨ�������ٷֱ�(Ventilatory reserve percent), ��λ��%
	// VSP = (ÿ�����ͨ����-ÿ�־�Ϣͨ����)/ÿ�����ͨ����=(MVV-TV*RR)/MVV
	double		BMC;					
	// Ԥ�����ͨ������BMC=FEV1*35
};														/// ??�ֽ�.
typedef	struct  Result_Pulmonary_Ventilation RESULT_PULMONARY_VENTILATION, *PRESULT_PULMONARY_VENTILATION;

struct	Save_Result_Pulmonary_Ventilation {				/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_PULMONARY_VENTILATION	result;				/// �ļ�ϸ��������λ���
};														///  �ֽ�
typedef	struct  Save_Result_Pulmonary_Ventilation SAVE_RESULT_PULMONARY_VENTILATION, *PSAVE_RESULT_PULMONARY_VENTILATION;

struct	All_Result_Pulmonary_Ventilation {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_PULMONARY_VENTILATION	results[MAX_MEASURE_PULMONARY_VENTILATION_NUMBER];
};														/// ?? �ֽ�
typedef	struct  All_Result_Pulmonary_Ventilation ALL_RESULT_PULMONARY_VENTILATION, *PALL_RESULT_PULMONARY_VENTILATION;
/// </�ṹ24>

///24.6 -------------------  ����5���񾭸��˷ܴ����ٶȲ���. -------------------
const	short	MAX_MEASURE_AP_SPEED_NUMBER	= 200;

/// �񾭸��˷ܴ����ٶȵļ��㷽����fSpeed = 10 * fDistance / fDuration����λ����/��
/// ֮����*10��Ϊ�˽�cm/ms�ĵ�λת��Ϊ���ʱ�׼��λ��m/s��cm��ms�ĵ�λ�û��������
/// �����ٶȿ����ɾ����ʱ�������������˴����Ľ���в�����������������ٶ�
struct Result_AP_Speed {
	float		fDistance;								/// �����񾭸ɶ�����λ�����缫֮��ľ��룬��λ��cm
	float		fDuration;								/// �����񾭸ɶ�����λ�����缫�����Ķ�����λ֮���ʱ����λ,ms
};														/// 8�ֽ�.
typedef	struct  Result_AP_Speed RESULT_AP_SPEED, *PRESULT_AP_SPEED;

struct	Save_Result_AP_Speed {							/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_AP_SPEED	result;								/// �񾭸ɶ�����λ�˷ܴ����ٶȲ������
};														/// 32�ֽ�
typedef	struct  Save_Result_AP_Speed SAVE_RESULT_AP_SPEED, *PSAVE_RESULT_AP_SPEED;

struct	All_Result_AP_Speed {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_AP_SPEED	results[MAX_MEASURE_AP_SPEED_NUMBER];
};														/// 6408 �ֽ�
typedef	struct  All_Result_AP_Speed ALL_RESULT_AP_SPEED, *PALL_RESULT_AP_SPEED;
/// </�ṹ25>

///24.7 -------------------  ����6����������. -------------------
/////////////////////////////////////////////////////////////////////////////////////////////
const short MAX_MEASURE_BREATH_NUMBER = 100;
struct Result_Breath {
	float fAnaStartTime;                               /// ������ʼʱ��
	float fAnaEndTime;                                 /// ��������ʱ��
	float fMeanInhalePeakFlow;                         /// ƽ������������
	float fMeanExhaleValleyFlow;                       /// ƽ������������
	float fMaxInhalePeakFlow;                          /// �������������
	float fMinExhaleValleyFlow;                        /// ��С����������
	float fRespiratoryRate;                            /// ����Ƶ��
	float fAverageBreathingDeth;                       /// ƽ���������
	float fVentilation;                                /// ͨ����
	float fAverageInhaleCycle;                         /// ƽ����������
	float fAverageExhaleCycle;                         /// ƽ����������
	float fExpiratoryInterval_InspiratoryInterval;     /// ��������/��������֮��
	float fAirwayResistance;                           /// ��������
	float fLungCompliance;                             /// ��˳Ӧ��
	float fLungElasticResistance;                      /// �ε�������
	float fMaxIntrathoracicPressure;                   /// �������ѹ
	float fMinIntrathoracicPressure;                   /// ��С����ѹ
	float fVentilationPerMinute;                       /// ÿ��ͨ����
};														

typedef	struct  Result_Breath RESULT_BREATH, *PRESULT_BREATH;

struct	Save_Result_Breath {					        /// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_BREATH	        result;						/// �����������
};												

typedef	struct  Save_Result_Breath SAVE_RESULT_BREATH, *PSAVE_RESULT_BREATH;

struct	All_Result_Breath {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_BREATH	results[MAX_MEASURE_BREATH_NUMBER];
};											

typedef	struct  All_Result_Breath ALL_RESULT_BREATH, *PALL_RESULT_BREATH;
///////////////////////////////////////////////////////////////////////////////////////////////////

/// <�ṹ26>
/// <����>	�������ݽṹ </����>
///	<����>		BL-420N���ɸ��ָ����Ĵ������ݽṹ��������ڴˡ�
///	</����>
///1. ͨ�ô���ṹ
struct	Process_Parameter {
	short		shProcessed_Cha_No;				/// ������ͨ�����߼�����ͨ����
	short		shDisp_Cha_No;					/// ��ʾͨ����
	short		shDisp_Type;					/// ��ʾ���ͣ�ֱ��ͼ������ͼ
	short		shPoint_Num;					/// ÿ�δ������
	float		fDuration;						/// ����ʱ�䣬��λ��ms
	float		fMultiply;						/// �Ŵ���
};												/// 16 �ֽ�
typedef	struct  Process_Parameter PROCESS_PARAMETER, *PPROCESS_PARAMETER;

///2. �������߷�������
struct	HRC_Analysis_Parameter {
	short		shDuration;						/// �������߷������ݶ�ʱ�䳤�ȣ���λ���루s��
	short		shMaintain;						/// ��������������
	float		fScale_Upper_Limit;				/// ��ʾ��ߵ����ޣ���λ��bpm
	float		fScale_Lower_Limit;				/// ��ʾ��ߵ����ޣ���λ��bpm
	float		fMaintain;						/// ��������������
};												/// 16 �ֽ�
typedef	struct  HRC_Analysis_Parameter HRC_ANALYSIS_PARAMETER, *PHRC_ANALYSIS_PARAMETER;
/// </�ṹ26>

///<�ṹ27>
/// <����> ���Դ�����Ϣ </����>
///	<����>	   ������ѡ����һ������֮����Ҫָ��ѡ������ķ�Χ�����øýṹ��</����>
///	<˵��> ��CBasic_Win��ѡ������ʱʹ�øýṹ </˵��>
typedef	struct	InverseArea	{
	bool		bSelected_Flag;					/// true: ���򾭹��˸ô���.
	int			left, top;						/// ���Ͻ�
	int			right, bottom;					/// ���½�
} INVERSEAREA,	*PINVERSEAREA;
///</�ṹ27>

///<�ṹ28>
/// <�� ��>	���ݵ�����Ϣ						</����>
///	<�� ��>		������ѡ����һ������֮�󣬿��Ե�����ѡ������ͨ����ԭʼ����ΪExcel�ļ���
///			Ҳ���Ե���������ָ����ʼλ�ÿ�ʼ��ָ�����ȵ�����ͨ����ԭʼ���ݡ�
///				����û�û��ѡ����������������ݵ������򵼳������ļ�������
///	</����>
///	<˵ ��> ��CBasic_Win��ѡ������ʱʹ�øýṹ	</˵��>
typedef	struct	Export_Data_Info	{
	bool		bExport_All_Cha_Flag;			/// true: ��������ͨ�����ݣ�false������ָ��ͨ������
	bool		bExport_All_File;				/// ���������ļ���ǣ�������������ļ����ʹ�0��ʼ��ÿ��ͨ�������������ܲ�ͬ
	bool        bExportAbsoluteTime;            /// ������ʱ�������ʱ�仹�Ǿ���ʱ��
	__time64_t  tExpStartTime;                  /// ������ʱ����þ���ʱ�䣬����Ҫʹ�ø���Ϣ
	short		shLogic_Cha_Number;				/// �ܹ����߼�ͨ����
	short		shCha_No;						/// ���ֻ����һ��ͨ�����ݣ��ñ�������ָʾ����ͨ�����߼�ͨ����
	long		lStart_Pos;						/// ��1ͨ��Ϊ�����������������ļ��е���ʼλ�ã���λ��������
	long		lNumber;						/// ��1ͨ��Ϊ�����������ݵĳ��ȣ���λ��������
	float		fSample_Rate;					/// ÿ��ͨ���Ĳ�����
	CString		strTitle;						/// �򿪵ķ����ļ���
	CString		strName_Signal[MAX_SAMPLE_CHANNEL_NUMBER];	/// �����ź�����
	CString		strName_Unit[MAX_SAMPLE_CHANNEL_NUMBER];	/// �����źŵ�λ
	CString     strName_DispUnit[MAX_SAMPLE_CHANNEL_NUMBER];   /// �洢ͨ����ʾ��λ
} EXPORT_DATA_INFO,	*PEXPORT_DATA_INFO;
///</�ṹ28>

///<�ṹ29>
/// <����> �ǵ����ݽṹ </����>
///	<����>	   ���ڼ�¼�ǵ����ݡ�</����>
///	<˵��> ����һ����ʱ�Ե����ݽṹ�����ڿ�����ʾ�ǵ���Ϣ�����������Ҫ���忼�� </˵��>
const	short	DROP_SHAPE_DOT			= 0;	/// �ǵ���״Ϊˮ��״
const	short	DROP_SHAPE_LINE			= 1;	/// �ǵ���״Ϊ��ֱ����״

const	short	DROP_UNIT_ML			= 1;	/// �ǵ�������λΪml�����磺ml/min
const	short	DROP_UNIT_UL			= 2;	/// �ǵ�������λΪul�����磺ul/10s
const	short	DROP_UNIT_DOT			= 3;	/// �ǵ�������λΪdrop�����磺drop/30s

const	short	ML_TO_UL				= 1000;	/// mlת��ΪulҪ����1000
const   short   HOUR_TO_MIN             = 60;   /// Сʱת����Ҫ����60   
const	short	MIN_TO_S				= 60;	/// minuteת��ΪsҪ����60
const	short	S_TO_MS					= 1000;	/// sת��ΪmsҪ����1000
const	DWORD	MIN_TO_MS				= 60000;/// minת��ΪmsҪ����60000


typedef	struct	Drop_Parameter	{
	short		shShape;						/// �ǵ���״��������ˮ��״������״��Ĭ�ϣ�ˮ��״
	short		shUnit;							/// �ǵε�λ��������ml, ul, drop��Ĭ�ϣ�drop
	short		shConvert_Value;				/// ��ml�ǵε�λת��Ϊ������ת��ֵ��Ĭ�ϣ�1ml = 20 drops
	short		shUnit_Time;					/// ͳ�Ƽǵεĵ�λʱ�䣬��λ��s����Χ��10s-600s
	long		lScale_Range;					/// ��߷�Χ���ڲ���λ��drops����Χ��100drops -2000drops����ʾʱ����shUnitת��
	long		lMaintain;						/// ���������ڽṹ����
} DROP_PARAMETER,	*PDROP_PARAMETER;			/// 16�ֽ�

typedef	struct	Drop_Statistics	{
	long		lSum;							/// �ܼǵ�����ֻ��¼�����������û�Ҫ��ʾΪml��������ʾʱ����ת��
	float		fUnit_Sum;						/// ��λʱ��ǵ�����ֻ��¼�����������û�Ҫת����ֻ����ʾʱת����λ
	DWORD		dwStart_Time;					/// �ǵε�λʱ�����ʼʱ�䣬��λ��ms
	DWORD		dwEnd_Time;						/// �ǵε�λʱ��Ľ���ʱ�䣬��λ��ms
} DROP_STATISTICS,	*PDROP_STATISTICS;			/// 16�ֽ�
///</�ṹ29>

///<�ṹ30>
/// <����> ���������̼����ƽṹ </����>
///	<����> ���������̼��Ŀ��ƽṹ. </����>
///	<˵��> �������̼�����ģʽ�������أ��½��أ�ͨ���ţ���Ļλ�ú�ֵ
///	</˵��>
typedef	struct	ST_Work_Mode {
	BOOL		bSelect_Flag;					/// ���ѡ�񵽴̼�������
	short		shWork_Mode;					/// �̼�������ģʽ�����������̼�����������
	short		shTigger_Mode;					/// �����������µĴ���ģʽ�������ش������½��ش���
	short		shDevice_No;					/// �豸�ţ��ݶ�Ϊ0
	short		shCha_No;						/// �������ںţ����ڲ����ں�һ��
	short		shTrigger_Height;				/// �����߶ȣ������Win2��λ�ã����ڻ���
	float		fTrigger_Value;					/// ����ֵ
}	ST_WORK_MODE, *PST_WORK_MODE;				/// 16�ֽ�
///</�ṹ30>

///<�ṹ31>
/// <����> ���ݼ����м�ṹ </����>
///	<����> ���ݼ���ʱ���û�ѡ���������������ڸýṹ��. </����>
///	<˵��> ���ݼ��������ַ�ʽ������ƴ�Ӻ�����ɾ��
///	</˵��>
const	short	MAX_DATA_CUT_BLOCK_NUMBER	= 256;
const	short	TYPE_CUT_COPY	= 1;			/// ����ѡ������
const	short	TYPE_CUT_DELETE	= 2;			/// ɾ��ѡ������
typedef	struct	Data_Cut {
	bool		bFirst_Cut_Flag;				/// ��һ�μ�����ǣ���һ�μ���ȷ����������
	bool		bMulti_Cha_Flag;				/// ��ͨ���������ǵ�ͨ��������Ĭ�϶�ͨ��
	short		shType;							/// ���ݱ�����������ɾ����Ĭ�ϱ���
	short		shCha_No;						/// ����ʱѡ���ͨ����
	short		shBlock_Num;					/// ��ǰ���������ݿ���.
	DWORD		dwStart[MAX_DATA_CUT_BLOCK_NUMBER];
	DWORD		dwLen[MAX_DATA_CUT_BLOCK_NUMBER];
}	DATA_CUT,	*PDATA_CUT; 					/// 2056�ֽ�.
///</�ṹ31>

///<�ṹ31��2>
/// <����> ��������м�ṹ </����>
///	<����> �������ʱ���û�ѡ���������������ڸýṹ��. </����>
///	<˵��> �������
///	</˵��>
typedef	struct	Data_Save {
	long        nChaNoCount;                         /// �������ݵ�ͨ������
	short       shCha_No[MAX_TOTAL_CHANNEL_NUMBER];  /// ͨ����
	DWORD		dwStart;
	DWORD		dwLen;
}	DATA_SAVE,	*PDATA_SAVE; 					
///</�ṹ31��2>

///<�ṹ32>
/// <����> �������ݲ��ſ�����		</����>
///	<����> ����ÿһ����ͼ�Ĳ���.	</����>
///	<˵��> ÿһ��Document���б���һ��Replay_Play�ṹ
///	</˵��>
const	short	MIN_REPLAY_PLAY_SPEED	= 1;	/// ��С���ݲ����ٶ�
const	short	MAX_REPLAY_PLAY_SPEED	= 8;	/// ����ݲ����ٶ�
const	short	DEF_REPLAY_PLAY_SPEED	= 1;	/// Ĭ�Ϸ��ݲ����ٶ�

const	short	MIN_REPLAY_PLAY_SOUND_VOLUME	= 0;	/// ��С���ݲ��ŷ�������
const	short	MAX_REPLAY_PLAY_SOUND_VOLUME	= 256;	/// ����ݲ��ŷ�������
const	short	DEF_REPLAY_PLAY_SOUND_VOLUME	= 128;	/// Ĭ�Ϸ��ݲ��ŷ�������

typedef struct Replay_Play {
	short		shSpeed;						/// ���ݲ����ٶȣ�1��Normal��2:double
	short		shVoice_Cha_No;					/// ������ͨ���ţ�Ĭ��Ϊ1ͨ��
	short		shVoice_Volum;					/// ��������
	short		shMaintain;						/// ������������
}	REPLAY_PLAY,	*PREPLAY_PLAY; 				/// 8�ֽ�.
///</�ṹ32>

///<�ṹ33>
/// <����> ���ʱ�����س����ͽṹ		</����>
///	<����> ���ֳ����ͽṹ.				</����>
///	<˵��> ���ʱ�����һ�����ܣ�����ʮ�����࣬��˷ǳ����ӣ��кܶ����ݽṹ֧��
///	</˵��>
///1.----------------------  ���ʱ�����������ͽṹ. --------------------------
const	short	HRV_DATA_TYPE_ECG	= 0;		/// ���������ĵ�����
const	short	HRV_DATA_PRESSURE	= 1;		/// ��������Ѫѹ����
const	short	HRV_DATA_PULSE		= 2;		/// ��������ָ������

const	short	HRV_CHART_LORENZ				= 1;	/// Lorenzͼ����RR���ں���һRR����Ϊx��y���ɢ��ͼ
const	short	HRV_CHART_RR_HISTOGRAM			= 2;	/// RR����ֱ��ͼ��RR����Ϊx�ᣬRR���ڼ���Ϊy��
const	short	HRV_CHART_DELTA_RR_HISTOGRAM	= 3;	/// RR���ڲ�ֱֵ��ͼ��RR���ڲ�ֵΪx�ᣬRR���ڲ�ֵ����Ϊy��
const	short	HRV_CHART_TACHOGRAM				= 4;	/// �ٶ�ͼ��RR���ڼ���Ϊx�ᣬRR����Ϊy��
const	short	HRV_SPECTRUM_POWER				= 5;	/// ������ͼ��RR���ڵ�Ƶ��Ϊx�ᣬRR���ڵĹ���Ϊy��

typedef	struct	HRV_Parameters {
	bool		bOnline_Analysis_Flag;			/// true��ʵʱ������false�����ݷ�����Ĭ��Ϊfalse��������ݵ�ǰ״���Զ��ж�
	bool		bInclude_ULF_Flag;				/// true������ULFƵ�Σ�false����������Ĭ��Ϊtrue
	short		shData_Type;					/// �ĵ����ݡ�Ѫѹ���ݻ�ָ�����ݣ�Ĭ��Ϊ�����ĵ�����
	short		shAnalysis_Channel;				/// ����ͨ����0��1��2��3�ȣ�Ĭ��Ϊ��һ���ĵ�ͨ��
	short		shFFT_Point_Number;				/// FFT�����ĵ�������Χ��256��512��1024��2048��Ĭ��Ϊ��1024
	short		shBin_Size;						/// ֱ��ͼ��ȣ���Χ��5ms-50ms, Ĭ��10ms
	short		shDNN;							/// ����RR���ڴ��ֵ����ֵ��һ��ͳ�����жϴ��ڸò�ֵ��RR���ڸ�����Ĭ��50ms
	long		lAnalysis_Start_Time;			/// ������ʼʱ�䣬Ĭ�ϣ�60s����Ҫ���ǵ�ǰ60������ݿ��ܶ���̫�ȶ�
	long		lAnalysis_Length;				/// ����ʱ����ѡ��1��2��5��10��20��30���ӵȣ�Ĭ�ϣ�5���ӣ���λ��s
	long		lRefrence_RR_Interval;			/// �ο�RR���ڣ��÷���һ�����ݵ�ƽ��RR���ڴ��棬�û����裬��λ��ms
	float		fLow_Limit_Of_Normal_RR;		/// ����RR���ڵ����ޣ���Χ��0.2-0.8��Ĭ��Ϊ��0.5RRAVE
	float		fHigh_Limit_Of_Normal_RR;		/// ����RR���ڵ����ޣ���Χ��1.2-2.0��Ĭ��Ϊ��1.5RRAVE

	short		shAnalysis_Segment_Length;		/// ÿ��Ѱ��RR����ķ������ζεĳ��ȣ���Χ��5s-60s��Ĭ�ϣ�5s����λ��s
	short		shEpoch;						/// ����ƽ��RR����ʱ��ÿ�η�����ʱ��Ƭ���ȣ���Χ��50-500��Ĭ�ϣ�100����λ��ms
	float		fAmplitude_Filter;				/// R�������˲�ֵ����Χ��ƽ��RR�����ȵ�50% - 100%��Ĭ�ϣ�80%����λ��%
} HRV_PARAMETER, *PHRV_PARAMETER;				/// 40�ֽ�

///2.----------------------  ���ʱ���R������λ�ô��������ͽṹ. ---------------
const	long	MAX_R_POS_NUMBER	= 20000;	/// ����R��λ�ô�������������ÿ��10����С�󣩣�����1800s��30���ӣ�����
const	short	R_TYPE_NORMAL		= 1;		/// �Զ�������������R������Χ�ڣ�0.5RR - 1.5RR
const	short	R_TYPE_ABNORMAL		= 2;		/// �Զ�����������RR��������ֵ��Χ���쳣ֵ
const	short	R_TYPE_MANUAL_ADD	= 3;		/// �ֶ���ӵ�RR����

typedef	struct	R_Position {
	long		lPos;							/// R�����ڵ��ļ�λ�ã����������ʱ���൱�ھ���ʱ��
	float		fValue;							/// R���Ĳ���ֵ��С��ʵ��ֵ��������Ļ���ʱʹ�ã���ԭBL-420F��short�ͱ����޸�Ϊfloat
	short		shType;							/// R�������ͣ����磬�Զ�Ѱ�ҵ�����R�����쳣R�����ֶ���ӵ�R����
} R_POSITION, *PR_POSITION;						/// 8�ֽ�

typedef	struct	HRV_R_Wave {
	long		lNumber;						/// ��ǰ������R������
	long		lValid_Number;					/// ��Ч��R������
	R_POSITION	R_Pos[MAX_R_POS_NUMBER];		/// R��������Ϣ
} HRV_R_WAVE, *PHRV_R_WAVE;						/// Լ160K�ֽ�

typedef	struct	HRV_RR_Interval {
	long		lNumber;						/// ��ǰ������RR����
	short		shInterval[MAX_R_POS_NUMBER];	/// RR��������
} HRV_RR_INTERVAL, *PHRV_RR_INTERVAL;			/// Լ40K�ֽ�

typedef	struct	HRV_Power_Spectrum_Result {
	double		fTP;							/// ���η��������Ƶ�ף�DC 0.4Hz���ܹ��ʣ���λms2
	double		fVLFP;							/// ����Ƶ��Very low frequency��0.004Hz-0.04Hz�����ʣ�����λms2
	double		fLFP;							/// ����Ƶ��Very low frequency��0.004Hz-0.04Hz�����ʣ�����λms2
	double		fHFP;							/// ��Ƶ��High frequency��0.15Hz-0.4Hz�����ʣ�����λms2
	double		fLF_HF;							/// LFP / HFP
	double		fNHFP;							/// HF/(Total_Power-VLF-ULF)
	double		fNLFP;							/// LF/(Total_Power-VLF-ULF)
} HRV_POWER_SPECTRUM_RESULT, *PHRV_POWER_SPECTRUM_RESULT;	/// HRV Ƶ�׷������

/// ��������ʱ����R����Ϣ�����ݽṹ�����е�λ��Ϊ���λ�ã�����ڷ������ݶε���ʼ�㣨��ʼ��Ϊ0����
/// ���е�λ�ò��ò���������������ʼ��Ĳ�����ƫ�롣
struct	 QRS_Wave {
	bool		bValid_Flag;					/// ��Ч�Ա�־
	bool		bR_Wave_Up_Flag;				/// R�����ϱ�־�����R�����ϣ���ֵΪ�棬����Ϊ��
	long		shStart_Pos;					/// ��ʼλ�ã��൱��Q��λ��
	long		shR_Pos;						/// R��λ��
	long		shEnd_Pos;						/// ����λ�ã��൱��S��λ��
	float		fStart_Value;					/// Q�����ȣ���λ��mV
	float		fR_Value;						/// R�����ȣ���λ��mV
	float		fEnd_Value;						/// S�����ȣ���λ��mV
};												/// 20�ֽ�
typedef	struct  QRS_Wave  QRS_WAVE, *PQRS_WAVE;		/// R��������ݽṹ
///</�ṹ33>


///	<�ṹ34>
/// <����>	�����״��Ⱥ����λPS�����ṹ								</����>
///	<����>	����ͨ�ò����ṹ����										</����>
///	<˵��>	�����״�ص�Ⱥ����λPS��population spikes������			</˵��>
const	short	MAX_MEASURE_PS_NUMBER		= 200;		/// The maximum number of SP measure.
typedef	struct	Result_PS {
	short		shCha_No;								/// �߼�ͨ����
	short		shMaintain;								/// ���ݶ���
	float		fAValue;								/// ��ʾA���yֵ������������ֵ
	float		fBValue;								/// ��ʾB���yֵ������������ֵ
	float		fCValue;								/// ��ʾC���yֵ������������ֵ
	float		fDValue;								/// ��ʾD���yֵ������������ֵ
	DWORD		dwAPos;									/// ��ʾA��ľ���λ�ã��������
	DWORD		dwBPos;									/// ��ʾB��ľ���λ�ã��������㣬D���Xλ����B�����ͬ
	DWORD		dwCPos;									/// ��ʾC��ľ���λ�ã�����ģ�㣬
} RESULT_PS, *PRESULT_PS			;					/// 32�ֽ�

typedef	struct	Save_Result_PS {						/// �ýṹ����ͻ�����λ�������
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_PS	result;									/// ͻ�����λб�ʲ������
} SAVE_RESULT_PS, *PSAVE_RESULT_PS;						/// 56 �ֽ�

typedef  struct	All_Result_PS {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_PS	results[MAX_MEASURE_PS_NUMBER];
} ALL_RESULT_PS, *PALL_RESULT_PS;						/// 11208 �ֽ�
///</�ṹ34>

///	<�ṹ35>
/// <����>	����ͻ�����λ����PSP�����ṹ								</����>
///	<����>	����ͨ�ò����ṹ����										</����>
///	<˵��>	����ͻ�����λ����PSP�����ṹ��Postsynaptic potential������	</˵��>
const	short	MAX_MEASURE_PSP_SLOPE_NUMBER	= 200;	/// The maximum number of SLOPE measure.
const	short	MAX_ANALYSIS_PSP_SLOPE_POINT_NUM= 16;	/// ֱ�߻ع鷽���������ĵ���
const	short	WAVE_TYPE_PSP_DOUBLE_HEAD		= 1;	
const	short	WAVE_TYPE_PSP_SINGLE_HEAD		= 2;

typedef	struct	Measure_PSP_Slope_Data {				/// ������ݽṹ���ڴ���ͻ�����λб�ʲ���ʹ�õ�ԭʼ����
	float		x[MAX_ANALYSIS_PSP_SLOPE_POINT_NUM];	/// ���Իع鷽�̵�ԭʼ��x���ݣ���λΪms
	float		y[MAX_ANALYSIS_PSP_SLOPE_POINT_NUM];	/// ���Իع鷽�̵�ԭʼ��y���ݣ���λΪuV
} MEASURE_PSP_SLOPE_DATA, *PMEASURE_PSP_SLOPE_DATA;		/// 128�ֽ�

typedef	struct	Measure_PSP_SLOPE_Parameter {			/// ������ݽṹ���ڴ���ͻ�����λб�ʷ����Ĳ���
	bool		bExport_To_Excel_Flag;					/// �Ƿ񵼳�ΪExcel���ݵı�־
	bool		bDisp_Line_Flag;						/// �Ƿ���ʾ���ֱ�ߵı�־
	short		shCha_No;								/// �������߼�ͨ����
	short		shLinear_Point_Num;						/// ���Իع����
	short		shWave_Type;							/// ���ε����ͣ�˫ͷ���ǵ�ͷ
	double		fHigh_Threshold;						/// �������ޣ��ﵽ���ֵ�İٷֱ�
	double		fLow_Threshold;							/// �������ޣ��ﵽ���ֵ�İٷֱ�
} MEASURE_PSP_SLOPE_PARAMETER, *PMEASURE_PSP_SLOPE_PARAMETER;	/// 24�ֽ�

typedef struct	Result_PSP_Slope {
	double		k;										/// ���Իع鷽�� y=kx+b��б��k����λ: mV/s
	double		b;										/// ���Իع鷽�� y=kx+b�Ľؾ�b����λ��uV
	double		r;										/// ���Իع鷽�̵����ϵ��relation���޵�λ
	float       g;                                      /// g:�������λ(PS)�Ĵ�ֱ��������df(PS����ʼ����ڶ������˵������df)�Ľ���
	float		max;									/// �������ݶε����ֵ����λΪuV
	float		min;									/// �������ݶε���Сֵ����λΪuV
	DWORD		dwStart_Pos;							/// ���λع�ֱ������xλ�ã������������ʹ��
	DWORD		dwEnd_Pos;								/// ���λع�ֱ��ĩ���xλ�ã������������ʹ��
	float		fStart_Value;							/// ���λع�ֱ������yֵ�������������ʹ��
	float		fEnd_Value;								/// ���λع�ֱ��ĩ���yֵ�������������ʹ��
} RESULT_PSP_SLOPE, *PRESULT_PSP_SLOPE;					/// 48 �ֽ�

typedef	struct	Save_Result_PSP_Slope {					/// �ýṹ����ͻ�����λ�������
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_PSP_SLOPE		result;						/// ͻ�����λб�ʲ������
} SAVE_RESULT_PSP_SLOPE, *PSAVE_RESULT_PSP_SLOPE;		/// 72 �ֽ�

typedef  struct	All_Result_PSP_Slope {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_PSP_SLOPE	results[MAX_MEASURE_PSP_SLOPE_NUMBER];
} ALL_RESULT_PSP_SLOPE, *PALL_RESULT_PSP_SLOPE;			/// 14408 �ֽ�
///</�ṹ35>

///<�ṹ36>
///<����> ʵ��ͨ���Ĳ���												</����>
///<����>  ʵ��ͨ���Ĳ����������ݽṹ									</����>
///<˵��> һ��ʵ��ģ���Ӧ�ڶ��ʵ��ͨ������							</˵��>
typedef struct Config_Exp_Cha_Params {
	short		shDevice_No;							/// �豸��
	bool		bDiff_Disp_Range;						/// �Ƿ�ʹ�ò�ͬ��ʾ��Χֵ�������뷶Χ��ֵ�ͷ�Χ��ֵһ��
	bool		b50Hz_Notch;							/// 50Hz�˲�	
	short		shExp_Model_No;							/// ʵ��ģ���
	short		shPhysical_Cha_No;						/// ����ͨ����
	short		shLogical_Cha_No;						/// �߼�ͨ����	
	float		fSample_Rate;							/// ������
	float		fHigh_Range;							/// ��Χ��ֵ
	float		fLow_Range;								/// ��Χ��ֵ
	float		fMin_Disp_Range;						/// ��ʾ��Χ��ֵ
	float		fMax_Disp_Range;						/// ��ʾ��Χ��ֵ
	float		fHighPass;								/// ��ͨ
	float		fLowPass;								/// ��ͨ
	float		fSpeed;									/// ɨ���ٶ�
	CString		strExp_Name;							/// ʵ������	
	CString		strSensor_Name;							/// ����������
	CString		strSignal_Type;							/// �ź�����
	CString		strSignal_Label;						/// �źű�ǩ
} CONFIG_EXP_CHA_PARAMS, *PCONFIG_EXP_CHA_PARAMS;
///</�ṹ36>

///<�ṹ37>
/// <����> ʵ��ͨ���Ĳ���												</����>
///	<����> ʵ��ͨ���Ĳ����������ݽṹ									</����>
///	<˵��> һ��ʵ��ģ���Ӧ�ڶ��ʵ��ͨ������							</˵��>
typedef	struct	Config_Disp_Channel_Info {
	short		shExp_Model_No;							/// ʵ��ģ���
	short		shLogic_Cha_No;							/// ʵ���߼�ͨ����		
	COLORREF	colFore_Color;							/// ǰ��ɫ
	COLORREF	colBackground_Color;					/// ����ɫ
	COLORREF	colGrid_Color;							/// ������ɫ
	bool		bShow_Crid_Flag;						/// �Ƿ���ʾ����
	bool		bShow_Baseline_Flag;					/// �Ƿ����
	bool		bShow_Threshold_Flag;					/// �Ƿ���ʾƵ��ֱ��ͼ��������
	bool		bShow_Drop_Info_Flag;					/// �Ƿ���ʾ�ǵ���Ϣ
	bool		bBaseLine_Priority_Flag;				/// ����������ʾ��ʽ
	bool		bECG_Mode_Flag;							/// �ĵ���ʾ��ʽ
	bool		bShow_Time_Area_Flag;					/// ͨ��ʱ����ʾ����ʾ��־
	bool		bCompare_Display_Flag;					/// �Ƚ���ʾ��ʽ��־
	short		shCrid_Type;							/// �������ͣ��̶����ɱ��С
	short		shDisp_Mode;							/// ��ʾ��ʽ��������ʾ�������໤
	short		shDisp_Direction;						/// ��ʾ���򣺴����һ��෴
	short		shSmooth_Filter_Type;					/// ƽ���˲���ʽ���ޡ�3��5��7��
}CONFIG_DISPLAY_CHANNEL_INFO, *PCONFIG_DISPLAY_CHANNEL_INFO;/// 64�ֽ�

typedef struct Config_Exp_Label_Info{
	///long		ID;										/// ���ú�
	short		shExp_Mode_No;							/// ʵ��ģ���
	CString		strLabel_Exp_Name;						/// ʵ������
	CString		strLabel_Name;							/// ʵ���ǩ����
}CONFIG_EXP_LABEL_INFO, *PCONFIG_EXP_LABEL_INFO;
///</�ṹ37>

///<�ṹ38>
/// <����> �̼���������Ϣ												</����>
///	<����> �����̼�����Ϣ												</����>
///	<˵��> һ��ʵ��ģ����Ҳ�����д̼�����Ϣ								</˵��>
typedef struct Config_Stimulate_Info{
	//long		ID;
	//short		shWaveform_ID;							///	��������ID��
	short		shExp_Model_No;							/// ʵ��ģ��ţ�û��ʵ��ģ��ĸ���ֵΪ0
	short		shStimulate_Work_Mode;					///	�̼�������ģʽ��ϸ��ѹ���ֵ�ѹ��ϸ����
	short		shStimulate_Type;						///	�̼������ͣ����̼���˫�̼������̼����������̼���˫�̼������̼�
	//short		shProgram_Control_Type;					///	�̿����ͣ��ޣ���ͨ�̿أ��߼��̿ء���ӦstrProgram_ID�е�ID
	short		shStimulate_Wave_Type;					///	�̼������ͣ������������������Ҳ������ǲ�
	short		shStimulate_Cluster;					///	�̼�����
	short		shRepeat_Number;						///	�ظ�����
	float		fStimulate_Delay;						///	�̼���ʱ
	float		fWave_Width;							///	����
	float		fWave_Interval;							///	�����
	float		fStimulate_Frequency;					///	Ƶ��
	float		fAmplitude1;							///	����1
	float		fAmplitude2;							///	����2
	//short     shProgram_ID;							///	����̿�ID����Ӧ����ͨ�̿ػ�߼��̿�����ID
	//CString	strStimulate_Config_Name;				///	�̼�������������ƣ�Ĭ��Ϊ��BL420N�����������û��Զ���̼�����Ψһ��ʶ
	long		lWave_Point_Num;						/// �������ݸ���
	float       *pWaveform_Table;						///	��������
}CONFIG_STIMULATE_INFO, *PCONFIG_STIMULATE_INFO;

/// <����> �̼�����ͨ�̿�������Ϣ										</����>
///	<����> 																</����>
///	<˵��> �����̼��������е�����Ĭ��Ϊ��ProgramControl��				</˵��>
typedef struct Config_Program_Control_Info{
	CONFIG_STIMULATE_INFO config_Basic_Stimulate_Info;	/// �̼�����������
	short		shExp_Model_No;							/// ʵ��ģ��ţ�û��ʵ��ģ��ĸ���ֵΪ0
	short		shProgram_Type;							///�̿�����:�Զ����ȣ��Զ������Զ������,�Զ�Ƶ��
	short		shProgram_Direction;					///�̿ط��򣺵������ݼ�
	float		fProgram_Increment;						///�̿�����
	short		shProgram_Circle;						///�̿�����:1s~10s
	short		shStop_Number;							///�̿�ֹͣ����
}CONFIG_PROGRAM_CONTROL_INFO, *PCONFIG_PROGRAM_CONTROL_INFO;

/// <����> �̼����߼���ͨ�̿�������Ϣ									</����>
///	<����> 																</����>
///	<˵��> �����̼��������е�����Ĭ��Ϊ��AdvProgramControl��			</˵��>
typedef struct Config_Advance_Program_Control_Info{
	CONFIG_STIMULATE_INFO config_Basic_Stimulate_Info;	/// �̼�����������

	short		shExp_Model_No;							/// ʵ��ģ��ţ�û��ʵ��ģ��ĸ���ֵΪ0

	short		shWave_Interval_Method;					///	�߼��̿ؼ�������׼�����ڲ������׼�� ����Ƶ�ʼ����׼
	short		shStimulate_Cluster;					///	�߼��̿ش̼�����
	float		fGroup_Interval;						///	�߼��̿������

	//���а����Ԥ���̼����߼��̿��㷨����
	CString		strWave_WNameth_Methoed_Name;			///	�����㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
	CString		strFrequency_Method_Name;				///	Ƶ���㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
	CString		strAmplitude1_Method_Name;				///	����1�㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
	CString		strAmplitude2_Method_Name;				///	����2�㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
	CString		strCluster_Method_Name;					///	�����㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
	CString		strRepeat_Number_Method_Name;			///	�ظ������㷨�������ƣ���Ӧ���㷨���е�һ����Ψһ
}CONFIG_ADV_PROGRAM_CONTROL_INFO, *PCONFIG_ADV_PROGRAM_CONTROL_INFO;

typedef struct Config_Exp_Advance_Program_Control{
	short		shSti_Adv_Program_Ctrl_Num;					/// �߼��̿��д̼������
	PCONFIG_ADV_PROGRAM_CONTROL_INFO pSti_Adv_Program_Info; /// �߼��̿�����
}CONFIG_EXP_ADV_PROGRAM_CONTROL_INFO, *PCONFIG_EXP_ADV_PROGRAM_CONTROL_INFO;
///</�ṹ38>

///<�ṹ39>
/// <����> ʵ���������������Ϣ										</����>
///	<����> ʵ���������												</����>
///	<˵��> 															</˵��>
typedef struct Config_Experiment_Params{
	long									lExp_Model_No;					///	ʵ��ģ���
	short									shExp_Mode;						/// ʵ��ģʽ���ִ�ģʽ������ģʽ
	float									fPole_Distance;					/// �缫����
	short									shParams1;						/// Ԥ��ʵ�����ò���
	short									shParams2;						/// Ԥ��ʵ�����ò���
	int										iParams3;						/// Ԥ��ʵ�����ò���
	int										iParams4;						/// Ԥ��ʵ�����ò���
	float									fParams5;						/// Ԥ��ʵ�����ò���
	float									fParams6;						/// Ԥ��ʵ�����ò���
} CONFIG_EXPERIMENT_PARAMS, *PCONFIG_EXPERIMENT_PARAMS;
///</�ṹ39>

///<�ṹ40>
/// <����> ʵ��ģ��������Ϣ												</����>
///	<����> ʵ��ģ����Ϣ													</����>
///	<˵��> һ��ʵ��ģ���а���������Ϣ									</˵��>
typedef struct Config_Experiment_Info{
	long									lExp_Model_No;					///	ʵ��ģ���
	short									shLogic_Cha_Num;				///	�߼�ͨ��������Ŵ�0��ʼ��
/*
	˵����shAvailable_Cha_Num���Ѿ���ʱ�ˣ����ڲ���ʹ�øñ�����ֵ��
*/
	short									shAvailable_Cha_Num;			/// �����ļ����õ�ͨ����������Ϊͬһ��ʵ��ͬһ���߼�ͨ���ϻ����ʹ�ò�ͬ�����������			

	short									shSample_Mode;					/// ����ģʽ����������������ģʽ����
	short									shTrigger_Sample_Length;		/// ������������

	PCONFIG_EXPERIMENT_PARAMS				pExp_Params;					/// ʵ���������

	PCONFIG_EXP_CHA_PARAMS					pExp_Cha_Params;				///	ʵ��ͨ������������Ϣ��������Ӧ�ڿ��õ�ͨ��������shAvailable_Cha_Num��
	
	bool									bUse_Stimulate_Flag;			/// �Ƿ�ʹ�ô̼���
	short									shStimulate_Type;				///	�̼�����������Ϣ�������̼�����ͨ�̿أ��߼��̿�
	PCONFIG_STIMULATE_INFO					pBasic_Stimulate_Info;			/// �����̼�������
	PCONFIG_PROGRAM_CONTROL_INFO			pProgram_Stimulate_Info;		/// �̼�����ͨ�̿ص�������Ϣ��ǰ����shStimulate_Typeѡ������ͨ�̿�
	PCONFIG_EXP_ADV_PROGRAM_CONTROL_INFO	pAdv_Program_Stimulate_Info;	/// �̼����߼��̿�������Ϣ��ǰ����shStimulate_Typeѡ���˸߼��̿�

	PCONFIG_DISPLAY_CHANNEL_INFO			pCha_Display_Info;				///	�����߼�ͨ������ʾ������Ϣ��������Ӧ���߼�ͨ����

	bool									bSW_Program_Control;			/// �Ƿ��������̿ز���
	PPROGRAM_CONTROL_INFO					pSW_Program_Ctrl;				/// ����̿���Ϣ
	PEXTEND_PROGRAM_CONTROL_INFO			pExtend_SW_Program_Ctrl;		/// ��չ������̿���Ϣ	
	  
	long									lExp_Analysis_ID;				///	ʵ����Ҫ�õ��ķ����㷨��Ϣ����ʱδʵ��
	long									lSoftware_Layout_ID;			///	ʵ������Ҫ��������沼����Ϣ����ʱδʵ��

	CString									strExp_Name;					///	ʵ������
	CStringArray							*pStrExp_Label_Array;				/// ʵ���ǩ

/*	long									lExp_Model_No;					///	ʵ��ģ���
	short									shLogic_Cha_Num;				///	�߼�ͨ��������Ŵ�0��ʼ��
	PCONFIG_EXP_CHA_PARAMS					pExp_Cha_Params;				///	ʵ��ͨ������������Ϣ��������Ӧ���߼�ͨ����
	
	short									shStimulate_Type;				///	�̼�����������Ϣ�������̼�����ͨ�̿أ��߼��̿�
	PCONFIG_STIMULATE_INFO					pBasic_Stimulate_Info;			/// �����̼�������
	PCONFIG_PROGRAM_CONTROL_INFO			pProgram_Stimulate_Info;		/// �̼�����ͨ�̿ص�������Ϣ��ǰ����shStimulate_Typeѡ������ͨ�̿�
	PCONFIG_EXP_ADV_PROGRAM_CONTROL_INFO	pAdv_Program_Stimulate_Info;	/// �̼����߼��̿�������Ϣ��ǰ����shStimulate_Typeѡ���˸߼��̿�

	PCONFIG_DISPLAY_CHANNEL_INFO			pCha_Display_Info;				///	�����߼�ͨ������ʾ������Ϣ��������Ӧ���߼�ͨ����

	bool									bSW_Program_Control;			/// �Ƿ��������̿ز���
	PPROGRAM_CONTROL_INFO					pSW_Program_Ctrl;				/// ����̿���Ϣ
	PEXTEND_PROGRAM_CONTROL_INFO			pExtend_SW_Program_Ctrl;		/// ��չ������̿���Ϣ	

	long									lExp_Analysis_ID;				///	ʵ����Ҫ�õ��ķ����㷨��Ϣ����ʱδʵ��
	long									lSoftware_Layout_ID;			///	ʵ������Ҫ��������沼����Ϣ����ʱδʵ��

	CString									strExp_Name;					///	ʵ������
	CStringArray							strExp_Label_Array;				/// ʵ���ǩ
	*/
} CONFIG_EXPERIMENT_INFO, *PCONFIG_EXPERIMENT_INFO;
///</�ṹ40>

///<�ṹ41>
/// <����> ������������Ϣ												</����>
///	<����> ��������Ϣ													</����>
///	<˵��> ��������Ϣ���ڴ������ӷ������Ļ�����Ϣ						</˵��>
typedef struct Config_Server_Info{
	long		lPort;								///�˿ں�
	CString		strServer_Name;						///����������
	CString		strServer_Address;					///��������ַ
	CString		strLogin_Name;						///��������¼��
	CString		strLogin_Password;					///��������¼���루�����Ǽ��ܺ󱣴浽�����У�
} CONFIG_SERVER_INFO, *PCONFIG_SERVER_INFO;
///</�ṹ41>

///<�ṹ42>
/// <����> ϵͳ����������Ϣ												</����>
///	<����> ϵͳ������Ϣ													</����>
///	<˵��> ϵͳ������Ϣ������汾��Ӳ����Ϣ������ϵͳ��					</˵��>
typedef	struct	Config_System_Info {
	short		shMajor_Version;					/// ������汾�ţ�����1
	short		shMinor_Version;					/// ����ΰ汾�ţ�����0
	short		shInner_Version;					/// ����ڲ��汾�ţ�����999

	short		shChannel_Number;					/// Ĭ��ͨ����������4
	CString		strType;							/// �豸���ͣ�ѧ������ʦ�����е�
	CString		strComm_Mode;						/// ͨѶ��ʽ��USB������
	CString		strHW_Platform;						/// Ӳ��ƽ̨��ƽ�塢�ֻ�����PC
	CString		strOS_Platform;						/// ����ϵͳ��Windows��MacOS��Linux
	CString		strWork_Mode;						/// ������ʽ�����س������������
	CString		dateRelease_Date;					/// ����������ڣ�����2017-1-1��6�ֽ�
} CONFIG_SYSTEM_INFO, *PCONFIG_SYSTEM_INFO;
///</�ṹ42>

///<�ṹ43>
/// <����> ·������														</����>
///	<����> ϵͳ�����ļ�����·������										</����>
///	<˵��> ���磺�����ļ��������ļ�����Ƶ�ļ���							</˵��>
typedef	struct	Config_File_Path_Info {
	CString		strSample_Data_Path;				/// �������ݱ���·��
	CString		strReport_Path;						/// ʵ�鱨�汣��·��
	CString		strReport_Template_Path;			/// ʵ�鱨��ģ��·��
	CString     strExp_Template_Path;               /// ʵ��ģ��·��
	CString		strLog_Path;						/// ���������־·��
	CString		strExport_Data_Save_Path;			/// �������ݱ���·��
	CString		strVideo_Record_Path;				/// ¼����Ƶ����·��
	CString		strExperiment_Video_Path;			/// ʵ����ʾ��Ƶ·��
	CString     strExperiment_Flash_Path;			/// ʵ��ģ�⶯��·��
	CString		strCut_Data_Save_Path;				/// �������ݱ���·��
} CONFIG_FILE_PATH_INFO, *PCONFIG_FILE_PATH_INFO;
///</�ṹ43>

///<�ṹ44>
/// <����> ���������													</����>
///	<����> �������������												</����>
///	<˵��> ����������ƣ��ֱ��ʣ�֡������								</˵��>
typedef	struct	Config_Camera_Device_Info {
	CString		strDeviceName;						/// ���������
	CString     strWinAudioName;                    /// ��Ƶ�豸��
	bool        bUseMicro;                          /// ������˷�
	CString     strVideo_Color_Space;               /// ��ɫ�ռ�
	short		shVideo_Width;						/// ��Ƶ��
	short		shVideo_Height;						/// ��Ƶ��
	short		shFramer_Ratio;						/// ֡��
} CONFIG_CAMERA_DEVICE_INFO, *PCONFIG_CAMERA_DEVICE_INFO;
///</�ṹ44>

///<�ṹ45>
/// <����> ��ȫ��¼��ʽ���ݽṹ											</����>
///	<����> ����ʵʱ״̬�°�ȫ��¼��ʽ�Ĳ�������							</����>
///	<˵��> ��ȫ��¼��ʽ��ÿ�μ�¼ʱ�Ŵ��ļ���������¼���ݡ��¼���
///						 �̼���ǣ�������ǵȡ�
///		   ��Ч��¼��ʽ����¼�ļ�һֱ�򿪣������������ļ�������
///		                 Ĭ�ϵļ�¼��ʽ�����ַ�ʽЧ�ʸߣ�����Ӳ�̣�
///						 Ϊ��������ַ�ʽ�İ�ȫ�ԣ���ͨΪÿ���ʱ��
///						 �ر��ļ�һ�Σ����ʱ���û����趨��				</˵��>

const	short	RECORD_MODE_SECURITY	= 0;		/// ��ȫ��¼��ʽ
const	short	RECORD_MODE_EFFICIENT	= 1;		/// ��Ч��¼��ʽ

struct Security_Record {
	short		shMode;								/// ��¼ģʽ����ȫ�͸�Ч��Ĭ��Ϊ��Ч
	short		shMaintain;							/// ����2�ֽڣ�����4�ֽڶ���
	DWORD		dwClose_File_Interval;				/// ��Ч��¼��ʽ�¹ر��ļ�ʱ��������λʱ�䣺ms
	DWORD		dwStart;							/// ��ʼ��ʱ����λ��ms
	DWORD		dwEnd;								/// ������ʱ����λ��ms
};
typedef	struct Security_Record	SECURITY_RECORD, *PSECURITY_RECORD;
///</�ṹ45>

///<�ṹ46>
/// <����> �Ƚ���ʾ��ʽͨ�����ݽṹ										</����>
///	<����> �ýṹ���ڴ���һ��ͨ���ıȽ���ʾͨ����Ϣ						</����>
///	<˵��>	   ԭ���ϣ�ÿ��ͨ�������԰������κ�ͨ����������ʾ���Լ���
///			ͨ���ڣ����磺1ͨ������ʾ����127ͨ���Ĳ��Σ��ٱ��磬1ͨ��
///			����ʾ1��2ͨ�����ݣ���3ͨ������ʾ3��4ͨ�����ݵȡ�
///				shNo�����ڵ�ǰͨ������ʾ������ͨ�����ε�ͨ���ţ���˳��
///			���У�����1ͨ������ʾ5��6ͨ�������ݣ���ôshNumber = 2��
///			shNo[0] = 4��5ͨ����, shNo[1] = 5��6ͨ����
///				shMenu_No�����û���Ϊ��ͨ���ֶ�ѡ�������ͨ���Ĵ���
///			ͨ���ţ�����ID_COMPARE_DISPLAY_CHANNELn���Ӧ������ÿ��
///			ͨ����ѡ��ıȽ���ʾͨ����̬�仯�������Ҫ��̬���Ӧ����
///			�Ĵ���ͨ���š�
///				�����ݽṹ��ר�ŵ���CCompare_Display_Manage���й���	</˵��>

const		short	MAX_USER_SELECT_COMPARE_DISP_CHA_NUM	= 64;
struct Compare_Display {
	short		shNumber;							/// �ڸ�ͨ������ѡ��ıȽ���ʾͨ������
	short		shNumber_In_Menu;					/// �û����ֶ�ѡ��ıȽ���ʾͨ����
	short		shNo[MAX_TOTAL_CHANNEL_NUMBER];		/// �ڸ�ͨ�����Ѿ�ѡ��ıȽ���ʾͨ����
	short		shMenu_No[MAX_USER_SELECT_COMPARE_DISP_CHA_NUM];	/// �û����ֶ�ѡ��ıȽ���ʾͨ����
};
typedef	struct Compare_Display	COMPARE_DISPLAY, *PCOMPARE_DISPLAY;
///</�ṹ46>

///<�ṹ47>

const int UNIT_NAME_LENGTH = 32;     //��λ���Ƴ���

struct Person_Data_Measure{
	CString strPersonName;                      //����
	int     nAge;                               //����
	int     nBodyHeight;                        //���
	float   fBodyWeight;                        //����
	BOOL    bBoy;                               //�Ա�
	
	CString strItemName;						//��Ŀ����

	short shHRTLogicCha;						//���ʵ��߼�ͨ��
	int nHeartRate;								//����
	TCHAR strHRTUnit[UNIT_NAME_LENGTH];			//���ʵ�λ

	short shSPO2LogicCha;						//Ѫ�����ڵ��߼�ͨ��
	int nBloodOxygen;							//Ѫ��
	TCHAR strSPO2Unit[UNIT_NAME_LENGTH];		//Ѫ����λ

	short shBRLogicCha;							//����Ƶ�����ڵ��߼�ͨ��
	int nBreathRate;							//����Ƶ��
	TCHAR strBRUnit[UNIT_NAME_LENGTH];			//����Ƶ�ʵ�λ

	short shTidalLogicCha;						//���������ڵ��߼�ͨ��
	float fTidalVolume;							//������
	TCHAR strTidalVolumeUnit[UNIT_NAME_LENGTH];	 //��������λ

	short shSBPLogicCha;						//����ѹ���ڵ��߼�ͨ��
	int nSBP;									//����ѹ
	TCHAR strSBPUnit[UNIT_NAME_LENGTH];			//����ѹ��λ

	short shDBPLogicCha;						//����ѹ���ڵ��߼�ͨ��
	int nDBP;									//����ѹ
	TCHAR strDBPUnit[UNIT_NAME_LENGTH];			//����ѹ��λ

	short shEEGLogicCha;						//�Ե��߼�ͨ����		
	float fEEGValue;							//�Ե�ʵʱֵ
	float fAmplitude;							//����
	int	  iAmplitudeCount;						//֡��
	float fAlpha;								//����ǿ��
	int	  iAlphaCount;							//���֦����Ĵ���
    float fAlphaPersentValue;                   //�����ı���
	float fBeta;								//�²�ǿ��
	int	  iBetaCount;							//���֦²�����
	float fBetaPersentValue;                    //�²��ı���
	int	  iSEF50Hz;								//SEF50��Ӧ��Ƶ��
	bool  bEEGSignal;							//�ж��Ƿ���EEG�ź�
	TCHAR strEEGUnit[UNIT_NAME_LENGTH];			//�Ե�ʵʱ��λ

	short shCO2LogicCha;						//������CO2����ͨ��
	float fCO2PersentValue;						//������CO2����
	TCHAR strCO2PersentUnit[UNIT_NAME_LENGTH];	//��λ

	short shO2LogicCha;							//������CO2����ͨ��
	float fO2PersentValue;						//������CO2����
	TCHAR strO2PersentUnit[UNIT_NAME_LENGTH];	//��λ

	short shExTidalLogicCha;					//�������峱����ͨ��
	float fExTidalValue;						//���������峱����
	TCHAR stExtTidalUnit[UNIT_NAME_LENGTH];		//��λ

	short shConductivityLogicCha;				//Ƥ�������߼�ͨ��
	float fConductivity;
	TCHAR strConductivityUnit[UNIT_NAME_LENGTH];	//ʵʱֵ��λ
	bool  bLier;								//�Ƿ���������

	short shRealtimeLogicCha;					//�����������ڵ��߼�ͨ��
	float fRealtimeValue;						//ʵʱֵ
	TCHAR strRealtimeUnit[UNIT_NAME_LENGTH];	//ʵʱֵ��λ

};
typedef struct Person_Data_Measure PERSON_DATA_MEASURE, *PPERSON_DATA_MEASURE;
///</�ṹ47>

///<�ṹ48>
/// <����> ������Ϣ���ã�ʵ�鱨����Ϣ�༭��								</����>
///	<����> ������Ϣ����											    	</����>
///	<˵��> ѧУ���ƣ�Ժϵ���γ�����         							</˵��>
typedef	struct	Config_User_Info {
	CString		strCollegeName;						/// ѧУ
	CString     strDepartmentName;					/// Ժϵ
	CString     strCourseName;                      /// �γ�����
} CONFIG_USER_INFO, *PCONFIG_USER_INFO;
///</�ṹ48>

///<�ṹ49>
/// <����> ��������      							</����>
///	<����> ʵ��������õ����ƣ��Լ���Ӧʵ��ID    	</����>
///	<˵��> �����������ƣ�ʵ��ID						</˵��>
typedef	struct	Config_Params_Config {
	CString		strParamsConfigName;  ///�����������ƣ�ʵ������(��������)
	short       shExpModeNo;          ///ʵ��ID
} CONFIG_PARAMS_CONFIG, *PCONFIG_PARAMS_CONFIG;
///</�ṹ49>

/// -------------------  �������ǵβ���. ---------------------------------
const	short	MAX_MEASURE_DROP_NUMBER	= 200;		/// ������������
struct	Result_Drop {
	float       fStartTime;                             /// ������ʼʱ��
	float		fDuration;								/// ����ʱ�䣬��λ��s
	long        lDropNumber;                            /// �ǵ���
	BOOL        bDispMeasureLine;                       /// ��ǰ�����Ƿ���ʾ������ֹ�� TRUE:��ʾ FALSE:����ʾ
};														 
typedef	struct  Result_Drop RESULT_DROP, *PRESULT_DROP;

struct	Save_Result_Drop {						    	/// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						/// ͨ�ò�������ͷ
	RESULT_DROP 			result;						/// �ǵβ������
};														
typedef	struct  Save_Result_Drop SAVE_RESULT_DROP, *PSAVE_RESULT_DROP;

struct	All_Result_Drop {
	BOOL		bDisp_Flag;								/// ��ʾ��־
	long		lTotal_Num;								/// �ܹ��Ĳ����������
	SAVE_RESULT_DROP	results[MAX_MEASURE_DROP_NUMBER];
};														 
typedef	struct  All_Result_Drop ALL_RESULT_DROP, *PALL_RESULT_DROP;


struct	Magnifying_Glass_Params {
	short shWinNo;          //ͨ��
	//float fSampleRate;      //��ͨ���Ĳ�����
	//float fCompress_Ratio;  //ѹ����
	float fStartTime;       //������ʼ���Ӧ��ʱ��ms
	float fEndTime;
	long  lFileStart;       //���ηŴ���ļ����
	long  lFileEnd;         //���ηŴ���ļ�������

	float fDispMax;
	float fDispMin;
	float fUnitConvertionRatio; //��λת����
	CString strUnit;        //���ݵ�λ
	long lNum;              //���ݳ���
	float *pData;           //������Ϣ

	bool  bBaselineFlag;    //��ʾ���ߵı�־
	bool  bFixedMouseFlag; //�Ŵ��е����ѡ�е��Ƿ���basic_char������һֱ
};													
typedef	struct	Magnifying_Glass_Params  MAGNIFYING_GLASS_PARAMS,	*PMAGNIFYING_GLASS_PARAMS;

/// -------------------  ������Ѫѹ����. ---------------------------------
const	short	MAX_MEASURE_BLOOD_PRESSURE_NUMBER	= 200;	    	/// ���Ѫѹ������
struct	Result_Blood_Pressure {
	float		fSP;										    	/// ����ѹ
	float		fDP;										    	/// ����ѹ
	float		fAP_Approximation;								   	/// ƽ��ѹ(���Ʒ���
	float       fAP_Integral;                                       /// ƽ��ѹ(���ַ�)
	float		fPulsePressure;						  	    	    /// ��ѹ��
	float		fHR;								  	    	    /// ����
	float		fDuration;								    		/// ����
	float		fT_SP;								 	    	    /// T_SP(����ѹ��Ӧʱ��)
	float		fT_DP;								 	    	    /// T_DP(����ѹ��Ӧʱ��)
};											 			
typedef	struct  Result_Blood_Pressure RESULT_BLOOD_PRESSURE, *PRESULT_BLOOD_PRESSURE;

struct	Save_Result_Blood_Pressure {					            /// �ýṹ��ͬʱ������ʾ
	SAVE_MEASURE_DATA_HEAD	head;						            /// ͨ�ò�������ͷ
	RESULT_BLOOD_PRESSURE	result;						            /// ����������
};														         
typedef	struct  Save_Result_Blood_Pressure SAVE_RESULT_BLOOD_PRESSURE, *PSAVE_RESULT_BLOOD_PRESSURE;

struct	All_Result_Blood_Pressure {
	BOOL		bDisp_Flag;								            /// ��ʾ��־
	long		lTotal_Num;								            /// �ܹ��Ĳ����������
	SAVE_RESULT_BLOOD_PRESSURE	results[MAX_MEASURE_BLOOD_PRESSURE_NUMBER];
};														 
typedef	struct  All_Result_Blood_Pressure ALL_RESULT_BLOOD_PRESSURE, *PALL_RESULT_BLOOD_PRESSURE;

/// -------------------  ��������ֵ����. ---------------------------------
//������ֵ��ʽ
const short THRESHOLD_WAVE_DIRECT_PNP = 0;
const short THRESHOLD_WAVE_DIRECT_NPN = 1;
//��ֵ����ѡ��ʽ
const short THRESHOLD_WAVE_REGION_SELECT_MANUAL = 0;          //�ֶ��������ʱ�䣨���ʱ�䣩
const short THRESHOLD_WAVE_REGION_SELECT_MOUSE = 1;           //���ѡ���������
const short THRESHOLD_WAVE_REGION_REAL_TIME = 2;              //ʵʱͳ�ƣ�����Ҫѡ���������
/// �����ֵ������������
const short	MAX_MEASURE_THRESHOLD_WAVE_NUMBER = 200;  

typedef	struct	Threshold_Wave_Parameter {			/// ������ݽṹ���ڴ洢��ֵ���β����Ĳ���
	short shChaNo;                                          //  ����ͨ��
	float fSampleRate;                                      //  ��ǰͨ��������
	short shSubMeasureType;                                 //  ��ֵ���������ͣ�0��������:1���½���
	short shAreaSelectType;                                 //  ��������ѡ�����ͣ� 0���ֶ����� 1�����ѡ��
	float fThresholdValue;                                  //  ��ֵ
	long  lStart;                                           //  ������ʼ�ļ����ڵ�
	long  lEnd;                                             //  ���������ļ����ڵ�
	long  lCurStart;                                        //  ���β��������ļ�����λ��
	long  lFileLength;                                      //  �ļ��ܳ��ȵ���
	bool  bMeasureFinished;                                 //  ��������
} THRESHOLD_WAVE_PARAMETER, * PTHRESHOLD_WAVE_PARAMETER;	 

typedef	struct	Save_Result_Measure_Threshold_Wave {							 
	long lTotal_Number;                                     /// ͬһ�����������£���������������                   
	float* pfThroughTime;
	THRESHOLD_WAVE_PARAMETER measureParams;            				        
} SAVE_RESULT_THRESHOLD_WAVE, * PSAVE_RESULT_THRESHOLD_WAVE;

typedef	struct	All_Result_Threshold_Wave {
	BOOL		bDisp_Flag;								    /// ��ʾ��־
	long		lTotal_Num;					     
	SAVE_RESULT_THRESHOLD_WAVE	results[MAX_MEASURE_THRESHOLD_WAVE_NUMBER];
} ALL_RESULT_THRESHOLD_WAVE, * PALL_RESULT_THRESHOLD_WAVE;
