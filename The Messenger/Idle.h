#pragma once
#include "STATE.h"
class Messenger;
class Idle :
    public STATE
{
private:
    int count;
public:
    void EnterState();
    void updateState();
    void ExitState();
};

//�� ���¿��� �ϴ� STATE ������޴°� �翬�ѵ�
//�÷��̾� Ŭ������ ��ȣ���������� ��ư ������ ���漱�����������