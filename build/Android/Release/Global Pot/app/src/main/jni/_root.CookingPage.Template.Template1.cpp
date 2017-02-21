// This file was generated based on 'F:\Global Pot_App\.uno\ux11\CookingPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CookingPage.Template.h>
#include <_root.CookingPage.Template.Template1.h>
#include <_root.CookingPage.Template.Template1.Template2.h>
#include <_root.GlobalPot_FuseReactiveEach_Items_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[3];

namespace g{

// public partial sealed class CookingPage.Template.Template1 :16
// {
// static Template1() :92
static void CookingPage__Template__Template1__cctor__fn(uType* __type)
{
    CookingPage__Template__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Items"*/]);
}

static void CookingPage__Template__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Items");
    ::STRINGS[1] = uString::Const("ingredients");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::CookingPage__Template_typeof(), offsetof(::g::CookingPage__Template__Template1, __parent1), uFieldFlagsWeak,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::CookingPage__Template__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::CookingPage__Template__Template1, self_Items_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CookingPage__Template__Template1::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* CookingPage__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CookingPage__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CookingPage.Template.Template1", options);
    type->fp_build_ = CookingPage__Template__Template1_build;
    type->fp_cctor_ = CookingPage__Template__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CookingPage__Template__Template1__New1_fn;
    return type;
}

// public Template1(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :20
void CookingPage__Template__Template1__ctor_1_fn(CookingPage__Template__Template1* __this, ::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :95
void CookingPage__Template__Template1__New1_fn(CookingPage__Template__Template1* __this, uObject** __retval)
{
    ::g::Fuse::Reactive::Each* self = ::g::Fuse::Reactive::Each::New4();
    __this->self_Items_inst = ::g::GlobalPot_FuseReactiveEach_Items_Property::New1(self, CookingPage__Template__Template1::__selector0());
    CookingPage__Template__Template1__Template2* temp = CookingPage__Template__Template1__Template2::New2(__this, self);
    ::g::Fuse::Reactive::DataBinding* temp1 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<object>*/], __this->self_Items_inst, ::STRINGS[1/*"ingredients"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Templates()), ::TYPES[1/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp1);
    return *__retval = self, void();
}

// public Template1 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) :20
void CookingPage__Template__Template1__New2_fn(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance, CookingPage__Template__Template1** __retval)
{
    *__retval = CookingPage__Template__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector CookingPage__Template__Template1::__selector0_;

// public Template1(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [instance] :20
void CookingPage__Template__Template1::ctor_1(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(CookingPage.Template parent, Fuse.Controls.Panel parentInstance) [static] :20
CookingPage__Template__Template1* CookingPage__Template__Template1::New2(::g::CookingPage__Template* parent, ::g::Fuse::Controls::Panel* parentInstance)
{
    CookingPage__Template__Template1* obj1 = (CookingPage__Template__Template1*)uNew(CookingPage__Template__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
