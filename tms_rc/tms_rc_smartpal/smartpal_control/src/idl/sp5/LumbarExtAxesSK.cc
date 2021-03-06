// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "LumbarExtAxes.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



LumbaExtAxes_ptr LumbaExtAxes_Helper::_nil() {
  return ::LumbaExtAxes::_nil();
}

::CORBA::Boolean LumbaExtAxes_Helper::is_nil(::LumbaExtAxes_ptr p) {
  return ::CORBA::is_nil(p);

}

void LumbaExtAxes_Helper::release(::LumbaExtAxes_ptr p) {
  ::CORBA::release(p);
}

void LumbaExtAxes_Helper::marshalObjRef(::LumbaExtAxes_ptr obj, cdrStream& s) {
  ::LumbaExtAxes::_marshalObjRef(obj, s);
}

LumbaExtAxes_ptr LumbaExtAxes_Helper::unmarshalObjRef(cdrStream& s) {
  return ::LumbaExtAxes::_unmarshalObjRef(s);
}

void LumbaExtAxes_Helper::duplicate(::LumbaExtAxes_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

LumbaExtAxes_ptr
LumbaExtAxes::_duplicate(::LumbaExtAxes_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

LumbaExtAxes_ptr
LumbaExtAxes::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


LumbaExtAxes_ptr
LumbaExtAxes::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

LumbaExtAxes_ptr
LumbaExtAxes::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_LumbaExtAxes _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_LumbaExtAxes* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_LumbaExtAxes;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* LumbaExtAxes::_PD_repoId = "IDL:LumbaExtAxes:1.0";


_objref_LumbaExtAxes::~_objref_LumbaExtAxes() {
  
}


_objref_LumbaExtAxes::_objref_LumbaExtAxes(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::LumbaExtAxes::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
_objref_LumbaExtAxes::_ptrToObjRef(const char* id)
{
  if( id == ::LumbaExtAxes::_PD_repoId )
    return (::LumbaExtAxes_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::LumbaExtAxes::_PD_repoId) )
    return (::LumbaExtAxes_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cboolean
class _0RL_cd_c984abeac2077a8d_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Boolean result;
};

void _0RL_cd_c984abeac2077a8d_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_c984abeac2077a8d_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_c984abeac2077a8d_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->powerOn();


}

::CORBA::Boolean _objref_LumbaExtAxes::powerOn()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_10000000, "powerOn", 8);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_20000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->powerOff();


}

::CORBA::Boolean _objref_LumbaExtAxes::powerOff()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_20000000, "powerOff", 9);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->servoOn();


}

::CORBA::Boolean _objref_LumbaExtAxes::servoOn()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_30000000, "servoOn", 8);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_40000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->servoOff();


}

::CORBA::Boolean _objref_LumbaExtAxes::servoOff()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_40000000, "servoOff", 9);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->isPowerOn();


}

::CORBA::Boolean _objref_LumbaExtAxes::isPowerOn()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_50000000, "isPowerOn", 10);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_60000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->isServoOn();


}

::CORBA::Boolean _objref_LumbaExtAxes::isServoOn()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_60000000, "isServoOn", 10);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_o_cunsigned_plong_o_cstring
class _0RL_cd_c984abeac2077a8d_70000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_70000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::ULong arg_0;
  ::CORBA::String_var arg_1;
  ::CORBA::Boolean result;
};

void _0RL_cd_c984abeac2077a8d_70000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  arg_0 >>= _n;
  _n.marshalString(arg_1,0);

}

void _0RL_cd_c984abeac2077a8d_70000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  (::CORBA::ULong&)arg_0 <<= _n;
  arg_1 = _n.unmarshalString(0);

}

const char* const _0RL_cd_c984abeac2077a8d_70000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_80000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_70000000* tcd = (_0RL_cd_c984abeac2077a8d_70000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->getState(tcd->arg_0, tcd->arg_1.out());


}

::CORBA::Boolean _objref_LumbaExtAxes::getState(::CORBA::ULong& statusId, ::CORBA::String_out message)
{
  _0RL_cd_c984abeac2077a8d_70000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_80000000, "getState", 9);


  _invoke(_call_desc);
  statusId = _call_desc.arg_0;
  message = _call_desc.arg_1._retn();
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_90000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->pause();


}

