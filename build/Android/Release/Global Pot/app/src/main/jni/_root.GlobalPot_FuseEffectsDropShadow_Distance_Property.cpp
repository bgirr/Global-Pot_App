// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FuseEffectsDropShadow_Distance_Property.h>
#include <Fuse.Effects.DropShadow.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class GlobalPot_FuseEffectsDropShadow_Distance_Property :82
// {
static void GlobalPot_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::GlobalPot_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* GlobalPot_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GlobalPot_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("GlobalPot_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = GlobalPot_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))GlobalPot_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))GlobalPot_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))GlobalPot_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))GlobalPot_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public GlobalPot_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :85
void GlobalPot_FuseEffectsDropShadow_Distance_Property__ctor_2_fn(GlobalPot_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :87
void GlobalPot_FuseEffectsDropShadow_Distance_Property__Get_fn(GlobalPot_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public GlobalPot_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :85
void GlobalPot_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, GlobalPot_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = GlobalPot_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :86
void GlobalPot_FuseEffectsDropShadow_Distance_Property__get_Object_fn(GlobalPot_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :88
void GlobalPot_FuseEffectsDropShadow_Distance_Property__Set_fn(GlobalPot_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :89
void GlobalPot_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(GlobalPot_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public GlobalPot_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :85
void GlobalPot_FuseEffectsDropShadow_Distance_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public GlobalPot_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :85
GlobalPot_FuseEffectsDropShadow_Distance_Property* GlobalPot_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    GlobalPot_FuseEffectsDropShadow_Distance_Property* obj1 = (GlobalPot_FuseEffectsDropShadow_Distance_Property*)uNew(GlobalPot_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
