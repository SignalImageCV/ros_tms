///-----------------------------------------------------------------------------
/// @FileName sp5_cmd_arm.cpp
/// @Date 2013.06.04 / 2013.06.05
/// @author Yoonseok Pyo (passionvirus@gmail.com)
///-----------------------------------------------------------------------------
#include "sp5_client.h"

//------------------------------------------------------------------------------
int8_t Client::armReturnValue(int8_t msg)
{
    switch(msg)
    {
    case(0):	printf("Success\n");                break;
    case(-1):	printf("Failure\n");                break;
    case(-2):	printf("STATUS_ERR\n");             break;
    case(-3):	printf("VALUE_ERR\n");              break;
    case(-4):	printf("NOT_SV_ON_ERR\n");          break;
    case(-5):	printf("FULL_MOTION_QUEUE_ERR\n");  break;
    case(-6):	printf("OVER_MAX_VEL_ERR\n");       break;
    case(-7):	printf("OVER_MAX_ACC_ERR\n");       break;
    case(-8):	printf("LOAD_ESTIMATE_ERR\n");      break;
    case(-9):	printf("FULL_COMMAND_ERR\n");       break;
    case(-100):	printf("OVER_MAX_VEL_WARNING\n");   break;
    case(-101):	printf("OVER_MAX_ACC_WARNING\n");   break;
    default:    break;
    }

    return msg;
}

