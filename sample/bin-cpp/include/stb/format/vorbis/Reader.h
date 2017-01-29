// Generated by Haxe 3.4.0 (git build development @ 75c0f05)
#ifndef INCLUDED_stb_format_vorbis_Reader
#define INCLUDED_stb_format_vorbis_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(stb,format,vorbis,Reader)
HX_DECLARE_CLASS3(stb,format,vorbis,VorbisDecoder)
HX_DECLARE_CLASS4(stb,format,vorbis,data,Header)

namespace stb{
namespace format{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x053f20ce };

		void __construct( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="stb.format.vorbis.Reader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"stb.format.vorbis.Reader"); }
		static hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		static hx::ObjectPtr< Reader_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Reader","\x63","\x19","\x26","\x31"); }

		static  ::stb::format::vorbis::Reader openFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic openFromBytes_dyn();

		static void seekBytes( ::haxe::io::BytesInput bytes,int pos);
		static ::Dynamic seekBytes_dyn();

		static  ::stb::format::vorbis::Reader openFromFile(::String fileName);
		static ::Dynamic openFromFile_dyn();

		static  ::stb::format::vorbis::data::Header readAll( ::haxe::io::Input input, ::haxe::io::Output output,hx::Null< bool >  useFloat);
		static ::Dynamic readAll_dyn();

		 ::stb::format::vorbis::VorbisDecoder decoder;
		 ::stb::format::vorbis::data::Header get_header();
		::Dynamic get_header_dyn();

		int get_totalSample();
		::Dynamic get_totalSample_dyn();

		Float get_totalMillisecond();
		::Dynamic get_totalMillisecond_dyn();

		int get_currentSample();
		::Dynamic get_currentSample_dyn();

		int set_currentSample(int value);
		::Dynamic set_currentSample_dyn();

		Float get_currentMillisecond();
		::Dynamic get_currentMillisecond_dyn();

		Float set_currentMillisecond(Float value);
		::Dynamic set_currentMillisecond_dyn();

		 ::Dynamic loopStart;
		 ::Dynamic loopLength;
		 ::Dynamic seekFunc;
		Dynamic seekFunc_dyn() { return seekFunc;}
		int inputLength;
		int read( ::haxe::io::Output output, ::Dynamic samples, ::Dynamic channels, ::Dynamic sampleRate,hx::Null< bool >  useFloat);
		::Dynamic read_dyn();

		 ::stb::format::vorbis::Reader clone();
		::Dynamic clone_dyn();

		Float sampleToMillisecond(int samples);
		::Dynamic sampleToMillisecond_dyn();

		int millisecondToSample(Float millseconds);
		::Dynamic millisecondToSample_dyn();

};

} // end namespace stb
} // end namespace format
} // end namespace vorbis

#endif /* INCLUDED_stb_format_vorbis_Reader */ 