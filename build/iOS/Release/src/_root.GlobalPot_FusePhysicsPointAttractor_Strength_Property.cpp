// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_FusePhysicsPointAttractor_Strength_Property.h>
#include <Fuse.Physics.PointAttractor.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class GlobalPot_FusePhysicsPointAttractor_Strength_Property :109
// {
static void GlobalPot_FusePhysicsPointAttractor_Strength_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Physics::PointAttractor_typeof(), offsetof(::g::GlobalPot_FusePhysicsPointAttractor_Strength_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* GlobalPot_FusePhysicsPointAttractor_Strength_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GlobalPot_FusePhysicsPointAttractor_Strength_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("GlobalPot_FusePhysicsPointAttractor_Strength_Property", options);
    type->fp_build_ = GlobalPot_FusePhysicsPointAttractor_Strength_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))GlobalPot_FusePhysicsPointAttractor_Strength_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))GlobalPot_FusePhysicsPointAttractor_Strength_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))GlobalPot_FusePhysicsPointAttractor_Strength_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))GlobalPot_FusePhysicsPointAttractor_Strength_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public GlobalPot_FusePhysicsPointAttractor_Strength_Property(Fuse.Physics.PointAttractor obj, Uno.UX.Selector name) :112
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__ctor_2_fn(GlobalPot_FusePhysicsPointAttractor_Strength_Property* __this, ::g::Fuse::Physics::PointAttractor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :114
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__Get_fn(GlobalPot_FusePhysicsPointAttractor_Strength_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Strength(), void();
}

// public GlobalPot_FusePhysicsPointAttractor_Strength_Property New(Fuse.Physics.PointAttractor obj, Uno.UX.Selector name) :112
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__New1_fn(::g::Fuse::Physics::PointAttractor* obj, ::g::Uno::UX::Selector* name, GlobalPot_FusePhysicsPointAttractor_Strength_Property** __retval)
{
    *__retval = GlobalPot_FusePhysicsPointAttractor_Strength_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :113
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__get_Object_fn(GlobalPot_FusePhysicsPointAttractor_Strength_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :115
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__Set_fn(GlobalPot_FusePhysicsPointAttractor_Strength_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Strength(v_);
}

// public override sealed bool get_SupportsOriginSetter() :116
void GlobalPot_FusePhysicsPointAttractor_Strength_Property__get_SupportsOriginSetter_fn(GlobalPot_FusePhysicsPointAttractor_Strength_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public GlobalPot_FusePhysicsPointAttractor_Strength_Property(Fuse.Physics.PointAttractor obj, Uno.UX.Selector name) [instance] :112
void GlobalPot_FusePhysicsPointAttractor_Strength_Property::ctor_2(::g::Fuse::Physics::PointAttractor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public GlobalPot_FusePhysicsPointAttractor_Strength_Property New(Fuse.Physics.PointAttractor obj, Uno.UX.Selector name) [static] :112
GlobalPot_FusePhysicsPointAttractor_Strength_Property* GlobalPot_FusePhysicsPointAttractor_Strength_Property::New1(::g::Fuse::Physics::PointAttractor* obj, ::g::Uno::UX::Selector name)
{
    GlobalPot_FusePhysicsPointAttractor_Strength_Property* obj1 = (GlobalPot_FusePhysicsPointAttractor_Strength_Property*)uNew(GlobalPot_FusePhysicsPointAttractor_Strength_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