//------------------------------------------------------------------------------
int8_t Client::armClearAlarm(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->clearAlarms();
        printf("armClearAlarm R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->clearAlarms();
        printf("armClearAlarm L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armClearAlarm RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armSetPower(int8_t RL, double OnOff)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        if(OnOff==ON)
        {
            ret = CommandObj_ArmR->powerOn();
            printf("armSetPower on  R result: "); armReturnValue(ret);

        }
        else
        {
            ret = CommandObj_ArmR->powerOff();
            printf("armSetPower off R result: "); armReturnValue(ret);
        }
    }
    else if(RL==ArmL)
    {
        if(OnOff==ON)
        {
            ret = CommandObj_ArmL->powerOn();
            printf("armSetPower on  L result: "); armReturnValue(ret);

        }
        else
        {
            ret = CommandObj_ArmL->powerOff();
            printf("armSetPower off L result: "); armReturnValue(ret);
        }
    }
    else
    {
        printf("armSetPower RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armSetServo(int8_t RL, double OnOff)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        if(OnOff==ON)
        {
            ret = CommandObj_ArmR->servoOn();
            printf("armSetServo on  R result: "); armReturnValue(ret);

        }
        else
        {
            ret = CommandObj_ArmR->servoOff();
            printf("armSetServo off R result: "); armReturnValue(ret);
        }
    }
    else if(RL==ArmL)
    {
        if(OnOff==ON)
        {
            ret = CommandObj_ArmL->servoOn();
            printf("armSetServo on  L result: "); armReturnValue(ret);

        }
        else
        {
            ret = CommandObj_ArmL->servoOff();
            printf("armSetServo off L result: "); armReturnValue(ret);
        }
    }
    else
    {
        printf("armSetServo RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armPause(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->pause();
        printf("armPause R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->pause();
        printf("armPause L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armPause RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armResume(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->resume();
        printf("armResume R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->resume();
        printf("armResume L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armResume RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armAbort(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->abort();
        printf("armAbort R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->abort();
        printf("armAbort L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armAbort RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armStop(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->stop();
        printf("armStop R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->stop();
        printf("armStop L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armStop RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armGetState(int8_t RL)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    CORBA::ULong        state;
    CORBA::String_var   message;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->getState(state, message);
        printf("armGetState R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->getState(state, message);
        printf("armGetState L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armGetState RL error\n");
        return RL_ERR;
    }

    switch (state) {
    case 0x010: printf("State: Unpowered\n");       break;
    case 0x011: printf("State: Powered\n");         break;
    case 0x012: printf("State: Ready\n");           break;
    case 0x013: printf("State: Busy\n");            break;
    case 0x014: printf("State: Paused\n");          break;
    case 0x015: printf("State: Alarm\n");           break;
    case 0x016: printf("State: jogBusy\n");         break;
    case 0x017: printf("State: DirectBusy\n");      break;
    default:    printf("State: UnkownMessage\n");   break;
    }

    return (int8_t)state;
}

//------------------------------------------------------------------------------
int8_t Client::armGetPos(int8_t RL, double frameID, double *posdata)
{
    FrameID         fID;
    DoubleSeq_var   pos;
    int8_t          ret;

    if(!bInitialize) return CORBA_ERR;

    if(frameID == 0) fID = JOINT;
    else             fID = CARTESIAN;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->getFeedbackPos(fID, pos);
        //printf("armGetPose R result: "); armReturnValue(ret);
        //printf("armGetPose R: %0.1f %0.1f %0.1f %0.1f %0.1f %0.1f %0.1f\n",(double)pos[0],(double)pos[1],(double)pos[2],(double)pos[3],(double)pos[4],(double)pos[5],(double)pos[6]);
        for(int i=0; i<7; i++) posdata[i]=(double)pos[i];
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->getFeedbackPos(fID, pos);
        //printf("armGetPose L result: "); armReturnValue(ret);
        //printf("armGetPose L: %0.1f %0.1f %0.1f %0.1f %0.1f %0.1f %0.1f\n",(double)pos[0],(double)pos[1],(double)pos[2],(double)pos[3],(double)pos[4],(double)pos[5],(double)pos[6]);
        for(int i=0; i<7; i++) posdata[i]=(double)pos[i];
    }
    else
    {
        printf("armGetPose RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armSetJointAcc(int8_t RL, double acc_ms)
{
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->setJointAcceleration((CORBA::ULong)acc_ms);
        printf("armSetJointAcc R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->setJointAcceleration((CORBA::ULong)acc_ms);
        printf("armSetJointAcc L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armSetJointAcc RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armSetLinearAcc(int8_t RL, double accT_ms, double accR_ms)
{
    Acceleration acc;
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    acc.translation = accT_ms;
    acc.rotation    = accR_ms;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->setLinearAcceleration(acc);
        printf("armSetLinearAcc R result: "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->setLinearAcceleration(acc);
        printf("armSetLinearAcc L result: "); armReturnValue(ret);
    }
    else
    {
        printf("armSetLinearAcc RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armMoveJointAbs(int8_t RL, double *joint_deg, double vel_degps)
{
    DoubleSeq 	jointPos;	// Joint Position (deg)
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    jointPos.length(7);

    // J1   -45   ~ +180   : init  0
    // J2  -109.5 ~  +14.5 : init -10
    // J3  -120   ~ +120   : init  0
    // J4    -1.5 ~ +129.5 : init  0
    // J5  -120   ~ +120   : init  0
    // J6   -15.5 ~  +44   : init  0
    // J7   -89.5 ~  +59   : init  0

    for(int i=0; i<7; i++) jointPos[i] = (CORBA::Double)joint_deg[i];

    corbaD1  = (CORBA::Double)vel_degps;	// Velocity	(deg/s): init=10

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->moveJointAbs(jointPos, corbaD1);
        printf("armMoveJointAbs R ( ");
        for(int i=0; i<7; i++)	printf("%0.1f ",(double)jointPos[i]);
        printf("): ");
        armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->moveJointAbs(jointPos, corbaD1);
        printf("armMoveJointAbs L ( ");
        for(int i=0; i<7; i++)	printf("%0.1f ",(double)jointPos[i]);
        printf("): ");
        armReturnValue(ret);
    }
    else
    {
        printf("armMoveJointAbs RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armMoveJointRel(int8_t RL, double *joint_deg, double vel_degps)
{
    DoubleSeq 	jointPos;	// Joint Position (deg)
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    jointPos.length(7);

    for(int i=0; i<7; i++) jointPos[i] = (CORBA::Double)joint_deg[i];

    corbaD1  = (CORBA::Double)vel_degps;	// Velocity	(deg/s): init=10

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->moveJointRel(jointPos, corbaD1);
        printf("armMoveJointRel R ( ");
        for(int i=0; i<7; i++)	printf("%0.1f ",(double)jointPos[i]);
        printf("): ");
        armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->moveJointRel(jointPos, corbaD1);
        printf("armMoveJointRel L ( ");
        for(int i=0; i<7; i++)	printf("%0.1f ",(double)jointPos[i]);
        printf("): ");
        armReturnValue(ret);
    }
    else
    {
        printf("armMoveJointRel RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armMoveLinearAbs(int8_t RL, double cpType, double *cartesianPos, double elbow_deg, double vt_mmps, double vr_degps)
{
    CommandFrameType cfType;
    CartesianPos     cPos;
    Velocity         v;
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(cpType == 0) cfType = ORIGINAL;
    else            cfType = TOOL;

    cPos.px = cartesianPos[0];
    cPos.py = cartesianPos[1];
    cPos.pz = cartesianPos[2];
    cPos.rx = cartesianPos[3];
    cPos.ry = cartesianPos[4];
    cPos.rz = cartesianPos[5];

    v.translation = vt_mmps;
    v.rotation    = vr_degps;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->moveLinearAbs(cfType, cPos, elbow_deg, v);
        printf("armMoveLinearAbs R : "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->moveLinearAbs(cfType, cPos, elbow_deg, v);
        printf("armMoveLinearAbs L : "); armReturnValue(ret);
    }
    else
    {
        printf("armMoveLinearAbs RL error\n");
        return RL_ERR;
    }

    return ret;
}

//------------------------------------------------------------------------------
int8_t Client::armMoveLinearRel(int8_t RL, double cpType, double *cartesianPos, double elbow_deg, double vt_mmps, double vr_degps)
{
    CommandFrameType cfType;
    CartesianPos     cPos;
    Velocity         v;
    int8_t ret;

    if(!bInitialize) return CORBA_ERR;

    if(cpType == 0) cfType = ORIGINAL;
    else            cfType = TOOL;

    cPos.px = cartesianPos[0];
    cPos.py = cartesianPos[1];
    cPos.pz = cartesianPos[2];
    cPos.rx = cartesianPos[3];
    cPos.ry = cartesianPos[4];
    cPos.rz = cartesianPos[5];

    v.translation = vt_mmps;
    v.rotation    = vr_degps;

    if(RL==ArmR)
    {
        ret = CommandObj_ArmR->moveLinearRel(cfType, cPos, elbow_deg, v);
        printf("armMoveLinearRel R : "); armReturnValue(ret);
    }
    else if(RL==ArmL)
    {
        ret = CommandObj_ArmL->moveLinearRel(cfType, cPos, elbow_deg, v);
        printf("armMoveLinearRel L : "); armReturnValue(ret);
    }
    else
    {
        printf("armMoveLinearRel RL error\n");
        return RL_ERR;
    }

    return ret;
}
//------------------------------------------------------------------------------