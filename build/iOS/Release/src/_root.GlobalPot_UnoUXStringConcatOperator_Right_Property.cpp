// This file was generated based on 'F:\Global Pot_App\.uno\ux11\Global Pot.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.GlobalPot_UnoUXStringConcatOperator_Right_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.StringConcatOperator.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class GlobalPot_UnoUXStringConcatOperator_Right_Property :19
// {
static void GlobalPot_UnoUXStringConcatOperator_Right_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Uno::UX::StringConcatOperator_typeof(), offsetof(::g::GlobalPot_UnoUXStringConcatOperator_Right_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* GlobalPot_UnoUXStringConcatOperator_Right_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(GlobalPot_UnoUXStringConcatOperator_Right_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("GlobalPot_UnoUXStringConcatOperator_Right_Property", options);
    type->fp_build_ = GlobalPot_UnoUXStringConcatOperator_Right_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))GlobalPot_UnoUXStringConcatOperator_Right_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))GlobalPot_UnoUXStringConcatOperator_Right_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))GlobalPot_UnoUXStringConcatOperator_Right_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))GlobalPot_UnoUXStringConcatOperator_Right_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public GlobalPot_UnoUXStringConcatOperator_Right_Property(Uno.UX.StringConcatOperator obj, Uno.UX.Selector name) :22
void GlobalPot_UnoUXStringConcatOperator_Right_Property__ctor_2_fn(GlobalPot_UnoUXStringConcatOperator_Right_Property* __this, ::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :24
void GlobalPot_UnoUXStringConcatOperator_Right_Property__Get_fn(GlobalPot_UnoUXStringConcatOperator_Right_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Right(), void();
}

// public GlobalPot_UnoUXStringConcatOperator_Right_Property New(Uno.UX.StringConcatOperator obj, Uno.UX.Selector name) :22
void GlobalPot_UnoUXStringConcatOperator_Right_Property__New1_fn(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector* name, GlobalPot_UnoUXStringConcatOperator_Right_Property** __retval)
{
    *__retval = GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void GlobalPot_UnoUXStringConcatOperator_Right_Property__get_Object_fn(GlobalPot_UnoUXStringConcatOperator_Right_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :25
void GlobalPot_UnoUXStringConcatOperator_Right_Property__Set_fn(GlobalPot_UnoUXStringConcatOperator_Right_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->Right(v);
}

// public override sealed bool get_SupportsOriginSetter() :26
void GlobalPot_UnoUXStringConcatOperator_Right_Property__get_SupportsOriginSetter_fn(GlobalPot_UnoUXStringConcatOperator_Right_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public GlobalPot_UnoUXStringConcatOperator_Right_Property(Uno.UX.StringConcatOperator obj, Uno.UX.Selector name) [instance] :22
void GlobalPot_UnoUXStringConcatOperator_Right_Property::ctor_2(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public GlobalPot_UnoUXStringConcatOperator_Right_Property New(Uno.UX.StringConcatOperator obj, Uno.UX.Selector name) [static] :22
GlobalPot_UnoUXStringConcatOperator_Right_Property* GlobalPot_UnoUXStringConcatOperator_Right_Property::New1(::g::Uno::UX::StringConcatOperator* obj, ::g::Uno::UX::Selector name)
{
    GlobalPot_UnoUXStringConcatOperator_Right_Property* obj1 = (GlobalPot_UnoUXStringConcatOperator_Right_Property*)uNew(GlobalPot_UnoUXStringConcatOperator_Right_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