::CORBA::Boolean _objref_LumbaExtAxes::pause()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_90000000, "pause", 6);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_a0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->resume();


}

::CORBA::Boolean _objref_LumbaExtAxes::resume()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_a0000000, "resume", 7);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_b0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->stop();


}

::CORBA::Boolean _objref_LumbaExtAxes::stop()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_b0000000, "stop", 5);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_c0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->abort();


}

::CORBA::Boolean _objref_LumbaExtAxes::abort()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_c0000000, "abort", 6);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_d0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->isMoving();


}

::CORBA::Boolean _objref_LumbaExtAxes::isMoving()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_d0000000, "isMoving", 9);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_e0000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_00000000* tcd = (_0RL_cd_c984abeac2077a8d_00000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->clearAlarms();


}

::CORBA::Boolean _objref_LumbaExtAxes::clearAlarms()
{
  _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_e0000000, "clearAlarms", 12);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cunsigned_plong_o_cunsigned_plong_o_cAlarmSeq
class _0RL_cd_c984abeac2077a8d_f0000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_f0000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::ULong arg_0;
  ::CORBA::ULong arg_1;
  AlarmSeq_var arg_2;
  ::CORBA::Boolean result;
};

void _0RL_cd_c984abeac2077a8d_f0000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;

}

void _0RL_cd_c984abeac2077a8d_f0000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::ULong&)arg_0 <<= _n;

}

void _0RL_cd_c984abeac2077a8d_f0000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  arg_1 >>= _n;
  (const AlarmSeq&) arg_2 >>= _n;

}

void _0RL_cd_c984abeac2077a8d_f0000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  (::CORBA::ULong&)arg_1 <<= _n;
  arg_2 = new AlarmSeq;
  (AlarmSeq&)arg_2 <<= _n;

}

const char* const _0RL_cd_c984abeac2077a8d_f0000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_01000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_f0000000* tcd = (_0RL_cd_c984abeac2077a8d_f0000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->getActiveAlarm(tcd->arg_0, tcd->arg_1, tcd->arg_2.out());


}

::CORBA::Boolean _objref_LumbaExtAxes::getActiveAlarm(::CORBA::ULong maximumNumber, ::CORBA::ULong& numberOfAlarm, ::AlarmSeq_out alarmArray)
{
  _0RL_cd_c984abeac2077a8d_f0000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_01000000, "getActiveAlarm", 15);
  _call_desc.arg_0 = maximumNumber;

  _invoke(_call_desc);
  numberOfAlarm = _call_desc.arg_1;
  alarmArray = _call_desc.arg_2._retn();
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cunsigned_plong
class _0RL_cd_c984abeac2077a8d_11000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_11000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::ULong result;
};

void _0RL_cd_c984abeac2077a8d_11000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_c984abeac2077a8d_11000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::ULong&)result <<= _n;

}

const char* const _0RL_cd_c984abeac2077a8d_11000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_21000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_11000000* tcd = (_0RL_cd_c984abeac2077a8d_11000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->getNumberOfAxes();


}

::CORBA::ULong _objref_LumbaExtAxes::getNumberOfAxes()
{
  _0RL_cd_c984abeac2077a8d_11000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_21000000, "getNumberOfAxes", 16);


  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_o_cunsigned_plong_o_cLimitSeq
class _0RL_cd_c984abeac2077a8d_31000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_31000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::ULong arg_0;
  LimitSeq_var arg_1;
  ::CORBA::Boolean result;
};

void _0RL_cd_c984abeac2077a8d_31000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  arg_0 >>= _n;
  (const LimitSeq&) arg_1 >>= _n;

}

void _0RL_cd_c984abeac2077a8d_31000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  (::CORBA::ULong&)arg_0 <<= _n;
  arg_1 = new LimitSeq;
  (LimitSeq&)arg_1 <<= _n;

}

const char* const _0RL_cd_c984abeac2077a8d_31000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_41000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_31000000* tcd = (_0RL_cd_c984abeac2077a8d_31000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->getSoftLimit(tcd->arg_0, tcd->arg_1.out());


}

