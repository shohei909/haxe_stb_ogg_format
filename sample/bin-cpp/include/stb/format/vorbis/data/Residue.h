// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#ifndef INCLUDED_stb_format_vorbis_data_Residue
#define INCLUDED_stb_format_vorbis_data_Residue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(stb,format,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS4(stb,format,vorbis,data,Codebook)
HX_DECLARE_CLASS4(stb,format,vorbis,data,Header)
HX_DECLARE_CLASS4(stb,format,vorbis,data,Residue)

namespace stb{
namespace format{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Residue_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Residue_obj OBJ_;
		Residue_obj();

	public:
		enum { _hx_ClassId = 0x74c8a5f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="stb.format.vorbis.data.Residue")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"stb.format.vorbis.data.Residue"); }
		static hx::ObjectPtr< Residue_obj > __new();
		static hx::ObjectPtr< Residue_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Residue_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Residue","\x2b","\xe0","\xb3","\x30"); }

		static  ::stb::format::vorbis::data::Residue read( ::stb::format::vorbis::VorbisDecodeState decodeState,::Array< ::Dynamic> codebooks);
		static ::Dynamic read_dyn();

		int begin;
		int end;
		int partSize;
		int classifications;
		int classbook;
		::Array< ::Dynamic> classdata;
		::Array< ::Dynamic> residueBooks;
		int type;
		void decode( ::stb::format::vorbis::VorbisDecodeState decodeState, ::stb::format::vorbis::data::Header header,::Array< ::Dynamic> residueBuffers,int ch,int n,::Array< bool > doNotDecode,::Array< ::Dynamic> channelBuffers);
		::Dynamic decode_dyn();

};

} // end namespace stb
} // end namespace format
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_stb_format_vorbis_data_Residue */ 