// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#include <hxcpp.h>

#ifndef INCLUDED_stb_format_tools_MathTools
#include <stb/format/tools/MathTools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_179829a20a170e5c_10_ilog,"stb.format.tools.MathTools","ilog",0xe7c78933,"stb.format.tools.MathTools.ilog","stb/format/tools/MathTools.hx",10,0xd34f5229)
static const int _hx_array_data_9c8985f6_1[] = {
	(int)0,(int)1,(int)2,(int)2,(int)3,(int)3,(int)3,(int)3,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,(int)4,
};
namespace stb{
namespace format{
namespace tools{

void MathTools_obj::__construct() { }

Dynamic MathTools_obj::__CreateEmpty() { return new MathTools_obj; }

void *MathTools_obj::_hx_vtable = 0;

Dynamic MathTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MathTools_obj > _hx_result = new MathTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MathTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d97e38c;
}

int MathTools_obj::ilog(int n){
            	HX_STACKFRAME(&_hx_pos_179829a20a170e5c_10_ilog)
            	HX_STACK_ARG(n,"n")
HXLINE(  11)		HX_VARI( ::Array< int >,log2_4) = ::Array_obj< int >::fromData( _hx_array_data_9c8985f6_1,16);
HXLINE(  14)		if ((n < (int)16384)) {
HXLINE(  15)			if ((n < (int)16)) {
HXLINE(  14)				return log2_4->__get(n);
            			}
            			else {
HXLINE(  17)				if ((n < (int)512)) {
HXLINE(  14)					return ((int)5 + log2_4->__get(((int)n >> (int)(int)5)));
            				}
            				else {
HXLINE(  14)					return ((int)10 + log2_4->__get(((int)n >> (int)(int)10)));
            				}
            			}
            		}
            		else {
HXLINE(  22)			if ((n < (int)16777216)) {
HXLINE(  23)				if ((n < (int)524288)) {
HXLINE(  14)					return ((int)15 + log2_4->__get(((int)n >> (int)(int)15)));
            				}
            				else {
HXLINE(  14)					return ((int)20 + log2_4->__get(((int)n >> (int)(int)20)));
            				}
            			}
            			else {
HXLINE(  28)				if ((n < (int)536870912)) {
HXLINE(  14)					return ((int)25 + log2_4->__get(((int)n >> (int)(int)25)));
            				}
            				else {
HXLINE(  30)					if ((n < (int)-2147483648)) {
HXLINE(  14)						return ((int)30 + log2_4->__get(((int)n >> (int)(int)30)));
            					}
            					else {
HXLINE(  14)						return (int)0;
            					}
            				}
            			}
            		}
HXDLIN(  14)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathTools_obj,ilog,return )


MathTools_obj::MathTools_obj()
{
}

bool MathTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ilog") ) { outValue = ilog_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MathTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MathTools_obj_sStaticStorageInfo = 0;
#endif

static void MathTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MathTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathTools_obj::__mClass,"__mClass");
};

#endif

hx::Class MathTools_obj::__mClass;

static ::String MathTools_obj_sStaticFields[] = {
	HX_HCSTRING("ilog","\xbb","\xbb","\xb9","\x45"),
	::String(null())
};

void MathTools_obj::__register()
{
	hx::Object *dummy = new MathTools_obj;
	MathTools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("stb.format.tools.MathTools","\xf6","\x85","\x89","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MathTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MathTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MathTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MathTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MathTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MathTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace stb
} // end namespace format
} // end namespace tools