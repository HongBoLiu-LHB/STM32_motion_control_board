#ifndef __HM_SW_VERSION_H
#define __HM_SW_VERSION_H

#define SW_VER_MAJOR    2
#define SW_VER_MINOR    7

/*
1.2 ��������̫����debug֧�֣�����Ҫ��ͨdebug֧�֣�ֻ��Ҫ����hmDebugOpe�����
1.4 �汾���������ж��м����λ��ֹͣ�Ĺ���,˫�ؼ��
1.5 �汾�޸���1.4�е�hm_motor_limit_logical_check����
1.6 �����������λ�жϣ�ֹͣ�����λ�ж�
1.8 main��ʱ��ͼ���Ƿ����������ӣ�û�еĻ���error�ƣ�ֱ������
1.9 print������clock
2.0 ��axis ��AXIS_STATE_E�ж��Ƿ�ֹͣ����Ȼ�Ļ����ܻ���;dma�жϵ�ʱ��timֹͣ�ˣ�����ȷʵ������
2.1 �޸���hm_motor_limit_logical_check
2.2 gpio �����������ʱ���ܣ��ж�
2.3 handler_extern_irq�а�hm_step_motor_state(axis) == rsRUN��Ϊ�� (psrd->axis_state == asRuning),��ֹ�ڿ�ʼrun��ʱ������dma��ʱ������ж�
2.4 ������resetboard
2.5 ����
2.6 ���������߼Ӽ���
2.7 ��ͣ�㷨�Ľ����������㷨�Ľ����޸�bug
*/
#define SW_VERSION      (SW_VER_MAJOR << 8 | SW_VER_MINOR)

#endif