::CORBA::Boolean _objref_LumbaExtAxes::getSoftLimit(::CORBA::ULong& numberOfData, ::LimitSeq_out limitArray)
{
  _0RL_cd_c984abeac2077a8d_31000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_41000000, "getSoftLimit", 13);


  _invoke(_call_desc);
  numberOfData = _call_desc.arg_0;
  limitArray = _call_desc.arg_1._retn();
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_o_cstring
class _0RL_cd_c984abeac2077a8d_51000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_c984abeac2077a8d_51000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  
  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0;
  ::CORBA::Boolean result;
};

void _0RL_cd_c984abeac2077a8d_51000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  _n.marshalString(arg_0,0);

}

void _0RL_cd_c984abeac2077a8d_51000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  arg_0 = _n.unmarshalString(0);

}

const char* const _0RL_cd_c984abeac2077a8d_51000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_c984abeac2077a8d_61000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_c984abeac2077a8d_51000000* tcd = (_0RL_cd_c984abeac2077a8d_51000000*)cd;
  _impl_LumbaExtAxes* impl = (_impl_LumbaExtAxes*) svnt->_ptrToInterface(LumbaExtAxes::_PD_repoId);
  tcd->result = impl->getVersion(tcd->arg_0.out());


}

::CORBA::Boolean _objref_LumbaExtAxes::getVersion(::CORBA::String_out versionMessage)
{
  _0RL_cd_c984abeac2077a8d_51000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_61000000, "getVersion", 11);


  _invoke(_call_desc);
  versionMessage = _call_desc.arg_0._retn();
  return _call_desc.result;


}
_pof_LumbaExtAxes::~_pof_LumbaExtAxes() {}


omniObjRef*
_pof_LumbaExtAxes::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::_objref_LumbaExtAxes(ior, id);
}


::CORBA::Boolean
_pof_LumbaExtAxes::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::LumbaExtAxes::_PD_repoId) )
    return 1;
  
  return 0;
}

const _pof_LumbaExtAxes _the_pof_LumbaExtAxes;

_impl_LumbaExtAxes::~_impl_LumbaExtAxes() {}


::CORBA::Boolean
_impl_LumbaExtAxes::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "powerOn") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_10000000, "powerOn", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "powerOff") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_20000000, "powerOff", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "servoOn") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_30000000, "servoOn", 8, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "servoOff") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_40000000, "servoOff", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "isPowerOn") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_50000000, "isPowerOn", 10, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "isServoOn") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_60000000, "isServoOn", 10, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getState") ) {

    _0RL_cd_c984abeac2077a8d_70000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_80000000, "getState", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "pause") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_90000000, "pause", 6, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "resume") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_a0000000, "resume", 7, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "stop") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_b0000000, "stop", 5, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "abort") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_c0000000, "abort", 6, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "isMoving") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_d0000000, "isMoving", 9, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "clearAlarms") ) {

    _0RL_cd_c984abeac2077a8d_00000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_e0000000, "clearAlarms", 12, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getActiveAlarm") ) {

    _0RL_cd_c984abeac2077a8d_f0000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_01000000, "getActiveAlarm", 15, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getNumberOfAxes") ) {

    _0RL_cd_c984abeac2077a8d_11000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_21000000, "getNumberOfAxes", 16, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getSoftLimit") ) {

    _0RL_cd_c984abeac2077a8d_31000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_41000000, "getSoftLimit", 13, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getVersion") ) {

    _0RL_cd_c984abeac2077a8d_51000000 _call_desc(_0RL_lcfn_c984abeac2077a8d_61000000, "getVersion", 11, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
_impl_LumbaExtAxes::_ptrToInterface(const char* id)
{
  if( id == ::LumbaExtAxes::_PD_repoId )
    return (::_impl_LumbaExtAxes*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::LumbaExtAxes::_PD_repoId) )
    return (::_impl_LumbaExtAxes*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
_impl_LumbaExtAxes::_mostDerivedRepoId()
{
  return ::LumbaExtAxes::_PD_repoId;
}

POA_LumbaExtAxes::~POA_LumbaExtAxes() {}

