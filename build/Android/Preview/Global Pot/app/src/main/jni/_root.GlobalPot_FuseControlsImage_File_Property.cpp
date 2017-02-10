// This file was generated based on 'F:\Global Pot_App\build\Android\Preview\cache\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseControlsImage_File_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class GlobalPot_FuseControlsImage_File_Property :37
// {
static void GlobalPot_FuseControlsImage_File_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::GlobalPot_FuseControlsImage_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* GlobalPot_FuseControlsImage_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GlobalPot_FuseControlsImage_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("GlobalPot_FuseControlsImage_File_Property", options);
    type->fp_build_ = GlobalPot_FuseControlsImage_File_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))GlobalPot_FuseControlsImage_File_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))GlobalPot_FuseControlsImage_File_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))GlobalPot_FuseControlsImage_File_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))GlobalPot_FuseControlsImage_File_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public GlobalPot_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :40
void GlobalPot_FuseControlsImage_File_Property__ctor_2_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.FileSource Get() :42
void GlobalPot_FuseControlsImage_File_Property__Get_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::FileSource** __retval)
{
    uStackFrame __("GlobalPot_FuseControlsImage_File_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->File(), void();
}

// public GlobalPot_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :40
void GlobalPot_FuseControlsImage_File_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseControlsImage_File_Property** __retval)
{
    *__retval = GlobalPot_FuseControlsImage_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void GlobalPot_FuseControlsImage_File_Property__get_Object_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :43
void GlobalPot_FuseControlsImage_File_Property__Set_fn(GlobalPot_FuseControlsImage_File_Property* __this, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uStackFrame __("GlobalPot_FuseControlsImage_File_Property", "Set(Uno.UX.FileSource,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->File(v);
}

// public override sealed bool get_SupportsOriginSetter() :44
void GlobalPot_FuseControlsImage_File_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseControlsImage_File_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public GlobalPot_FuseControlsImage_File_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :40
void GlobalPot_FuseControlsImage_File_Property::ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public GlobalPot_FuseControlsImage_File_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :40
GlobalPot_FuseControlsImage_File_Property* GlobalPot_FuseControlsImage_File_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    GlobalPot_FuseControlsImage_File_Property* obj1 = (GlobalPot_FuseControlsImage_File_Property*)uNew(GlobalPot_FuseControlsImage_File_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
