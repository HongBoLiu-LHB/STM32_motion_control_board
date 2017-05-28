#ifndef __HM_STRUCT_PUBLIC_H
#define __HM_STRUCT_PUBLIC_H

/*�Ƿ�ֹͣ״̬���Ƿ���������λ�������Ƿ�ʹ��*/
enum hmAxisStatus_e
{
    hmsStoped   = 0x01,
    hmsHitCW    = 0x02,
    hmsHitCCW   = 0x04,
    hmsHitHome  = 0x08,
    hmsEnabled  = 0x10,
};

/*������λֹͣģʽ��ͣ���ǻ�ͣ*/

enum hmStopMode_e
{
    hmtSmonthStop,
    hmtSuddentStop,
};
enum hmCmdGetAxisSetting_e
{
    hmsHomeTriger   = 0x01,
    hmsStopModeCW   = 0x02,
    hmsStopModeCCW  = 0x04,
    hmsStopModeHome = 0x08,
    hmsCurve        = 0x10,
};

/*ԭ�㴥����ʽ���½��ش������ǵ͵�ƽ����*/
enum hmHomeTriggerMode_e
{
    hmtFallTrigger,
    hmtLowTrigger
};

/**/
enum hmCurveMode_e
{
    hmtSmode,
    hmtTMode
};

/*������״̬*/
typedef struct hmCmdGetAxisStatus_s
{
    uint32_t axis;                  //����
    int32_t  pos;                   //��λ��
    uint32_t axis_status;           //hmAxisStatus_e ��|
    uint32_t speed;                 //��ǰ�ٶ�
}hmCmdGetAxisStatuse_t;


/*��û������õ�ǰ������*/
typedef struct hmCmdGetAxisSetting_s
{
    uint32_t  axis;                 //����
    uint32_t  bHomeTriger;          /*ԭ�㴥����ʽ���½��ش������ǵ͵�ƽ����*/
    uint32_t  bStopModeCW;          /*������λֹͣģʽ��ͣ���ǻ�ͣ*/
    uint32_t  bStopModeCCW;
    uint32_t  bStopModeHome;   
    uint8_t   flag;
    uint8_t   bget;                 //get or set
    uint8_t   Tcurve;
}hmCmdGetAxisSetting_t;

#endif
